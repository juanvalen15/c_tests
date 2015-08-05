#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

  clock_t time_stamp;

  time_stamp = clock(); /* measure time */
  printf("Initial time stamp: %lu\n", time_stamp);

  printf("Time measurement test\n");
  printf("Using clock\n");

  int a, b, c, d;
  a = 2;
  b = 5;
  c = a + b;
  d = a * b;

  time_stamp = clock(); /* measure time */
  printf("Time after prints and operations %lu\n", time_stamp);

  return 0;
}
