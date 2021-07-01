    #include<stdio.h>
int main(){
 int x,y,z,t;
 printf("\nenter the day of the week:  ");
 scanf("%d",&x);
  printf("\n the day of the week:%d",x);
printf("\nenter the number of overnight: ");
  scanf("%d",&y);
   printf("\nthe number of overnight:%d",y);
printf("\nenter the number of three-day: ");
   scanf("%d",&z);
    printf("\nthe number of three-day:%d ",z);
printf("\nenter the number of weekly: ");
  scanf("%d",&t);
   printf("\nthe number of weekly:%d",t);
   printf("\ntotal cost of renting the DVDs:%d",7*y+5*z+3*t);



 return 0;
}