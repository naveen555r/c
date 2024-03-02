
// # include<stdio.h>
// # include<string.h>
// int main(){
// char a[]="hey";
// char b[20]="heysff";
// // strcpy(b,a);

// // printf("%s",b);
// printf("%d",strcmp(b,a));
// return 0;
// }
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char alphabet[]="zxcvbbbbbbbbbnmmasdfghjklqwertyuiop";
//     printf("%d",strlen (alphabet));
//     return 0;
// }
#include<stdio.h>
#include<string.h>
int main(){
    char str1[20]="good";
    char str2[]="morning";
    strcat(str1,str2);
    printf("%s",str1);
    return 0;
}
