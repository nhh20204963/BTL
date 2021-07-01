#include <stdio.h>
#include <math.h>

int check(int n){

    int i;
    for(i=2;i<=(float)sqrt(n);i++){
        if(n%i==0){
            return 0;
        };
    };
            return 1;

}
int main()
{ 
    int n;
    printf("2 ");
    for(n=3;n<100;n++){
        if(check(n)==1){
            printf("%d ",n);
        };
    };
    
   return 0;
}