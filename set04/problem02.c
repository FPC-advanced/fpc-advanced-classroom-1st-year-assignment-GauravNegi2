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
    int x1 = f1.num * f2.den * f3.den;
    int x2 = f2.num * f3.den * f1.den;
    int x3 = f3.num * f1.den * f2.den;

    if (x1 <= x2 && x1 <= x3)
    {
        return f1;
    }

    else if (x2 <= x1 && x2 <= x3) 
    {
        return f2;
    } 
    
    else 
    {
        return f3;
    }
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