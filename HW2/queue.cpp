
#include<cstdio>
#include<stdlib.h>
#define type int
//同stl Queue
struct node{
    type val;
    node *nxt;
};
struct list{
    int SZ;
    node *front,*bottom;
}Queue;
void Init(){
    Queue.front=Queue.bottom=NULL;
    Queue.SZ=0;
}
void Getsize(){
    printf("SIZE=%d\n",Queue.SZ);
}
void Insert(type Val){
    node *New_node=(node*)malloc(sizeof(node));
    New_node->val=Val;
    if(Queue.SZ==0) Queue.front=Queue.bottom=New_node;
    else Queue.bottom->nxt=New_node;
    Queue.bottom=New_node;
    Queue.SZ++;
}
void Pop(){
    if(Queue.SZ==0){
        printf("ERROR\n");
        return ;
    }
    else{
        printf("POP:%d\n",Queue.front->val);
        Queue.front=Queue.front->nxt;
        Queue.SZ--;
    }
}
int main(){
    while(1){
        int op,n;
        scanf("%d",&op);
        if(op==1) Init();
        else if(op==2) Pop();
        else if(op==3){
            scanf("%d",&n);
            Insert(n);
        }
        else if(op==4) Getsize();
        else break;
    }
    return 0;
}