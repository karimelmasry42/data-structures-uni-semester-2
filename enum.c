#include <stdio.h>
int main() {
  typedef enum {False, True} Bool;
  Bool var = True;
  printf("%d", var);
}