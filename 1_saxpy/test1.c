/*
test1.c - A simple saxpy test with 3 inputs.
Scott J. Krieder
skrieder@iit.edu
*/

#include "saxpy.c"
#include <stdio.h>
#include <assert.h>

int main(){

  int n = 3;
  float a = 2.0;

  float x[3] = {1, 2, 3};
  float y[3] = {4, 5, 6};

  printf("SAXPY Test 1:\n");
  printf("SAXPY = Single Precision A*X + Y\n");

  printf("For initial conditions:\n");
  for (int i = 0; i < n; i++){
    printf("x[%i] = %f\n", i, x[i]);
  }
  for (int i = 0; i < n; i++){
    printf("y[%i] = %f\n", i, y[i]);
  }
  printf("a = %f\n", a);

  // perform a saxpy
  saxpy(3, 2.0, x, y);

  printf("After computation:\n");
  for (int i = 0; i < n; i++){
    printf("y[%i] = %f\n", i, y[i]);
  }
  
  assert(y[0]==6.0);
  assert(y[1]==9.0);
  assert(y[2]==12.0);

  return 0;
}
