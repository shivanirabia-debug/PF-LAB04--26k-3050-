#include <stdio.h>
#include <string.h>
int main(){
    int hours,attendance,wage,overtime;
    printf("Enter hours worked\n" );
    scanf("%d",&hours);
    printf("Enter attendance rating(1-5)\n");
    scanf("%d",&attendance);
    if(hours<=8){
        wage=hours*500;
    }
    else{
        wage=8*500;
        if (attendance>=3){
            overtime=hours-8;
            wage=wage+(overtime*500*1.5);
        }
    }
    printf("Total daily wage is %f\n", wage);
}
