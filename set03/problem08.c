#include <stdio.h>
#include <math.h>

typedef struct point {
    float x,y;
} Point;


typedef struct polygon {
    int sides;
    Point p[100];
    float perimeter;
} Polygon;

int input_n();
int input_polygon(Polygon *p);
float find_distance(Point a, Point b);
void find_perimeter(Polygon* p);
void output(Polygon p);

int main()
{
    Polygon poly;
    input_polygon(&poly);
    find_perimeter(&poly);
    output(poly);
    return 0;
}

int input_n()
{
    int n;
    printf("Enter the number of sides of the polygon: ");
    scanf("%d", &n);
    return n;
}

int input_polygon(Polygon *p)
{
    int i, n;
    n = input_n();
    p->sides = n;

    for(i = 0; i < n; i++) {
        printf("Enter the coordinates of point %d (x,y): ", i+1);
        scanf("%f %f", &(p->p[i].x), &(p->p[i].y));
    }

    return n;
}

float find_distance(Point a, Point b)
{
    int distance = sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
    return distance;
}

void find_perimeter(Polygon* p)
{
    int i;
    float perimeter = 0.0;

    for(i = 0; i < p->sides; i++) {
        perimeter += find_distance(p->p[i], p->p[(i+1) % p->sides]);
    }

    p->perimeter = perimeter;
}

void output(Polygon p)
{
    printf("The perimeter of the polygon is %.6f\n", p.perimeter);
}
