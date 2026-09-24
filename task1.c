#include <stdio.h>
#include <string.h>
int main() {
    int frequent, paid, miles;
    printf ("Are you a frequent memeber?(1-yes,0-no)\n");
    scanf("%d",&frequent);
    printf ("What is your ticket price?\n");
    scanf("%d",&paid);
    printf ("How many miles have you flown?");
    scanf("%d",&miles);
    if ((frequent==1 && miles>50000)||paid>800000) {
        printf("You got upgraded to business class");
    }



}
