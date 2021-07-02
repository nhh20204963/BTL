#include <stdio.h>
#include <string.h>

int main()
{
    char str[5][50] = {"TV127  31 inch Television", "CD057  CD Player", "TA877  Answering Machine", "CS409  Car Stereo", "PC655  Personal Computer"};
    char s[10];
    char *s1;
    gets(s);
    int i;
    for (i = 0; i < 5; i++)
    {
        if (str[i] == strstr(str[i], s))
        {
            s1 = strstr(str[i], s);
            printf("%s", s1);
            break;
        }
    }
    return 0;
}