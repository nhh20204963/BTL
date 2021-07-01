#include<stdio.h>
#include<math.h>
int main(){
    const float Pi=3.14;
    float x;
    printf("\nenter the radius of a circle:  ");
    scanf("%f",&x);
    printf("Its area : %5.2f",pow(x,2)*Pi);
            return 0;
	}