#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void calcPi()
{
  double realPi = 3.141592653589793;
  double epsilon = 0.00000001;
  double delta = 10;
  int k = 1;

  double pi_value = 0;
  int totalIterations = 0;
  while (delta > epsilon)
  {
    pi_value += pow(-1, (k + 1)) / (2 * k - 1);
    delta = fabs((4 * pi_value) - realPi);
    k++;
  }
  printf("%d iterations\n", k);
}

int main()
{
  struct timespec stime, etime;
  printf("Hello, Pi\n");
  clock_gettime(CLOCK_MONOTONIC_RAW, &stime);
  calcPi();
  clock_gettime(CLOCK_MONOTONIC_RAW, &etime);
  uint64_t delta_us = (etime.tv_sec - stime.tv_sec) * 1000000 + (etime.tv_nsec - stime.tv_nsec) / 1000;
  printf("%f ms\n", delta_us / 1000.0);
  return 0;
}