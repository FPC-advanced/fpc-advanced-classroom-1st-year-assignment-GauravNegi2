#include <stdio.h>

int input_number();
int is_composite(int n);
void output(int n, int result);

int main()
{
    int n,result;
    n=input_number();
    is_composite(n);
    output(n,result);
    return 0;
}

int input_number()
{
    int x;
    printf("Enter the Number: ");
    scanf("%d",&x);
    return x;
}

int is_composite(int n)
{
    if(n<=1)
    {
        return 0;
    }
    for(int i=2; i=n;i++)
    {
        if(n% i==0)
        {
            return 1;
        }
    }
}

void output(int n, int result)
{
    if(result==0)
    {
        printf("%d is a composite number",result);
    }
    else
    {
        printf("its is not a composite number");
    }
}