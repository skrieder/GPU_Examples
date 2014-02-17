/*                                                                                                 
test2.c - A simple saxpy test with 3 sudo-random inputs. 
Scott J. Krieder                                                                                     
skrieder@iit.edu                                          
*/

#include "saxpy.c"
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

int main(){

  int n = 3;
  float a = 2.0;

  srand (time(NULL));

  float *x = (float *)malloc(sizeof(float)*n);
  populateRandomFloatArray(3, x);

  float *y = (float *)malloc(sizeof(float)*n);
  populateRandomFloatArray(3, y);
 
  printf("SAXPY Test 2:\n");
  printf("SAXPY = Single Precision A*X + Y\n");

  printf("For initial conditions:\n");
  for (int i = 0; i < n; i++){
    printf("x[%i] = %f\n", i, x[i]);
  }
  for (int i = 0; i < n; i++){
    printf("y[%i] = %f\n", i, y[i]);
  }
  printf("a = %f\n", a);

  // Perform SAXPY 
  saxpy(n, 2.0, x, y);

  printf("After computation:\n");
  for (int i = 0; i < n; i++){
    printf("y[%i] = %f\n", i, y[i]);
  }
  
  return 0;
}
