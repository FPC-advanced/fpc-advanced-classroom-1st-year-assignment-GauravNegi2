#include <stdio.h>

struct _point {
  float x;
  float y;
};

typedef struct _point Point;

Point input();
void dist(Point a, Point b, float *res);
void output(Point a, Point b, float res);

int main()
{
    Point point1, point2;
    float distance;

    printf("Enter coordinates for the first point (x y): ");
    point1 = input();

    printf("Enter coordinates for the second point (x y): ");
    point2 = input();

    dist(point1, point2, &distance);
    output(point1, point2, distance);

    return 0;
}

Point input()
{
    Point p;
    scanf("%f %f", &p.x, &p.y);
    return p;
}

void dist(Point a, Point b, float *res)
{
    *res = sqrt((b.x - a.x) * (b.x - a.x) + (b.y - a.y) * (b.y - a.y));
}

void output(Point a, Point b, float res)
{
    printf("The Distance between (%.1f,%.1f) and (%.1f,%.1f) is %.1f\n", a.x, a.y, b.x, b.y, res);
}
