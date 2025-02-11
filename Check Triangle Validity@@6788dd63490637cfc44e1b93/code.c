// Your code here...
#include <stdio.h>
int main(){
    int a,b,h;
    scanf("%d %d %d", &a, &b, &h);
    if((a*a)+(b*b)==(h*h)){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}