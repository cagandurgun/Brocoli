#ifndef Brocoli_H
#define Brocoli_H

void print_colored(const char *foreground, const char *background, const char *style1, const char *style2, const char *text);

void br_move_text(const char* text, int delay_ms, int distance);

void progress_bar();

#endif // Brocoli_H
