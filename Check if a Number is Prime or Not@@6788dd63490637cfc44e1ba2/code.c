// Your code here...
#include <stdio.h>
int main(){
    int a,i;
    scanf("%d", &a);
    if(a=2){
            printf("Prime");
        }
    else{
    for(i=2;i<a;i++){
        if(a>0 && a%i==0){
            printf("Not Prime");
        }
        else{
            printf("Prime");
        }
        break;
    }
    }
    return 0;
}