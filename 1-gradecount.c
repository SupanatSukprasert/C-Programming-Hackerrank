#include <stdio.h>

int main(void){
    int counter,grade,total;
    float average;

    total = 0;
    counter = 0;

    printf("Enter grade,Enter -1 to END :");
    scanf("%d",&grade);
    while  ( grade != -1){
        total = total +grade;
        counter++;
        printf("Enter grade,Enter -1 to END :");
        scanf("%d",&grade);
    }
    if (counter != 0) {
        average = (float) total / counter;
        printf("Class Average is %.2f\n" , average);
    }
    else{
        printf("No grades was entered\n");
    }

    return 0;
}