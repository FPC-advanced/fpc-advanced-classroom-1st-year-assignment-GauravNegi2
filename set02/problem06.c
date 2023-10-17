#include <stdio.h>

void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);

int main()
{
    char a[100], reverse_a[100];
    input_string(a);
    str_reverse(a, reverse_a);
    output(a, reverse_a);
    return 0;
}


void input_string(char *a)
{
    printf("Enter string: ");
    scanf("%s", a);
}

void str_reverse(char *str, char *rev_str)
{
    int i;
    for(i = 0; str[i] != '\0'; i++);
    for(int j = 0; j < i; j++) 
    {
        rev_str[j] = str[i - j - 1];
    }
    rev_str[i] = '\0';
}

void output(char *a, char *reverse_a)
{
    printf("%s", reverse_a);
}
