#include <stdio.h>
#include <string.h>
#define length 7

void kiem_tra(char s[])
{
    int i;
    int dem = 0, dem1 = 0;
    for (i = 0; i < 3; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
        {
            dem++;
        }
    }
    int j;
    for (j = 3; j < length; j++)
    {
        if (s[j] >= '0' && s[i] <= '9')
        {
            dem1++;
        }
    }
    if (dem + dem1 == 7)
        printf("hop le");
    else
        printf("khong hop le");
}

int main()
{
    char s[100];
    scanf("%s", s);
    kiem_tra(s);
    return 0;
}