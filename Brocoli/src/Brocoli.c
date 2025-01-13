#include "Brocoli.h"
#include "Colors.h"
#include <stdio.h>
#include <unistd.h>

void print_colored(const char *foreground, const char *background, const char *style1, const char *style2, const char *text) {
    printf("%s%s%s%s%s%s\n",
        foreground ? foreground : "",
        background ? background : "",
        style1 ? style1 : "",
        style2 ? style2 : "",
        text,
        RESET); // Reset colors
}

void br_move_text(const char* text, int delay_ms, int distance) {
    // Clear screen and move cursor to start
    printf("\033[2J\033[H");
    
    for (int i = 0; i < distance; i++) {
        // Move cursor to start
        printf("\033[H");
        
        // Print spaces
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        
        // Show text in green color
        print_colored(FG_GREEN, NULL, BOLD, NULL, text);
        
        // Flush buffer and wait
        fflush(stdout);
        usleep(delay_ms * 1000);
    }
}

void progress_bar() {
    int width = 30; // Bar width
    printf("Progress:\n");
    for (int i = 0; i <= width; i++) {
        printf("\033[42m"); // Green background
        for (int j = 0; j < i; j++) printf(" ");
        printf("\033[0m");
        printf(" %d%%\r", (i * 100) / width); // Percentage display
        fflush(stdout);
        usleep(100000); // Wait 0.1 seconds
    }
    printf("\nCompleted!\n");
}
