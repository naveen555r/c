#include<stdio.h>
int main(){
float fahrenheit,celsius;
printf("fahrenheit temperature:");
scanf("%f",&fahrenheit);
celsius=fahrenheit-32/1.8;
printf("celsius temperature:%.2f\n",celsius);
return 0;
}
