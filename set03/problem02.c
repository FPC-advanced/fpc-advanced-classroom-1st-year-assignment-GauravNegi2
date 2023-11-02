#include <stdio.h>
#include <math.h>

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3);
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result);

int main()
{
    float x1, y1, x2, y2, x3, y3;
    int result;
    input_triangle(&x1, &y1, &x2, &y2, &x3, &y3);
    result = is_triangle(x1, y1, x2, y2, x3, y3);
    output(x1, y1, x2, y2, x3, y3, result);

    return 0;
}

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
    printf("Enter Value of first point (x1 y1): ");
    scanf("%f %f", x1, y1);
    printf("Enter Value of second point (x2 y2): ");
    scanf("%f %f", x2, y2);
    printf("Enter Value of second point (x3 y3): ");
    scanf("%f %f", x3, y3);
}

int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
     float side1 = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    float side2 = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
    float side3 = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));

    if (side1 + side2 > side3 && side2 + side3 > side1 && side3 + side1 > side2) 
    {
        return 1;
    } else {
        return 0; 
    }
}

void output(float x1, float y1, float x2, float y2,float x3, float y3, int result)
{
      if (result)
    {
        printf("The points (%.2f, %.2f), (%.2f, %.2f), and (%.2f, %.2f) form a triangle.\n", x1, y1, x2, y2, x3, y3);
    }
    else
    {
        printf("The points (%.2f, %.2f), (%.2f, %.2f), and (%.2f, %.2f) do not form a triangle.\n", x1, y1, x2, y2, x3, y3);
    }
}