#include <stdio.h>
int main() {
    int n, i;
    float num[100], sum = 0.0, avg;

    scanf("%d", &n);

    while (n > 100 || n < 1) {
        scanf("%d", &n);
    }

    for (i = 0; i < n; ++i) {
        scanf("%f", &num[i]);
        sum += num[i];
    }

    avg = sum / n;
    printf("%d", (int)avg);
    return 0;
}