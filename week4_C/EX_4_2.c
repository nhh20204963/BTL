 #include<stdio.h>
#include<limits.h>
#include<math.h>
int main(){
    char a[100];
    printf("\nLimit of the data types int : %d -> %d \n",INT_MIN,INT_MAX);
    printf("Limit of the data types long : %d -> %d \n",LONG_MIN,LONG_MAX);
    printf("Limit of the data types char : %d -> %d \n",CHAR_MIN,CHAR_MAX);
    printf("Enter the String: ");
    scanf("%s",a);
    printf("The String : %s\n",a);
        return 0;
		}