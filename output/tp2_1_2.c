// codigo a completar
#define N 20
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i;

    double vt[N];

    srand(time(NULL));

    for (i = 0; i < N; i++)

    {

        vt[i] = 1 + rand() % 100;
    }

    double *p = vt;

    for (i = 0; i < N; i++)
    {

        printf("%f\n", *(p + i));
    }

    return 0;
}