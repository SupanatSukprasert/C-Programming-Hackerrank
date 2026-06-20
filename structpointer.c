#include <stdio.h>
struct student
{
    int id;
};
int main()
{
    struct student s;   
    struct student *p = &s;
    p->id = 100;
    printf("%d",s.id);

       
    return 0;
}
