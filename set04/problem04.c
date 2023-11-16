#include <stdio.h>

int input_degree();
void input_coefficients(int n, float a[n]);
float input_x();
float evaluate_polynomial(int n, float a[n], float x);
void output(int n, float a[n], float x, float result);

int main()
{
    int degree = input_degree();
    float coefficients[degree + 1];
    input_coefficients(degree + 1, coefficients);
    float x = input_x();
    float result = evaluate_polynomial(degree + 1, coefficients, x);
    output(degree, coefficients, x, result);
    return 0;
}

int input_degree()
{
    int n;
    printf("Enter the degree of the polynomial: ");
    scanf("%d", &n);
    return n;
}

void input_coefficients(int n, float a[n])
{
    printf("Enter the coefficients of the polynomial (from x^0 to x^n): ");
    for (int i = 0; i < n; ++i) 
    {
        scanf("%f", &a[i]);
    }
}

float input_x()
{
    float x;
    printf("Enter the value of x: ");
    scanf("%f", &x);
    return x;
}

float evaluate_polynomial(int n, float a[n], float x)
{
    float result = a[n - 1];

    for (int i = n - 2; i >= 0; --i) 
    {
        result = result * x + a[i];
    }

    return result;
}

void output(int n, float a[n], float x, float result)
{
    printf("H(%d,%.2f, %.2f) = %.2f + %.2f * %.2f^%d = %.7f\n", n, a[0], x, a[0], a[1], x, n - 1, result);
}