#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdbool.h>                        // thu vien kieu bool 
#include <stdlib.h>                       
#include<math.h>
#include<string.h>
#include<time.h>
//tao struct
struct Chiabai
{
    int hang;
    int cot;
    char name[20];

};

void Docfile(FILE* f1, struct Chiabai S1[53]) {
    int i;          //doc thong tin tu file

    for (i = 1; i < 53; i++) {
        char tx[5];
        fscanf(f1, "%d", &S1[i].hang);
        fscanf(f1, "%d", &S1[i].cot);
        fgets(S1[i].name, 20, f1);
    }

}
void Sort(int A[]){      // sap xep mang gia tri
int i,j;
int temp;
for (i = 0; i <12; i++){
    for (j = i + 1; j < 13; j++)
    {
     if (A[i] > A[j])
       {
        temp = A[i];
        A[i] = A[j];
        A[j] = temp;
        }
    }
}
}
void  Tu_Quy(int A[]){                              //Ttim tu quy bang mang vua sap xep

int i,j;
for(i=0;i<=9;i++){
    if(A[i]==A[i+1] && A[i+1]==A[i+2] && A[i+2]==A[i+3]){
        if(A[i]==0){   printf("\nNguoi nay co tu At !! ");}
        if(A[i]==1){   printf("\nNguoi nay co tu Hai !! ");}
        if(A[i]==2){   printf("\nNguoi nay co tu Ba !! ");}
        if(A[i]==3){   printf("\nNguoi nay co tu Bon !! ");}
        if(A[i]==4){   printf("\nNguoi nay co tu Nãm !! ");}
        if(A[i]==5){   printf("\nNguoi nay co tu Sau !! ");}
        if(A[i]==6){   printf("\nNguoi nay co tu Bay !! ");}
        if(A[i]==7){   printf("\nNguoi nay co tu Tam !! ");}
        if(A[i]==8){   printf("\nNguoi nay co tu Chin !! ");}
        if(A[i]==9){   printf("\nNguoi nay co tu Muoi !! ");}
        if(A[i]==10){   printf("\nNguoi nay co tu J !! ");}
        if(A[i]==11){   printf("\nNguoi nay co tu Q !! ");}
        if(A[i]==12){   printf("\nNguoi nay co tu K !! ");}
            
    }
}
printf("\nNguoi nay khong co tu quy");
}

void Tao_mang(int x[],int nguoi1[],int nguoi2[],int nguoi3[],int nguoi4[]){
int k;
for(k=1;k<=52;k+=4){
nguoi1[k/4]=x[k]/4;

}
for(k=2;k<=52;k+=4){
nguoi2[k/4]=x[k]/4;

}
for(k=3;k<=52;k+=4){
nguoi3[k/4]=x[k]/4;

}
for(k=4;k<=52;k+=4){
nguoi4[k/4]=x[k]/4;

}
}
int main() {
    int m;
    struct Chiabai S1[53];
    FILE* f1 = fopen("Chia_Bai.txt", "r+");
    Docfile(f1, S1);
  int nguoi1[100],nguoi2[100],nguoi3[100],nguoi4[100];

//--------------------------------
int i=1,j=1;
int x[52];
bool c[13][4];
//kh?i t?o giá tr? false
for(i=1;i<=13;i++){
    for(j=1;j<=4;j++){
        c[i][j]=false;
    }
}
// sinh s? ng?u nhiên 
srand((int)time(0));
i=1;
while(i<=52){
    x[i]= 0 + rand() % (51 + 1 + 0 );
    if(c[x[i]/4][x[i]%4]==false){
                c[x[i]/4][x[i]%4]=true;
        i++;
    }
}

Tao_mang(x,nguoi1,nguoi2,nguoi3,nguoi4);
Sort(nguoi1);
Sort(nguoi2);
Sort(nguoi3);
Sort(nguoi4);
// for(i=0;i<13;i++){
//     printf("%d ",nguoi1[i]);
// }


// chia bai cho 4 nguoi //

// printf("\nNguoi thu 1           Nguoi thu 2             Nguoi thu 3             Nguoi thu 4 ");
// for(i=1;i<=52;i++){
//     if(i%4==1){
//         printf("\n");
//     }
//     for(j=1;j<=52;j++){

//             if((x[i]/4)==S1[j].hang && (x[i]%4)==S1[j].cot){
//             fflush(stdin);

//         printf("%s",S1[j].name);

//         }

// }


printf("\nNguoi choi thu nhat duoc chia cac quan bai: ");
printf("\n");
for(i=1;i<=52;i+=4){
    for(j=1;j<=52;j++){
    if((x[i]/4)==S1[j].hang && (x[i]%4)==S1[j].cot){
            fflush(stdin);

        printf("%s",S1[j].name);

        }
    }
}
Tu_Quy(nguoi1);
//========================================================
printf("\nNguoi choi thu hai duoc chia cac quan bai: ");
printf("\n");

for(i=2;i<=52;i+=4){
    for(j=1;j<=52;j++){
    if(x[i]/4==S1[j].hang && (x[i]%4)==S1[j].cot){
            fflush(stdin);

        printf("%s",S1[j].name);

    }
    }
}
Tu_Quy(nguoi2);
//========================================================

printf("\nNguoi choi thu ba duoc chia cac quan bai: ");
printf("\n");

for(i=3;i<=52;i+=4){
    for(j=1;j<=52;j++){
    if(x[i]/4==S1[j].hang && (x[i]%4)==S1[j].cot){
                       fflush(stdin);

        printf("%s",S1[j].name);

    }
    }
}
Tu_Quy(nguoi3);
//========================================================

printf("\nNguoi choi thu tu duoc chia cac quan bai: ");
printf("\n");

for(i=4;i<=52;i+=4){
    for(j=1;j<=52;j++){
    if(x[i]/4==S1[j].hang && (x[i]%4)==S1[j].cot){
        fflush(stdin);

        printf("%s",S1[j].name);
    }
    }
}
Tu_Quy(nguoi4);
return 0;
}
