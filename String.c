#include <stdio.h>
#include <string.h>
int main()
{
    char src[] = "Hello";
    char dest[20];
    char srcc[20] = "World";
    char name[] = "non";

    strcpy(dest,src);
    strcat(dest,srcc);
    strcat(dest,name);
    printf("%s\n",src);
    printf("%s",dest);
    return 0;
}
