#include <stdio.h>

int input_size();
void input_array(int n, int a[n]);
int find_largest_index(int n, int a[n]);
void output(int index);

int main()
{
    int size = input_size();
    int array[size];
    input_array(size, array);
    int largestIndex = find_largest_index(size, array);
    output(largestIndex);
    return 0;
}


int input_size()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    return n;
}

void input_array(int n, int a[n])
{
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; ++i) 
    {
        scanf("%d", &a[i]);
    }
}

int find_largest_index(int n, int a[n])
{
    int j = 0;

    for (int i = 1; i < n; ++i) 
    {
        if (a[i] > a[j]) 
        {
            j = i;
        }
    }

    return j;
}

void output(int index)
{
    printf("The index of the largest number in the array is %d\n", index);
}