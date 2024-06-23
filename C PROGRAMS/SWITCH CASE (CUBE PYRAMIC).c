#include <stdio.h>
int main (){
	int shape;
	float a, v, l, w, h, v2;
	
	printf("Which shape do you want to find the volume of? (1) cube (0) pyramid");
	scanf("%d", &shape);
	
	switch(shape){
		
		case 1:
			printf("Input side of the cube: ");
			scanf("%d", &a);
			v= a*a*a;
			printf("The volume of the cube is: %.2f", v);
			return 0;
			
		case 0:
			printf("Input side of length of the pyramid: ");
			scanf("%d, &l");
			printf("Input width of the pyramid: ");
			scanf("%d", &w);
			printf("Input height of the pyramid: ");
			scanf("%d", &h);
			v2=(l*w*h)/3;
			printf("The volume of the pyramid is : %.2f", v2);
			return 0;
			
		default:
			printf("not a valid shape");		
	}
	
	return 0;
}
