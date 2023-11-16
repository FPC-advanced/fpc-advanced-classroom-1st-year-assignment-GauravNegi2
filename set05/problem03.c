#include <stdio.h>

struct camel {
	float radius, height, length,weight;
};

typedef struct camel Camel;

Camel input();
float find_weight(Camel c);
void output(Camel c);

int main()
{
    Camel c;
    c = input();
    c.weight = find_weight(c);
    output(c);
    return 0;
}

Camel input()
{
    Camel c;
    printf("Enter the radius, height, and length of the camel:\n");
    scanf("%f%f%f", &c.radius, &c.height, &c.length);
    return c;
}

float find_weight(Camel c)
{
    return 3.1415 * pow(c.radius, 3) * sqrt(c.height * c.length);
}

void output(Camel c)
{
    printf("The weight of the camel with radius: %.2f, height: %.2f, length: %.2f is %.4f\n",c.radius, c.height, c.length, c.weight);
}