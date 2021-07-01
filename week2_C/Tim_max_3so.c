      #include <stdio.h>
            int main(){
    float x,y,z,max;
    printf("Nhap 3 so x,y,z: ");
    scanf("%f%f%f",&x,&y,&z);
    max=x;
    if(y>max){
        max=y;
    }
    if(z>max){
        max=z;
    }
    printf("Gia tri lon nhat cua 3 so la %f",max);
    

 return 0;
 }