#include <stdio.h>

typedef struct fraction
{
    int num, den;
} Fraction;

int input_n();
Fraction input_fraction();
void input_n_fractions(int n, Fraction f[n]);
int find_gcd(int a, int b);
Fraction add_fractions(Fraction f1, Fraction f2);
Fraction add_n_fractions(int n, Fraction f[n]);
void output(int n, Fraction f[n], Fraction sum);

int main()
{
    int n;
    n = input_n();
    Fraction fractions[n], sum;
    input_n_fractions(n, fractions);
    sum = add_n_fractions(n, fractions);
    output(n, fractions, sum);
    return 0;
}

int input_n()
{
    int n;
    printf("Enter the number of fractions: ");
    scanf("%d", &n);
    return n;
}

Fraction input_fraction()
{
    Fraction f;
    printf("Enter numerator and denominator separated by space: ");
    scanf("%d %d", &f.num, &f.den);
    return f;

}

void input_n_fractions(int n, Fraction f[n])
{
    for (int i = 0; i < n; i++) 
    {
        f[i] = input_fraction();
    }
}

int find_gcd(int a, int b)
{
    for (int temp; b != 0; temp = b, b = a % b, a = temp);
    return a;
}

Fraction add_fractions(Fraction f1, Fraction f2)
{
     Fraction result;
    result.num = (f1.num * f2.den) + (f2.num * f1.den);
    result.den = f1.den * f2.den;
    int gcd = find_gcd(result.num, result.den);
    result.num /= gcd;
    result.den /= gcd;
    return result;
}

Fraction add_n_fractions(int n, Fraction f[n])
{
    Fraction sum = f[0];
    for (int i = 1; i < n; i++) 
    {
        sum = add_fractions(sum, f[i]);
    }
    return sum;
}

void output(int n, Fraction f[n], Fraction sum)
{
    printf("%d/%d", f[0].num, f[0].den);

    for (int i = 1; i < n; i++) {
        printf(" + %d/%d", f[i].num, f[i].den);
    }

    printf(" = %d/%d\n", sum.num, sum.den);
}
