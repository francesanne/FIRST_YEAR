#include <stdio.h>

int main() {

    int a1,a2,a3,angle;
    
    printf("");
    scanf("%d", &a1);
    printf("");
    scanf("%d", &a2);
    printf("");
    scanf("%d", &a3);
    angle = a1+a2+a3;
    if (angle=180){
    printf("POSSIBLE");
    }
    else {
    printf("NOT POSSIBLE");
    }
    
}
