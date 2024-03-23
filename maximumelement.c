#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5};
    int array_size=sizeof (array)/sizeof(array[0]);
    int max=array[0];
    for(int i=1;i<array_size;i++);
    if(array[i]>max){
        max=array[i];
    }
    printf("maximum element of the array:%d\n");
    return 0;
}