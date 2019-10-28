#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int p1();
int p6();

int p1() {
  int i = 0;
  int total = 0;
  for (i = 3; i < 1000; i++) {
    if (i % 3 == 0 || i % 5 == 0) {
      total += i;
    }
  }
  printf("sum of multiples of 3 & 5 under 1000 = %d", total);
}

int p6() {
  int sum = 0;
  int i = 1;
  int sq = 0;
  for (i = 1; i <= 100; i++) {
    sum += (i*i);
    sq += i;
  }  
  sq *= sq;
  int ans = sum - sq;
  printf("the sum of the squares of the 1st 100 #s - the square of the sum of the 1st 100 #s is %d", ans);
}

int main() {
  p1();
  printf("\n");
  p6();
}


