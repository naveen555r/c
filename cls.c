// #include<stdio.h>
// int main(){
// int a=5;
// int*ptr =&a;
// printf("%d \n",&a);
// printf("\n%d",ptr);
// return 0;
// }




#include<stdio.h>
struct hey{
    int a;
    float b;
    char c;
};
int main(){
struct hey ob;
ob.a=5;
ob.b=5.5;
ob.c='a';
printf("%d",ob.a);
printf("\n%f",ob.b);
printf("\n%c",ob.c);
return 0;
}