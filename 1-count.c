#include <stdio.h>
int main(void){
    int counter =1;
    int x;
    int y;
    //**Do and While Loop**//
    do{
        printf("%d ",counter);
    }while (++counter <= 10);
    printf("\n----------------\n");
    //**For Loop with Continue**//
    for (x=1 ;x<=10;x++){
        if (x == 5){
            continue;
        }
        printf("%d ",x);

    }
    printf("\nUsed continue to skip printing the value 5\n");
    printf("----------------------------------\n");
    //**For Loop with Break**//
    for (y=1;y<=10;y++){
        if (y == 5){
            break;
        }
        printf("%d ",y);
    }
    printf("\nUsed break to broke out(stop) the loop at y = 5\n");
    return 0;
}