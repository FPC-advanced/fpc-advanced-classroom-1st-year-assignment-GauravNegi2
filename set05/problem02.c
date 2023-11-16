#include <stdio.h>
#include <math.h>

void input_camel_details(float *radius, float *height, float *length);
float find_weight(float radius, float height, float length);
void output(float radius, float height, float length, float weight);

int main()
{
    float radius, height, length, weight;
    input_camel_details(&radius, &height, &length);
    weight = find_weight(radius, height, length);
    output(radius, height, length, weight);
    return 0;
}

void input_camel_details(float *radius, float *height, float *length)
{
    printf("Enter the stomach radius: ");
    scanf("%f", radius);
    printf("Enter the height: ");
    scanf("%f", height);
    printf("Enter the length: ");
    scanf("%f", length);
}

float find_weight(float radius, float height, float length)
{
    return 3.1415 * pow(radius, 3) * sqrt(height * length);
}


void output(float radius, float height, float length, float weight)
{
    printf("The weight of the camel with radius: %.1f, height: %.1f, length: %.1f is %.4f\n", radius, height, length, weight);
}