#include <stdio.h>

int input();
int find_fibo(int n);
void output(int n, int fibo);

int main()
{
    int n = input();
    int fibo = find_fibo(n);
    output(n, fibo);
    return 0;
}

int input()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    return n;
}

int find_fibo(int n)
{
    if(n<=1)
    {
        return n;
    }

    int fibo[n+1];
    fibo[1]=0;
    fibo[2]=1;
    fibo[3]=1;

    for(int i=4;i<=n;i++)
    {
        fibo[i]=fibo[i-1]+fibo[i-2];
    }
    return fibo[n];
}
void output(int n, int fibo)
{
    printf("fibo(%d) = %d\n", n, fibo);
}