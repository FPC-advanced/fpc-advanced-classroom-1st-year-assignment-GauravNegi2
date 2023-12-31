#include <stdio.h>
#include <string.h>

void input_string(char* a, char* b);
int sub_str_index(char* string, char* substring);
void output(char *string, char *substring, int index);

int main()
{
    char string_main[100], string_sub[100];
    int index;
    input_string(string_main, string_sub);
    index = sub_str_index(string_main, string_sub);
    output(string_main, string_sub, index);
    return 0;
}

void input_string(char* a, char* b)
{
    printf("Enter the main string: ");
    scanf("%99s", a); 
    printf("Enter the substring: ");
    scanf("%99s", b);
}

int sub_str_index(char* string, char* substring)
{
    int j = strlen(string);
    int k = strlen(substring);

    for (int i = 0; i <= j - k; i++) 
    {
        if (strncmp(string + i, substring, k) == 0) 
        {
            return i;
        }
    }

    return -1;
}

void output(char *string, char *substring, int index)
{
    if (index != -1) 
    {
        printf("The index of '%s' in '%s' is %d\n", substring, string, index);
    } 
    else 
    {
        printf("'%s' is not a substring of '%s'\n", substring, string);
    }
}