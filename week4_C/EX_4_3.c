#include<stdio.h>
int main(){
    char str[20];
    printf("Enter a string: ");
    scanf("%[abc]",str);
    printf("\nthe string is: %s\n",str);
        return 0;
}
