#include<stdio.h>

int main()
{
    char ch, s[100], sen[100];
    
    scanf("%c", &ch);
    scanf("\n");
    scanf("%[^\n]*c", s);
    scanf("\n");
    scanf("%[^\n]*c", sen);
    
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s", sen);
    
    return 0;
}