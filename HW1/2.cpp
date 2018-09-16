#include<stdio.h>
int ir(int y){
    if(y%400==0||(y%4==0&&y%100!=0)) return 1;
    return 0;
}
int main(){
    int year,month,days;
    while(~scanf("%d%d%d",&year,&month,&days)){
        int t=1;
        while(t!=month){
            if (t == 1 || t == 3 || t == 5 || t == 7 || t == 8 || t == 10 || t == 12)
                days+=31;
            else if(t == 4 || t == 6 || t == 9 || t == 11)
                days+=30;
            else{
                if(ir(year)) days+=29;
                else days+=28;
            }
            t++;
        }
        printf("%d\n",days);
    }
    return 0;
}