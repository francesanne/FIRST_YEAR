#include <Stdio.h>
struct Vehicle{
    char brand[20];
    int speed;
};

int timeCompute(struct Vehicle vehicle, int distance){
    return (distance*60)/(vehicle.speed);
}

int main(){

    struct Vehicle vehicle1;
    int distance;

    printf("Enter brand: ");
    scanf(" %[^\n]", &vehicle1.brand);

    printf("Enter speed: ");
    scanf("%d", &vehicle1.speed);

    printf("Enter distance: ");
    scanf("%d", &distance);

    int time = timeCompute(vehicle1,distance);

    printf("It will take a %s vehicle %d minutes to reach a distance of %dkm.", vehicle1.brand, time, distance);
    return 0;
}