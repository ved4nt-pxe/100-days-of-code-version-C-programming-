#include<stdio.h>

int main() {

    float eng, math, sci, sst, hindi ,total ,percentage;
    
    printf("-----------Student's Academic Result Calculator.-----------\n\n");
    printf("Enter Marks Of 5 Subjects. \n");

    printf("English:");
    scanf("%f", &eng);
    printf("Maths:");
    scanf("%f", &math);
    printf("Science:");
    scanf("%f", &sci);
    printf("SST:");
    scanf("%f", &sst);
    printf("Hindi:");
    scanf("%f", &hindi);

    total = eng + math + sci + sst + hindi;
    percentage = (total / 500) * 100;

    printf("-----------Students Marks-----------\n\n");
    printf("Total Marks: %.2f / 500 .\n",total);
    printf("Percentage: %.2f%%\n",percentage);

    if (percentage >= 90 && percentage <= 100){
        printf("Grade: A\n");
    }
    else if (percentage >= 80){
        printf("Grade: B+\n");
    }
    else if (percentage >= 70){
        printf("Grade: B\n");
    }
    else if (percentage >= 60){
        printf("Grade: C+\n");
    }
    else if (percentage >= 50){
        printf("Grade: C\n");
    }
    else if (percentage >= 40){
        printf("Grade: D\n");
    }
    else if (percentage >= 0){
        printf("Grade: F\n");
    }
    else{
        printf("Invalid marks!\n");
    }

    if (percentage >= 40 && percentage <= 100){
        printf("Status: Pass\n");
    }
    else {
        printf("Status: Fail\n");
    }

}
