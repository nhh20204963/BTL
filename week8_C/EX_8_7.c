#include<stdio.h>
#include<math.h>
int main()
{int i=1;
float sum=0;
    float arr[100];
    printf("Nhập các điểm : ");
    while(1){
        printf("\nđiểm số %d: ",i);
        scanf("%f",&arr[i-1]);
        if(arr[i-1]==-1) break;
        sum=sum+arr[i-1];
       i++;
    }
    printf("\ntrung bình điểm là : %3.2f",sum/(i-1));
    
return 0;
}