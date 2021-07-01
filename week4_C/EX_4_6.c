#include<stdio.h>
#include<math.h>
int main(){
    int hour;
    printf("\nEnter the number of hours: ");
    scanf("%d",&hour);
    printf("\nThe total of salary is : %d($)\n",40*25000+(hour-40)*40000);
            return 0;
}