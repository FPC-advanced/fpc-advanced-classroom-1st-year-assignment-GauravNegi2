#include <stdio.h>

int input_n();
void input(int n, int a[n]);
float odd_average(int n, int a[n]);
void output(float avg);

int main()
{
    int n = input_n();
    int a[n];
    input(n, a);
    float avg = odd_average(n, a);
    output(avg);
    return 0;
}

int input_n()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    return n;
}

void input(int n, int a[n])
{
     printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }
}

float odd_average(int n, int a[n])
{
    int sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++) 
    {
        if (a[i] % 2 != 0) 
        {
            sum += a[i];
            count++;
        }
    }
    if (count == 0) 
    {
        return 0;  
    }
    return (float)sum / count;
}

void output(float avg)
{
    printf("Average of all the odd elements is: %.f\n", avg);
}