/*Ask the user to select which programming language they like best
1 - C,
2 - C++,
3 - Java,
4 - C#,
5 - Python
Depending on their choice, print the message "You like {name_of_programming_language} best".
Also, if they selected Python, ask them to input which type of development they usually do
A - Web
B - Data Analytics
C - Backend
Print the name of the option they selected.
Finally, if they selected Backend, ask them if they know any frameworks.
If they inputted the character 'Y' or 'y', print "Wow, you're good!"*/

#include  <stdio.h>
int main(){
    int language;
    char development, framework;

    printf("Choose the programming language you like best: ");
    scanf("%d", &language);
    
    if (language == 1){
        printf("You like C best");
    }else if(language == 2){
        printf("You like C++ best");
    }else if(language == 3){
        printf("You like Java best");
    }else if(language == 4){
        printf("You like JC# best");
    }else if(language == 5){
        printf("You like Python best\n");
        printf("Enter type of development: ");
        scanf(" %c", &development);
         if(development == 'A'){
            printf("Web");
         }else if(development == 'B'){
            printf("Data Analytics");
         }else if(development == 'C'){
            printf("Backend");
            printf("\nDo you know any frameworks? ");
            scanf(" 5%c", &framework);
                if (framework == 'Y' || framework == 'y'){
                    printf("Wow, you're good!");
                }
         }
    }
    return 0;
}