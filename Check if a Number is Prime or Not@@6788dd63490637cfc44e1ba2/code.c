// Your code here...
#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    for(i=2;i<a;i++){
        if(a>0 && i%a==0){
            printf("Prime");
        }
        else{
            printf("Not Prime");
        }
    }
    return 0;
}