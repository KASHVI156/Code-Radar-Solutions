// Your code here...
#include <stdio.h>
int main(){
    int a,i;
    scanf("%d", &a);
    for(i=2;i<a;i++){
        if(a>0 && i%a==0){
            printf("Not Prime");
        }
        else{
            printf("Prime");
        }
        break;
    }
    return 0;
}