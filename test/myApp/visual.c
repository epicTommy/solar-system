/* visual.c */
#include "visual.h"


int printSS(){
  double row, col;
  getmaxyx(stdscr,row,col);
  row = row / 2;
  col = col / 2;
  move(row,col);
  printw("s");

  for(int i = 0; i < PlanetNum; i++){
    printPlanet(getcA(i), row, col);
  }
  sleep(1);
  return SUCESS;
}

int printPlanet(double cA, double r, double c){
  move(r - 2 * sin(cA), c - 2 * cos(cA));
  return SUCESS;
}

int numYear(int year){
  initscr();
  init();
  printf("in num");
  for(int i = 0; i < year; i++){
    printSS();
  }
  endwin();
  return SUCESS;
}
