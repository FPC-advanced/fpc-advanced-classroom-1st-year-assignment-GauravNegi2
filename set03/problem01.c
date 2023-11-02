#include <stdio.h>
#include <math.h>

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
    printf("Enter Value of first point (x1 y1): ");
    scanf("%f %f", x1, y1);

    printf("Enter Value of second point (x2 y2): ");
    scanf("%f %f", x2, y2);
}

float find_distance(float x1, float y1, float x2, float y2)
{
    float x_diff=x2-x1;
    float y_diff=y2-y1;
    return sqrt(x_diff * x_diff + y_diff * y_diff);
}

void output(float x1, float y1, float x2, float y2, float distance)
{
    printf("Squared Distance between (%.2f, %.2f) and (%.2f, %.2f) is %.2f\n", x1, y1, x2, y2, distance);
}
