#include<stdio.h>
typedef struct{
    int a;
    char b;

}myclass;
int main(){
    int size_int=sizeof(int);
    int size_float=sizeof(float);
    int size_char=sizeof(char);
    int size_class=sizeof(myclass);
    printf("size of int:%d bytes\n",size_int);
    printf("size of float:%d bytes\n",size_float);
    printf("size of char:%d bytes\n",size_char);
    printf("size of class:%d bytes\n",size_class);
    return 0;
}