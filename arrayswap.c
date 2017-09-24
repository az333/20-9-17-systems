#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {

  int ary1[10];
  int ary2[10];
  
  //populate first array with random values
  srand(time(NULL));
  
  for (int i = 0; i < 9; i ++) {
    ary1[i] = rand();
  }
  ary1[9] = 0;

  
  //print first array
  printf ("The original array: \n");
  
  for (int x = 0; x < 10; x ++) {
    printf ("aray[%d]: %d\n", x, ary1[x]);
  }

  
  //populate and print second array
  printf ("\nThe second array: \n");
  
  for (int y = 0; y < 10; y ++) {
    int *p = &ary1[9-y];
    ary2[y] = *p;
    printf ("aray[%d]: %d\n", y, ary2[y]);
  }

  
}
