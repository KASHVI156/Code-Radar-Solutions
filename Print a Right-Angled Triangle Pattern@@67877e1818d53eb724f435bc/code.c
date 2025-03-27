// Your code here...
#include <stdio.h>
int main(){
    int n, j;
    scanf("%d", &n);
    for(int i=0; i<=n; i++){
        while(j<=i){
            printf("* ");
        }
    }
    return 0;
}