Zach Sabayton
#include <stdio.h>
// add your structure here

typedef struct{
    int x;
    int y;
}Point;




// add your function prototypes here

int identifyPoint(Point pointing);
void displayPoint(Point pointing, int);
Point createPoint(int x, int y);



void main() {
    int x, y, origin;
    Point start;


    printf("Enter x - coordinate: ");
    scanf("%d", &x);
    printf("Enter y - coordinate: ");
    scanf("%d", &y);


    //insert code here
    start = createPoint(x, y);
    origin = identifyPoint(start);
    displayPoint(start, origin);
    

}

// add your function definitions here
int identifyPoint(Point pointing){

    int num = 0;

    if (pointing.x == 0 && pointing.y == 0){
        num = 0;
    } else if (pointing.x > 0 && pointing.y > 0){
        num = 1;
    } else if (pointing.x < 0 && pointing.y > 0){
        num = 2;
    } else if (pointing.x < 0 && pointing.y < 0){
        num = 3;
    } else if (pointing.x > 0 && pointing.y < 0){
        num = 4;
    } else if (pointing.x != 0 && pointing.y == 0){
        num = 5;
    } else {
        num = 6;
    }

    return num;
       
}

void displayPoint(Point pointing, int origin){

    if (origin == 0){
        printf("The point (%d, %d) is in Origin.\n", pointing.x, pointing.y);
    } else if (origin == 1){
        printf("The point (%d, %d) is in Q1.\n", pointing.x, pointing.y);
    } else if (origin == 2){
        printf("The point (%d, %d) is in Q2.\n", pointing.x, pointing.y);
    } else if (origin == 3){
        printf("The point (%d, %d) is in Q3.\n", pointing.x, pointing.y);
    } else if (origin == 4){
        printf("The point (%d, %d) is in Q4.\n", pointing.x, pointing.y);
    } else if (origin == 5){
        printf("The point (%d, %d) is in x-axis.\n", pointing.x, pointing.y);
    } else {
        printf("The point (%d, %d) is in y-axis.\n", pointing.x, pointing.y);
    }
    
}

Point createPoint(int x, int y){
    Point details;

    details.x = x;
    details.y = y;

    return details;
}