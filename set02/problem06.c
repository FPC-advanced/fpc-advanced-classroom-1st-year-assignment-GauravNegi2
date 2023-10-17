#include <stdio.h>

void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);

int main()
{}

void input_string(char *a)
{}

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
{}
