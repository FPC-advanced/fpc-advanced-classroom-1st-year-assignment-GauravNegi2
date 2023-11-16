#include <stdio.h>

typedef struct {
    int num, den;
} Fraction;

Fraction input() 
{
    Fraction f;
    scanf("%d %d", &f.num, &f.den);
    return f;
}

Fraction find_smallest(Fraction f1, Fraction f2, Fraction f3)
{
    float x1 = (float)f1.num / f1.den;
    float x2 = (float)f2.num / f2.den;
    float x3 = (float)f3.num / f3.den;
    Fraction smallest;
    smallest = (x1 < x2) ? ((x1 < x3) ? f1 : f3) : ((x2 < x3) ? f2 : f3);
    return smallest;
}

void output_result(Fraction f1, Fraction f2, Fraction f3, Fraction smallest) 
{
    printf("The smallest of %d/%d, %d/%d, and %d/%d is %d/%d\n",f1.num, f1.den, f2.num, f2.den, f3.num, f3.den, smallest.num, smallest.den);
}

int main() 
{
    Fraction fract1, fract2, fract3;
    fract1 = input();
    fract2 = input();
    fract3 = input();
    Fraction smallest = find_smallest(fract1, fract2, fract3);
    output_result(fract1, fract2, fract3, smallest);
    return 0;
}