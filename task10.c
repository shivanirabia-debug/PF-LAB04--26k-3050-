#include <stdio.h>
int main() {
    int zone,limit,fine=0,speed;
    printf("Enter zone type (1-school,2-highway,3-residential\n");
    scanf("%d",&zone);
    printf("Enter speed\n");
    scanf("%d",&speed);
    switch (zone) {
        case 1:
            limit=30;
            break;
        case 2:
            limit=100;
            break;
        case 3:
            limit=50;
            break;
        default:
            printf("Invalid zone.");
            return 0;
    }
    if(speed>limit){
        fine=1000;
        if (speed-limit>20){
            fine=fine*2;
        }
        printf("Final fine is %d", fine);
    }
    else{
        printf("No fine.");
    }
}
