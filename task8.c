#include <stdio.h>
int main(){
    float gpa,income;
    printf("Enter gpa and family income:\n");
    scanf("%f%f",&gpa,&income);
    if(gpa>3.7 && income<50000){
        printf("Full Scholarship\n");
    }
    else if(gpa>3.3 && income<100000){
        printf("Half Scholarship\n");
    }
    else{
        printf("No Scholarship\n");
    }
}
