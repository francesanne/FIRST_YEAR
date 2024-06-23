
// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
void sortBasket (int*);
void countTransSaleable (int*, int*, int*, int*, int*, float*, char*);
int main() {
int nitems = 2;
int meatctr=2, dairyctr=4, fruitctr=2, vegiectr=2;
float total;
char saleitem[30];
printf("enter the number of items in your basket\n"); 
scanf("%d", &nitems);
countTransSaleable (&nitems, &meatctr, &dairyctr, &fruitctr, &vegiectr, &total, saleitem);
printf("Saleable category is: %s", saleitem); 
sortBasket(&nitems);
  return 0;
}
void sortBasket (int* x)
{
    int i;
    *x=4;
    char item[10]="coffee";
    for (i=1; i<=*x; i++){
    printf("item %d\n", i);  
    scanf("%s", item);
    printf("item %d entered is\n", i);
    printf("%s", item);
    if(strcmp(item, "chicken")==0 || strcmp(item, "pork")==0 || strcmp(item, "beef")==0 || strcmp(item, "fish")==0){
        printf("Item belongs to category 1\n");

    }
    else if(strcmp(item, "coffee")==0 || strcmp(item, "egg")==0 || strcmp(item, "juice")==0 || strcmp(item, "milk")==0){
        printf("Item belongs to category 2\n");

    }
    
    }
}
void countTransSaleable (inta, intb, intc, intd, inte, floatf, char*g)
{
int i;
int tq1, tq2, tq3, tq4;
tq1=(*b)*150;
tq2=(*c)*110;
tq3=(*d)*90;
tq4=(*e)*85;

*f = tq1+tq2+tq3+tq4;
printf("Total %f\n", *f);

if(tq1>tq2&&tq1>tq3&&tq1>tq4)
{
  printf("%d is the biggest sale",tq1);
  *g="meat and poultry";
}
else if(tq2>tq1&&tq2>tq3&&tq2>tq4)
{
  printf("%d is the biggest sale",tq2);
  *g="dairy and drinks";
}
else if(tq3>tq1&&tq3>tq2&&tq3>tq4)
{
  printf("%d is the biggest sale",tq3);
  *g="fruits";
}
else{
  printf("%d is the biggest sale",tq4);
  *g="vegetables";
  
}
}