// Your code here...
#include <stdio.h>
int main(){
    int a,i;
    scanf("%d", &a);
    for(i=2;i<=a;i++){
        if(a>0 && a%i==1){
            printf("Prime");
        }
        else{
            printf("Not Prime");
        }
        break;
    }
    return 0;
}