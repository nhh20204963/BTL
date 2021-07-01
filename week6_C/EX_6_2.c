#include<stdio.h>
#include<stdlib.h>

int main(){
	float de;
    printf("Enter heading in degrees: ");
    scanf("%f",&de);
    if(0<=de&&de<90){
        printf("BEARING COMPUTATION: north (heading) east\n");
    }
    if(90<=de&&de<180){
        printf("south (180.0 -heading) east \n");
    }
    if(180<=de&&de<270){
        printf("south (heading -180.0) west\n");
    }
    if(270<=de&&de<360){
        printf("north (360.0 - heading) west\n ");
    }
    return 0;}