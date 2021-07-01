 #include<stdio.h>
#include<math.h>

void main( void )
{int a;
    printf("Enter a positive number: ");
    scanf("%d",&a);
  float x=0.5;
  int dem=1;
  while(dem<=9){
  x=x-(pow(x,3)-a)/(3*pow(x,2));
  dem++;
  };
printf("%f",x);
}