#include<stdio.h>
int isperfectnumber (int num){
    int sum=0;

    for(int i=1;i<=num/2;i++){
        if(num%i==0){
            sum+=i;
        }
        if(sum==0){
            return 1;
        }
        else{
            return 0;
        }
    }
}
        int main(){
            int number=28;
            if(isperfectnumber(number)){
                printf("true\n");
            }
            else{
                printf("false\n");
            }
            return 0;
        }
    
