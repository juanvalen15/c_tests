#include <stdio.h>
#include <stdlib.h>

int main(){

  //printf("Start test!\n");

  float a[4][1];
  float *pa = &a[0][0];

  float b[4][1];
  float *pb = &b[0][0];

  float c = 0;
  float *pc = &c;


  a[0][0] = 3.20;
  a[1][0] = -1.30;
  a[2][0] = 0.67;
  a[3][0] = 9.35;

  b[0][0] = 2.2;
  b[1][0] = 3.3;
  b[2][0] = 4.4;
  b[3][0] = 5.5;

  printf("a[0][0] %f, a[1][0] %f, a[2][0] %f, a[3][0] %f\n", a[0][0], a[1][0], a[2][0], a[3][0]);
  printf("b[0][0] %f, b[1][0] %f, b[2][0] %f, b[3][0] %f\n", b[0][0], b[1][0], b[2][0], b[3][0]);

  printf("*pa: %f, %f\n", *(pa + 0), *(&pa[0]) );
  printf("*pa: %f, %f\n", *(pa + 1), *(&pa[1]) );
  printf("*pa: %f, %f\n", *(pa + 2), *(&pa[2]) );
  printf("*pa: %f, %f\n", *(pa + 3), *(&pa[3]) );

  printf("*pc: %f, %f\n", *(pc + 0), *(&pc[0]) );

  /* Reassigning pointer c address */
  pc = &a[0][0];
  printf("*pc: %f, %f\n", *(pc + 0), *(&pc[0]) );
  printf("*pc: %f, %f\n", *(pc + 1), *(&pc[1]) );
  printf("*pc: %f, %f\n", *(pc + 2), *(&pc[2]) );
  printf("*pc: %f, %f\n", *(pc + 3), *(&pc[3]) );

  float tempc0 = *(pc + 0);
  float tempc1 = *(pc + 1);
  float tempc2 = *(pc + 2);
  float tempc3 = *(pc + 3);

  printf("tempc0 %f, tempc1 %f, tempc2 %f, tempc3 %f\n", tempc0, tempc1, tempc2, tempc3);

  return 0;
}
