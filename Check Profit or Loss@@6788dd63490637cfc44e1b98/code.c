// Your code here...
#include <stdio.h>
int main{
    int c,s;
    scanf("%d %d", &c, &s);
    if((s-c)>0){
        printf("Profit");
    }
    else if((s-c)<0){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}