#include<stdio.h>
#include<string.h>
typedef struct{
        int Tu;
        int Mau;
    }Fraction;
     void importFrac(Fraction *frac){
printf("\nTu so: ");
scanf("%d", &frac->Tu);
printf("\nMau so: ");
scanf("%d", &frac->Mau);



   }
     void exportFrac(Fraction frac){
printf("%3d /%2d",frac.Tu, frac.Mau);
    }
    void Dao_nguoc(Fraction *frac){
        int temp;
        temp=frac->Tu;
        frac->Tu=frac->Mau;
        frac->Mau=temp;
    }
    void So_sanh(Fraction frac1,Fraction frac2,int a,int b){
        if(frac1.Tu*frac2.Mau==frac2.Tu*frac2.Mau){
             printf("Phan so thu %d bang phan so thu %d ",a,b);}
            
       if(frac1.Tu*frac2.Mau<frac2.Tu*frac2.Mau){
           printf("Phan so thu %d lon hon phan so thu %d ",a,b);
       }
       if(frac1.Tu*frac2.Mau>frac2.Tu*frac2.Mau){
           printf("Phan so thu %d be hon phan so thu %d ",a,b);
       }
       
                     }
             
    
int main(){
Fraction frac[100];
int n;
int i;
int a,b;
printf("Nhap so phan tu cua mang phan so: ");
scanf("%d",&n);
for(i=0;i<n;i++){
    printf("Nhap phan so thu %d : ",i+1);
    importFrac(&frac[i]);
}
for(i=0;i<n;i++){
    printf("\nPhan so thu %d là: ",i+1);
    exportFrac(frac[i]);
}
for(i=0;i<n;i++){
    Dao_nguoc(&frac[i]);

}
for(i=0;i<n;i++){
    printf("\nPhan so thu %d sau khi dao nguoc là: ",i+1);
    exportFrac(frac[i]);
}
printf("\nBan muon so sanh 2 phan so nao : ");
scanf("%d và %d",&a,&b);
So_sanh(frac[a-1],frac[b-1],a,b);
}