#include <stdio.h>

void input(float *base, float *height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);

int main()
{
    float b,h,a;
    input(&b,&h);
    find_area(b,h,&a);
    output(b,h,a);
    return 0;
}

void input(float *base, float *height)
{
    scanf("%f%f",base,height);
}

void find_area(float base , float height, float *area)
{
    *area=(base*height)/2;
} 

void output(float base, float height, float area)
{
    printf("The area of the traingle with base %f and height %f is %f",base,height,area);
}

