#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct food{
  char *s;
  int n;
};

void srand(unsigned int seed);

char* menu[] = {"french fries", "burger", "hashbrowns", "milkshake", "coffee", "soda"};
int prices[] = {4, 6, 3, 5, 2, 1};

struct food sample (){
  struct food f;
  srand(time(0));
  int num = rand() % 6;
  f.s = menu[num];
  f.n = prices[num];
  return f;
}

void contents (struct food *f){
  printf("menu item: %s\n", f -> s);
  printf("item price: %d\n", f -> n);
}

void modify (struct food *f, char *s, int n){
  f -> s = s;
  f -> n = n;
}
