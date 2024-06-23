#include <stdio.h>
int main(){
    int ch;

    for(ch='a'; ch<='z';ch++){
        printf("%c", ch);
        if(ch<'z'){
            printf(", ");
        }
    }

    return 0;
}