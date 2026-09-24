#include <stdio.h>
int main() {
    int temp, pressure;
    printf("Enter temperature: ");
    scanf("%d", &temp);
    printf("Enter pressure: ");
    scanf("%d", &pressure);
    if (temp>100 || pressure>250){
        printf("Machine has shut down\n");
    }
    else if (temp>= 85 && temp<= 100 &&
             pressure>=200 && pressure<=250) {
        printf("WARNING!""\n");
    }
    else {
        printf("NORMAL\n");
    }
}
