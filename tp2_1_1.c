// codigo a completar
#define N 20
int i;
double vt[N];
int main()
{
    for (i = 0; i < N; i++)
    {
        vt[i] = 1 + rand() % 100;
        printf("%f\n", vt[i]);
    }
    return 0;
}
