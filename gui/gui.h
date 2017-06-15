#ifndef _GUI_H
#define _GUI_H

#include "list.h"
#include "keys.h"
#include <curses.h>

#define A_ATTR (A_ATTRIBUTES ^ A_COLOR)
#define KEY_ESC 0x1b

#define MAX_KEY_NAME_LEN 25
#define KEY_PRINT_FORMAT "%-5s %-5s %-25s %-s"
#define MAX_STR_LEN 256

typedef void (*Func)();

typedef struct Menu {
    char *name;
    Func func;
    char *description;
} Menu;


void finish();
void start_menu(Menu *mp, char *title);
void do_menu(Menu *mp);

void title_message(char*);
void status_message(char*);
void error_message(char*, int);
void remove_status_message();
void remove_error_message();

void clear_body();

bool key_pressed();
int get_key();
int wait_for_key();

Key* select_key(List*);


#endif // _GUI_H