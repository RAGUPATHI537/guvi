#include <stdio.h>
int main()
{
    char c;
     scanf("%c",&c);

    if( (c>='a' && c<='z') || (c>='A' && c<='Z'))
        printf("ALPHABET");
    else
        printf("%NOT_ALPHABET");

    return 0;
}
