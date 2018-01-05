#include <stdio.h>
int main()
{
    char c;
    int L,U;

    printf("Enter an alphabet: ");
    scanf("%c",&c);

    
    L= (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

     
    U= (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    
    if (L||U)
        printf("VOWEL");
    else
        printf("CONSONENT");
    return 0;
}
