#include <stdio.h>
#include <math.h>

typedef struct _camel 
{
    float radius, height, length, weight;
} Camel;

void input(int n, Camel c[n], float *truck_weight);
void find_camel_weight(int n, Camel c[n]);
float compute_total_weight(int n, Camel c[n], float truck_weight);
void output(float total_weight);

int main()
{
    int n;
    printf("Enter the number of camels: ");
    scanf("%d", &n);
    Camel camels[n];
    float truck_weight;
    input(n, camels, &truck_weight);
    find_camel_weight(n, camels);
    float total_weight = compute_total_weight(n, camels, truck_weight);
    output(total_weight);
    return 0;
}

void input(int n, Camel c[n], float *truck_weight)
{
    for (int i = 0; i < n; i++) {
        printf("Enter the height of camel no. %d: ", i + 1);
        scanf("%f", &c[i].height);
        printf("Enter the length of camel no. %d: ", i + 1);
        scanf("%f", &c[i].length);
        printf("Enter the radius of camel no. %d: ", i + 1);
        scanf("%f", &c[i].radius);
    }

    printf("Enter the weight of the truck: ");
    scanf("%f", truck_weight);
}

void find_camel_weight(int n, Camel c[n])
{
    for (int i = 0; i < n; i++) 
    {
        c[i].weight = 3.14 * pow(c[i].radius, 3) * sqrt(c[i].length*c[i].height);
    }
}

float compute_total_weight(int n, Camel c[n], float truck_weight)
{
    float total_weight = truck_weight;

    for (int i = 0; i < n; i++) {
        total_weight += c[i].weight;
    }

    return total_weight;
}

void output(float total_weight)
{
    printf("The Total weight of the truck is: %f\n", total_weight);
}