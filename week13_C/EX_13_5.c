#include <stdio.h>
#include <string.h>
int dem(char s[])
{
    int i;
    int count = 0;
    for (i = 0; i < strlen(s); i++)
    {
        if (s[i] == ' ')
        {
            count++;
        }
    }
    return count;
}
int main()
{
char str[100];
char s[2] = " ";
char *token;
gets(str);
int a = dem(str);
token = strtok(str, s);
int i = 0;
while (token != NULL)
    {
        i++;
        if (i == a+1)
        {
            printf("%s", token);
            break;
        }
token = strtok(NULL, s);
    }
}