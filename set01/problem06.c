#include <stdio.h>
void input(int *a, int *b, int *c);
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);

int main()
{
    int a,b,c, largest;
    input(&a,&b,&c);
    compare(a,b,c, &largest);
    output(a,b,c,largest);
    return 0;

}

void input(int *a, int *b, int *c)
{
    printf("Enter the value\n");
    scanf("%d",a);
    printf("Enter the value\n");
    scanf("%d",b);
    printf("Enter the value\n");
    scanf("%d",c);
}

void compare(int a, int b, int c, int *largest)
{
    if(a>=b && a>=c)

{

*largest= a;
}

if(b>=a && b>=c)

{

*largest= b;

}

else

{

*largest= c;
}

}

void output(int a, int b, int c, int largest)
{
     printf("The largest is %d\n", largest);
}
