// Your code here...
#include <stdio.h>
int main(){
    int a,i;
    scanf("%d", &a);
    if(a<=0){
            printf("Not Prime");
        }
    else{
    for(i=2;i<a;i++){
        if(a%i==0){
            printf("Not Prime");
        }
        break;
    }
    }
    printf("Prime");
    return 0;
}