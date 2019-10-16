#include <stdio.h>
#include <stdlib.h>

struct food{
  char *s;
  int n;
};

struct food sample (char *s, int n){
  struct food f;
  f.s = s;
  f.n = n;
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
