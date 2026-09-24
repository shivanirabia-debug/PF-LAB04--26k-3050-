#include <stdio.h>
int main() {
    int n,weight;
    printf("Enter the total weight and number of people in the elevator\n");
    scanf("%d%d",&n,&weight);
    if(n> 10 && weight>1000){
        printf("overweight and too many people");
    }
    else if(weight>1000){
        printf("overweight");
    }
    else if(n>10) {
        printf("Too many people");
    }
    else{
        printf("Elevator operating");
    }
}
