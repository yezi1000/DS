#include<stdio.h>
int is_prime(int n){
    for(int i=2;i*i<=n;i++)
        if(n%i==0) return 0;
    return 1;
}
int main(){
    for(int i=100;i<=200;i++)
        if(is_prime(i)) printf("%d\n",i);
    return 0;
}