#include <stdio.h>
#define PI 3.142
int main(){
int i, j, n, k, dem = 0;
float a[100];
printf("nhap so phan tu cua mang:");
scanf("%d", &n);
for (i = 0; i < n; i++)
{
    printf("a[%d]=", i + 1);
    scanf("%f", &a[i]);
}
    printf("mang da nhap:\n");
    for (i = 0; i < n; i++)
    {
            printf(" %0.2f ", a[i]);
    }
    for (i = 1; i < n; i++)
    {
        for (j = 0; j < i; j++)
    {
    if (a[i] == a[j])
    {
        for (k = i; k < n; k++)
            {
                a[k] = a[k + 1];
                n--;
                i--;
            }
    }
    }
 }
        printf("\nmang sau khi xoa la:\n");
        for (i = 0; i < n; i++)
        {
            printf(" %0.2f ", a[i]);
        }
	return 0;
}
