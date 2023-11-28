#include <stdio.h>

int input();
float borga_X(int x);
void output(int x, float result);

int main()
{
    int x = input();
    float result = borga_X(x);
    output(x, result);
    return 0;
}

int input()
{
    int x;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    return x;
}

float borga_X(int x)
{
    float result = 1.0;
    float term = 1.0;
    int n = 1.0;

    while (term >= 0.000001) 
    {
        term *= (float)(x) / ((2 * n) * (2 * n + 1));
        result += term;
        n++;
    }

    return result;
}

void output(int x, float result)
{
    printf("borga(%d) = %f\n", x, result);
}