
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
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str1[20]="good";
//     char str2[]="morning";
//     strcat(str1,str2);
//     printf("%s",str1);
//     return 0;
// }
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str1[20]="good";
//     char str2[]="morning";
//     strcat(str1,str2);
//     printf("%s",str1);
//     return 0;
// }
#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof (arr[0]);
    int total=0;
    for(int i=0;i<n;i++){
    total+=arr[i];
    }
    printf("sum of array elements:%d\n",total);
    return 0;
}         

