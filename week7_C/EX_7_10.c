#include <stdio.h>
int check(int a){
    int sum = 0;//khai báo biến sum
    for(int i=1;i<=a/2;i++){ //tạo vòng lặp for để tìm ước số của a
        if(a%i==0){ 
            sum+=i; }//tổng các ước số của a
    }
    if(sum==a){ return 1;} // trả về true
    return 0; // ngược lại trả về false
}
int main() { 
    printf("Các số hoàn hảo nhỏ hơn 100 là : ");
    int n;
    
for(n=2;n<1000;n++){
    if(check(n)){
        printf("%d ",n);
    };
}
printf("\n");
    return (0);
    
}