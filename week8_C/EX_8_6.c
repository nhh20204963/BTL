#include<stdio.h>
int main(){
    int a;
 int b=0;
printf("Enter a positive number : ");
scanf("%d",&a);
do{

printf("%3d",b);
b++;
} while(b<a);

    return 0;
}