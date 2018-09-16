#include<stdio.h>
int main(){
    long long a[100];
    a[1]=1;a[2]=1;
    for(int i=3;i<=92;i++) a[i]=a[i-1]+a[i-2];
    for(int i=1;i<=92;i++) printf("%lld\n",a[i]);
    return 0;
}