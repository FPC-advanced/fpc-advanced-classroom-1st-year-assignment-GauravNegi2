#include <stdio.h>

void input(float *x1, float *y1, float *x2, float *y2);
float find_distance(float x1, float y1, float x2, float y2);
void output(float x1, float y1, float x2, float y2, float distance);

int main()
{
    float x1,x2,y1,y2;
    input(&x1, &y1, &x2, &y2);
    float distance = find_distance(x1, y1, x2, y2);
    output(x1, y1, x2, y2, distance);
    return 0;
}

void input(float *x1, float *y1, float *x2, float *y2)
{
    printf("Enter coordinates of first point (x1 y1): ");
    scanf("%f %f", x1, y1);

    printf("Enter coordinates of second point (x2 y2): ");
    scanf("%f %f", x2, y2);
}

float find_distance(float x1, float y1, float x2, float y2)
{
    float x_diff=x2-x1;
    float y_diff=y2-y1;
    return x_diff*x_diff+y_diff*y_diff;
}

void output(float x1, float y1, float x2, float y2, float distance)
{
    printf("The distance between point (%2.f,%2.f) and (%2.f,%2.f) is %2.f",x1,x2,y1,y2,distance);
}
