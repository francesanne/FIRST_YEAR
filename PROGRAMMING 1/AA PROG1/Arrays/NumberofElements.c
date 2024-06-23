  #include <stdio.h>
  int main(){

    int arr[]={1,2,3,4,5,2,24,5,653,45,52,55,6,2,424,2,5,54,4,54,54,214,6,7,87,5,6,5};
    printf("Number of elements: %d", sizeof(arr)/sizeof(arr[0]));
    return 0;
  }