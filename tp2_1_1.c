// codigo a completar
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20
int main()
{
    int i;
    double vt[N];
    srand(time(NULL));
    for (i = 0; i < N; i++)
    {
        vt[i] = 1 + rand() % 100;
        printf("%f\n", vt[i]);
    }
    return 0;
}
