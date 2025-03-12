// Your code here...
#include <stdio.h>
int isprime(int a){
     if(a<=1){
            return 0;
        }
    else{
    for(i=2;i<a;i++){
        if(a%i==0){
            return 0;
        }
        else{
            return 1;
        }
    }
}
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int num;
        scanf("%d", &num);
        printf("%d", isprime(num));
    }
    return 0;
}