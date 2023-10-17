#include <stdio.h>

int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);

int main()
{
    int n, sum;
    n = input_array_size();  
    int a[n];  
    input_array(n, a);  
    sum = sum_composite_numbers(n, a);  
    output(sum);  
    return 0;
}

int input_array_size()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    return n;
}

void input_array(int n, int a[n])
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter the elements of the array: ");
        scanf("%d", &a[i]);
    }
}

int sum_composite_numbers(int n, int a[n]) 
{
    int sum = 0;
    for(int i = 0; i < n; i++) 
    {
        int is_composite = 0; 
        if(a[i] > 3) 
        { 
            for(int j = 2; j <= a[i] / 2; j++) 
            {
                if(a[i] % j == 0) 
                {
                    is_composite = 1;
                    break;
                }
            }
        }
        if(is_composite) 
        {
            sum += a[i];
        }
    }
    return sum;
}

void output(int sum)
{
    printf("The sum of composite numbers is: %d\n", sum);
}