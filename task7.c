#include <stdio.h>

int main() {
    int plan, minutes;
    float bill;
    printf("Enter plan number (1-4): \n");
    scanf("%d", &plan);
    switch (plan) {
        case 1:
            bill = 500;
            printf("Enter minutes used: \n");
            scanf("%d", &minutes);
            if (minutes > 1000) {
                bill = bill + (minutes - 1000) * 2;
            }
            printf("Total bill is %f", bill);
            break;
        case 2:
            bill = 800;
            printf("Enter minutes used: \n");
            scanf("%d", &minutes);
            if (minutes > 2000) {
                bill = bill + (minutes - 2000) * 2;
            }
            printf("Total bill is %f\n", bill);
            break;
        case 3:
            bill = 1200;
            printf("Total bill is %f\n", bill);
            break;
        case 4:
            printf("Enter minutes used: \n");
            scanf("%d", &minutes);
            bill = minutes * 1;
            printf("Total bill is %f\n", bill);
            break;
        default:
            printf("Invalid plan number.\n");
    }
}
