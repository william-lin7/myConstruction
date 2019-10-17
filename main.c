#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "headers.h"

int main(){
  struct food f0;
  struct food *p0 = &f0;
  p0 -> s = "chicken wings";
  p0 -> n = 5;
  printf("\nMENU ITEM #\tITEM\tPrice\n");
  printf("------------------------------\n\n");
  printf("ITEM 1:\t%s   %d\n\n", p0 -> s, p0 -> n);
  struct food f1 = sample();
  struct food *p1 = &f1;
  printf("ITEM 2:\t%s   %d\n\n", p1 -> s, p1 -> n);
  printf("ITEM 1 CONTENTS\n");
  contents(p0);
  modify(p0, "chicken nuggets", 10);
  printf("\nITEM 1 (MODIFIED):\t%s   %d\n\n", p0 -> s, p0 -> n);
  return 0;
}
