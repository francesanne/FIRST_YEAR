#include <stdio.h>
int main() {
    int pocketMoney;

    do {
       
        printf("Enter current pocket money: ");
        scanf("%d", &pocketMoney);

        if (pocketMoney >= 0) {
           
            printf("%d\n", pocketMoney);

            
            if (pocketMoney % 10 == 7) {
                printf("Such lucky money!\n");
            } else {
                printf("Just normal money.\n");
            }
        } else {
            
            printf("Stop lying, tell me what's in your pocket!\n");
        }
    } while (pocketMoney < 0);

    return 0;
}
