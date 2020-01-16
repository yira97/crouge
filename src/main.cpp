#include <ncurses.h>

void screen_setup()
{
  initscr();
  noecho();
  refresh();
}

void map_setup()
{
}

int main()
{
  screen_setup();
  map_setup();
  getchar();
  endwin();
  return 0;
}
