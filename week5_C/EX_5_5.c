 #include<stdio.h>
int main(){
    double a,b;
    printf("Enter two numbers : ");
    scanf("%f%f",&a,&b);
    if(a==b){
        printf("a is equal to b\n");
        
    }
    else{
        if(a>b){
            printf("a is greater than b\n");
        }
        else{
            printf("b is greater than a\n");
        }
    }
      return 0;}