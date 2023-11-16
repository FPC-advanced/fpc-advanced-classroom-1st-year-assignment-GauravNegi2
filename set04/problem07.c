#include <stdio.h>

typedef struct {
    int num, den;
} Fraction;

Fraction input_fraction();
int find_gcd(int a, int b);
Fraction add_fractions(Fraction f1, Fraction f2);
void output(Fraction f1, Fraction f2, Fraction sum);

int main()
{
    Fraction fraction1, fraction2, sum;
    fraction1 = input_fraction();
    fraction2 = input_fraction();
    sum = add_fractions(fraction1, fraction2);
    output(fraction1, fraction2, sum);
    return 0;
}


Fraction input_fraction()
{
    Fraction f;
    printf("Enter numerator and denominator: ");
    scanf("%d %d", &f.num, &f.den);
    return f;
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

void output(Fraction f1, Fraction f2, Fraction sum)
{
    printf("%d/%d + %d/%d = %d/%d\n", f1.num, f1.den, f2.num, f2.den, sum.num, sum.den);
}