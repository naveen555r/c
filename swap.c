#include<stdio.h>
int main(){
    int a=2;
    int b=3;
    int temp;
    printf("before swapping a=%d, b=%d\n", a,b);
    temp=a;
    a=b;
    b=temp;
    printf("after swapping a=%d,b=%d\n",a,b);
    return 0;
}