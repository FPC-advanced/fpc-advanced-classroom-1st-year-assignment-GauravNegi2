#include <stdio.h>

int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);

int main()
{
   
}

int input()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    return n;
}

int find_gcd(int a, int b)
{
      int gcd;
    for(int i = 1; i <= a && i <= b; i++) 
    {
        if(a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }
    return gcd;
}


void output(int a, int b, int gcd)
{
    printf("Gcd is %d\n", a, b, gcd);
}
