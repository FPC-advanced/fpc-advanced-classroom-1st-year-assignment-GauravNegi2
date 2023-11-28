#include <stdio.h>

void input(char *name);
int has_nice_name(char *c);
void output(int res);

int main()
{
    char name[100];
    input(name);
    int result = has_nice_name(name);
    output(result);
    return 0;
}

void input(char *name)
{
    printf("Enter the name of the camel: ");
    scanf("%s", name);
}

int has_nice_name(char *c)
{
    int l = 0, cons = 0, v = 0;

    for (l = 0; c[l] != '\0'; l++);

    for (int i = 0; i < l; i++) 
    {
        if (c[i] == 'a' || c[i] == 'e' || c[i] == 'i' || c[i] == 'o' || c[i] == 'u' || c[i] == 'A' || c[i] == 'E' || c[i] == 'I' || c[i] == 'O' || c[i] == 'U')
        { 
            v++;
        } 
        else 
        {
            cons++;
        }
    }

    return (v >= 2 && cons >= 2);
}

void output(int res)
{
   if (res == 1) 
    {
        printf("The camel has a nice name\n");
    } 
    else 
    {
        printf("The camel does not have a nice name\n");
    }
}