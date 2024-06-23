#include <stdio.h>
#define PI 3.14

int main(){
float l, w, r, ar, pr, ac, cc;

	//rectangle
	printf("Input length of the rectangle: ");
	scanf("%f", &l);
	printf("Input width of the rectangle: ");
	scanf("%f", &w);
	
	//circle
	printf("Input radius of the circle: ");
	scanf("%f", &r);
	
	//Calculate the area and perimeter of the rectangle
	ar = l * w; //Area of rectangle
	pr = (2 * l) + (2 * w); //Perimeter of rectangle
	
	//Calculate the area and circumference of the circle
	ac = PI * (r * r); //Area of circle
	cc = 2 * PI * r; //Circumference of circle
	
	printf("\n Area of rectangle: %.2f", ar);
	printf("\n Perimeter of rectangle: %.2f", pr);
	printf("\n Area of circle: %.2f", ac);
	printf("\n Circumference of circle: %.2f", cc);
	
	return 0;
}


