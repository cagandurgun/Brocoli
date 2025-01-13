#include <stdio.h>
#include "Brocoli.h"
#include "Utilities.h"
#include "Colors.h"

// Test function for basic colors
void test_colors() {
    print_colored(FG_RED, NULL, NULL, NULL, "This is red text");
    print_colored(FG_GREEN, NULL, NULL, NULL, "This is green text");
    print_colored(FG_BLUE, NULL, NULL, NULL, "This is blue text");
    print_colored(NULL, BG_RED, NULL, NULL, "Red background");
    print_colored(NULL, BG_GREEN, NULL, NULL, "Green background");
    print_colored(NULL, BG_BLUE, NULL, NULL, "Blue background");
    print_colored(FG_WHITE, BG_RED, NULL, NULL, "White text on red background");
    print_colored(FG_YELLOW, BG_BLUE, NULL, NULL, "Yellow text on blue background");
    print_colored(FG_MAGENTA, NULL, BOLD, NULL, "Bold magenta text");
    print_colored(FG_CYAN, NULL, UNDERLINE, NULL, "Underlined cyan text");
    print_colored(FG_RED, NULL, BLINK, NULL, "Blinking red text");
    print_colored(FG_GREEN, NULL, REVERSE, NULL, "Green text with reverse colors");
    print_colored(FG_BLUE, BG_YELLOW, BOLD, NULL, "Bold blue text on yellow background");
    print_colored(FG_RED, BG_WHITE, UNDERLINE, NULL, "Underlined red text on white background");
}

// Test function for multiple styles
void test_combined_styles() {
    print_colored(FG_WHITE, BG_RED, BOLD, NULL, "Bold white text on red background");
    print_colored(FG_BLUE, BG_GREEN, BLINK, NULL, "Blinking blue text on green background");
    print_colored(FG_RED, BG_BLUE, BOLD, BLINK, "Bold and blinking red text on blue background");
    print_colored(FG_GREEN, NULL, BOLD, UNDERLINE, "Bold and underlined green text");
    print_colored(FG_RED, BG_WHITE, BOLD, BLINK, "Bold, blinking red text on white background");
}

// Test function for animations
void test_animations() {
    br_move_text("Testing Move Animation", 100, 20);
    printf("\n");
    progress_bar();
}

int main() {
    // Welcome message
    print_colored(FG_GREEN, NULL, BOLD, NULL, "\n=== Welcome to Brocoli Library Tests ===\n");
    
    // Show broccoli logo
    greeter();
    
    // Basic color tests
    print_colored(FG_CYAN, NULL, BOLD, NULL, "\n=== Basic Color Tests ===\n");
    test_colors();
    
    // Combined style tests
    print_colored(FG_CYAN, NULL, BOLD, NULL, "\n=== Combined Style Tests ===\n");
    test_combined_styles();
    
    // Animation tests
    print_colored(FG_CYAN, NULL, BOLD, NULL, "\n=== Animation Tests ===\n");
    test_animations();
    
    // Helper information
    print_colored(FG_CYAN, NULL, BOLD, NULL, "\n=== Helper Information ===\n");
    helper();
    
    // Completion message
    print_colored(FG_GREEN, NULL, BOLD, NULL, "\n=== Tests Completed Successfully ===\n");
    
    return 0;
}
