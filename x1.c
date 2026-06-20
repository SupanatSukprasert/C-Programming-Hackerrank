#include <stdio.h>
#include <string.h>

int main()
{
    char name[20];

    printf("Name : ");
    
    fgets(name,sizeof(name),stdin);
    name[strcspn(name, "\n")] = '\0';
    printf("Hello %s",name);

    return 0;
}