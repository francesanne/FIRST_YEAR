#include <stdio.h>

int main(void) {
   int orange;
   int potato;
   int pork;
   float sorange, spotato, spork;

   
   printf("How many boxes of oranges were sold? ");
   scanf("%d", &orange);
   printf("How many boxes of potatoes were sold? ");
   scanf("%d", &potato);
   printf("How many kilos of pork were sold? ");
   scanf("%d", &pork);

   
   sorange = 0.3 * orange * 16.50 * 50;
   spotato = 0.3 * potato * 21.23 * 60;
   spork = 0.4 * pork * 160;

  
   

  float totalsales = sorange + spotato + spork; 
  
  
 
   
   printf("Total sales of orange: %.2f\n", sorange);
   printf("Total sales of potato: %.2f\n", spotato);
   printf("Total sales of pork: %.2f\n", spork);
   printf("Total sales of all items: %.2f\n", totalsales);
  
    if(totalsales > 1000){
        printf("High demand");
    } else if(totalsales > 500 && totalsales < 1000){
        printf("average demand");
    } else if(totalsales < 500){
        printf("low demand");
    }
  
  
  
  
   return 0;
}
