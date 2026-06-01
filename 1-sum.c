#include <stdio.h>
int main(){
    int num1,num2,sumnum,difnum;
    float arg1,arg2,sumarg,difarg;

    scanf("%d %d",&num1,&num2);
    scanf("%f %f",&arg1,&arg2);
    sumnum = num1 + num2;
    difnum = num1 - num2;
    sumarg = arg1 + arg2;
    difarg = arg1 - arg2;
    printf("%d %d\n" ,sumnum,difnum);
    printf("%.1f %.1f",sumarg,difarg);

    return 0;
}