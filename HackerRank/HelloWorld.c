#include <stdio.h>

int main() {

    // string sentence;         // There is no data type of string in C :(
    char sentence[100];            // But there is `char` data type with `Array` in C :)
    // and you have to specify the size of Array...

    // scanf() can be used to take `string` input but should not used the ampersand `&` to addressing data 
    // Because `sentence` is an array so itself is an addresse, if we addresse just one indax we have to do. 
    // scanf("%s", sentence);     // The scanf("%s") take only one word before first whitespace :(
    // So I will use a new mathod learned from Hacker Rank...
    scanf("%[^\n]%*c", sentence);
    // `%[]` it called Scanset, scanf read only inside of this.
    // `^\n` means : Take inputs, untill a new line appears...
    // `%*c` means : Delete buffer from the end of line made by Enter. 

    printf("Hello, World!\n");
    printf("%s\n", sentence);

    return 0;
}