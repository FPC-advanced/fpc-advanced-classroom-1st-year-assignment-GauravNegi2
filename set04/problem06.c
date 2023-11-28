#include <stdio.h>
#include <string.h>

void input_string(char *a);
int count_words(char *string, char *originalString);
void output(char *originalString, int no_words);

int main() {
    char inputString[100];
    input_string(inputString);
    
    char originalString[100];
    strcpy(originalString, inputString);

    int wordCount = count_words(inputString, originalString);
    output(originalString, wordCount);

    return 0;
}

void input_string(char *a) 
{
    printf("Enter a string: ");
    scanf(" %99[^\n]", a);
}

int count_words(char *string, char *originalString) 
{
    int count = 0;
    char *token = strtok(string, " ");

    while (token != NULL) {
        count++;
        token = strtok(NULL, " ");
    }
    strcpy(string, originalString);

    return count;
}

void output(char *originalString, int no_words) 
{
    printf("The number of words in \"%s\" is %d\n", originalString, no_words);
}
