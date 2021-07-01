#include<stdio.h>
#include<string.h>
int main(){
    int i,j;
    int dem;
    char string[100];
    printf("nhập chuỗi cần xoá khoảng trắng");
        gets(string);

   int n= strlen(string);
for(i=0;i<n;i++){
    if(string[i]==' ' && string[i+1]==' '){
        dem++;
        for(j=i+1;j<n;j++){
            string[j]=string[j+1];

        }
i--;
    }
}
for(i=0;i<n-dem;i++){
    printf("%c",string[i]);
};
    return 0;
}