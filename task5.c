#include <stdio.h>

int main() {
    float quantity;
    int premium, city;
    printf("Enter order quantity: ");
    scanf("%f", &quantity);
    printf("Are you a premium member? (1-yes,0-no): \n");
    scanf("%d", &premium);
    printf("Is the order within city limits? (1-yes,0-no): ");
    scanf("%d", &city);
    if (quantity>3000 || premium==1) {
        printf("Delivery will be free\n");
    }
    else {
        printf("Charges will be applied\n");
    }
    if (quantity<50000 && city==1) {
        printf("COD is available\n");
    }
    else {
        printf("COD is not available\n");
    }
    return 0;
}