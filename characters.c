#include <stdio.h>


int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    char ch,s[50],sen[100];

    scanf("%c",&ch);
    scanf("%s\n",&s);
    scanf("%[^\n]s",&sen);

    printf("%c",ch);
    printf("\n%s",s);
    printf("\n%s",sen);

    return 0;
}
