#include<cstdio>
#include<stdlib.h>
#define type int
//同stl stack
struct node{
    type val;
    node *pre;
};
struct list{
    int SZ;
    node* top;
}Stack;
void Init(){
    Stack.top=NULL;
    Stack.SZ=0;
}
void Insert(type Val){
    node *New_node=(node*)malloc(sizeof(node));
    New_node->val=Val;New_node->pre=Stack.top;
    Stack.top=New_node;
    Stack.SZ++;
}
void Getsize(){
    printf("SIZE=%d\n",Stack.SZ);
}
void Pop(){
    if(Stack.SZ==0){
        printf("ERROR\n");
        return ;
    }
    else{
        printf("POP:%d\n",Stack.top->val);
        Stack.top=Stack.top->pre;
        Stack.SZ--;
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
        else break;
    }
    return 0;
}