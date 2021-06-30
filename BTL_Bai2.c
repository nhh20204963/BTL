#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void optimize(int N,int W,int B[][100],int Weight[],int Value[]){

    int i,j;
    for(i=1;i<=N;i++){
        for(j=1;j<=W;j++){
            if(Weight[i]<=j){
    B[i][j]= (B[i-1][j]> Value[i]+B[i][j-Weight[i]]) ? B[i-1][j] : Value[i]+B[i][j-Weight[i]];
                }else{B[i][j]=B[i-1][j];

}
            }
        }
  
    printf("\n%d",B[N][W]);
}
void truyvet(int N,int W,int B[][100],int Weight[],int Value[],char name1[]){
int m;
int dem[100];
for(m=0;m<100;m++){
    dem[m]=0;
}
int i;
int j;
    for(i=N;i>=2;i--){
    while(B[N][W-i]==0){
            break;
        }
    while(B[i][W-j]!=B[i-1][W-j]){
         dem[i]=dem[i]+1;
         j=j+Weight[i];
        }
    }
    
    printf("\n");

 for(i=1;i<=N;i++){
     printf("\n");
     printf("%c %3d",name1[i],dem[i]);
 }
}

int main()
{
    int B[100][100];
    int W,N;
    int Weight[100];
    int Value[100];
    char name1[100];
    char name[255];   
    int i;                     
    FILE *fi = fopen("BAG.inp", "r");     // mo file de doc
        fscanf(fi,"%d",&N);
        fscanf(fi,"%d",&W);
    fgets(name, 255, fi);                   // loai bo dau xuong dong sau khi doc 
for(i=0;i<N;i++){
    fscanf(fi,"%d",&Weight[i+1]);
    fscanf(fi,"%d",&Value[i+1]);
    fscanf(fi,"%c",&name1[i+1]);
    fgets(name, 255, fi);                   // loai bo dau xuong dong sau khi doc 

}
optimize(N,W,B,Weight,Value);
truyvet(N,W,B,Weight,Value,name1);


    return 0;
}