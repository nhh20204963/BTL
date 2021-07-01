#include <stdio.h>

int main()
{
int n;
    printf("nhập độ cao của tam giác: ");
    scanf("%d",&n);
    int i,j;
    for(i=0;i>-(n-1);i--){
        for(j=-(n-1);j<=(n-1);j++){
            if(i==-j||i==j){
                printf(" * ");
            }else{
                printf("   ");
            }
        }
        printf("\n");
    }
    while(i==-(n-1)){
        for(j=-(n-1);j<=(n-1);j++){
            printf(" * ");
        };
        n++;
    };
    printf("\n");
return 0;
}