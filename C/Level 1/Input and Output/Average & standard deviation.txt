#include <stdio.h>
#include <math.h>
#define MAXSIZE 10
int main() {
	float x[MAXSIZE];
    int  i, n, avg;
    float average, variance, std_deviation, sum = 0, sum1 = 0;
 
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%f", &x[i]);
    }
    /*  Compute the sum of all elements */
    for (i = 0; i < n; i++)
    {
        sum = sum + x[i];
    }
    average = sum / (float)n;
  	avg = (int)average;
    /*  Compute  variance  and standard deviation  */
    for (i = 0; i < n; i++)
    {
        sum1 = sum1 + pow((x[i] - average), 2);
    }
    variance = sum1 / (float)n;
    std_deviation = sqrt(variance);
  	int _sd;
  	_sd = (int)std_deviation;
    printf("Mean=%d\n", avg);
    printf("SD=%d\n", _sd);
	return 0;
}