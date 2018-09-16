#include<stdio.h>
int main(){
    int x,y,z,t;
    while(~scanf("%d%d%d",&x,&y,&z)){
        if(x>z){t=z;z=x;x=t;}
        if(y>z){t=z;z=y;y=t;}
        if(x>y){t=y;y=x;x=t;}
        printf("x=%d y=%d z=%d\n",x,y,z);
    }
    return 0;
}