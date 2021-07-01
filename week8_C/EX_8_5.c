 #include<stdio.h>
#include<math.h>

int main()
{int a;
printf("Nhập số lượng học sinh: ");
scanf("%d",&a);
    int i=1;
 printf("Nhập trạng thái cho từng học sinh:(1:pass;2:fail) ");
 int j[a-1];
while(i<=a){
    printf("\nHọc sinh %d: ",i);
    scanf("%d",&j[i-1]);
    i++;
}
printf("\nKết quả : ");
i=1;
while(i<=a){
    if(j[i-1]==1){
        printf("\nHọc sinh %d: Đạt",i);
    }else{
        printf("\nHọc sinh %d:Trượt",i);
    }
    i++;
}
return 0;
}