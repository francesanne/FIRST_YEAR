/*
 Check whether a character is Uppercase or Lowercase
*/
#include <stdio.h>
#include <ctype.h>
int main(){

    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if(isupper(ch)){
        printf("%c is in uppercase", ch);
    }else if(islower(ch)){
        printf("%C is in lowercase", ch);
    }else{
        printf("%c is not an alphabet");
    }

    return 0;
}



/* YOU CAN ALSO USE 

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter any character: ");
    scanf("%c", &ch);


    if(ch >= 'A' && ch <= 'Z')
    {
        printf("'%c' is uppercase alphabet.", ch);
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("'%c' is lowercase alphabet.", ch);
    }
    else
    {
        printf("'%c' is not an alphabet.", ch);
    }

    return 0;
}

*/