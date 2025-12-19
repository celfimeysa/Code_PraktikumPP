#include <ncurses\curses.h>
#include <string>
using namespace std;

int main(){
    int x = 10, y = 10;
    int ch;

    initscr();
    raw();
    keypad(stdscr, TRUE);
    noecho();
    mvprintw(0, 0, "gunakan tombol panah untuk menggerakkan teks. tekan 'q' untuk keluar.");

    while((ch = getch()) != 'q'){
        clear();
        refresh();
        mvprintw(0, 0, "gunakan tombol panah untuk menggerakan teks. tekan 'q' untuk keluar.");
        mvprintw(1,0, " PP ");

        switch(ch){
            case KEY_UP:
            y =  y - 1 ;
            break;
            case KEY_DOWN:
            y = (y < LINES - 1) ? y + 1 : y;
            break;
            case KEY_LEFT:
             x = x - 1;
             break;
             case KEY_RIGHT:
             x = (x < COLS -1 )? x + 1 : x;
             break;
        }
        string xTemp = to_string(x);
        string yTemp = to_string(y);
        string chtemp = to_string(ch);

        mvprintw(1, 0, "x : ");
        mvprintw(1, 4, xTemp.c_str());

        mvprintw(2,0, "y : ");
        mvprintw(2,4, yTemp.c_str());

        mvprintw(3, 0, "in : ");
        mvprintw(3, 4, chtemp.c_str());

        mvprintw(y, x, "M");
        refresh();
    

    }
    endwin();
    return 0;
}