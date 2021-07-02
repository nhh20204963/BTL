#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    gets(s);
    int i;
    for (i = 0; i < strlen(s); i++)
    {
        if (s[i] == ',' || s[i] == '.' || s[i] == ';' || s[i] == ':' || s[i] == '!' || s[i] == '?')
        {
            s[i] = ' ';
        }
    }
    puts(s);
}