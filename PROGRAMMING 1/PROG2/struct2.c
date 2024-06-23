#include <stdio.h>

struct child{
	int x;
	char y[20];
};

struct parent{
	int a;
	struct child b;
};


int main(){
	
	struct parent var1 = {1,2,"Hello World"};	
	struct parent var2;
	
	var2.a = 3;
	var2.b.x = 4;
	strcpy(var2.b.y, "Frances Anne");
	
	
	printf("%d %d %s\n", var1.a, var1.b.x, var1.b.y);
	printf("%d %d %s\n", var2.a, var2.b.x, var2.b.y);
	
	
	return 0;
}
