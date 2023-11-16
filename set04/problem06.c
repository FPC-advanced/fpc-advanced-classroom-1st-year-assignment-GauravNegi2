#include <stdio.h>

void input_string(char *a);
int count_words(char *string);
void output(char *string, int no_words);

int main()
{
    char inputString[100];
    input_string(inputString);
    int wordCount = count_words(inputString);
    output(inputString, wordCount);
    return 0;
}

void input_string(char *a)
{
    printf("Enter a string: ");
    scanf("%99[^\n]", a);
}

int count_words(char *string)
{
    int count = 0;
    int in_word = 0;
    for (int i = 0; string[i] != '\0'; i++) 
    {
        if (string[i] == ' ' || string[i] == '\t') 
        {
            in_word = 0; 
        } 
        else 
        {
            if (in_word == 0) 
            {
                count++;
            }
            in_word = 1;
        }
    }
    return count;
}

void output(char *string, int no_words)
{
    printf("The number of words in \"%s\" is %d\n", string, no_words);
}