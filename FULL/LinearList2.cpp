#include<bits/stdc++.h>
using namespace std;
#define type int
struct node{
	type val;
	node *nxt,*pre;
};
struct SQL{
	int S;
	node *Fr,*En,*Ne;
	void init(){
		S=0;Fr=NULL;En=NULL;
	}
	void outf(){
		int ss=S;
		node *t=Fr;
		while(ss!=0){
			printf("%d ",t->val);
			t=t->nxt;
			ss--;
		}
		putchar('\n');
	}
	void oute(){
		int ss=S;
		node *t=En;
		while(ss!=0){
			printf("%d ",t->val);
			t=t->pre;ss--;
		}
		putchar('\n');
	}
	void insf(type n){
		Ne=(node *)malloc(sizeof(node));
		Ne->val=n;
		if(S==0){
			Fr=En=Ne;
			Ne->nxt=Ne->pre=NULL;
		}
		else{
			Fr->pre=Ne;
			Ne->nxt=Fr;
			Ne->pre=NULL;
			Fr=Ne;
		}
		S++;
	}
	void inse(type n){//从表尾插入
		Ne=(node *)malloc(sizeof(node));
		Ne->val=n;
		if(S==0){
			Fr=En=Ne;
			Ne->nxt=Ne->pre=NULL;
		}
		else{
			En->nxt=Ne;
			Ne->pre=En;
			Ne->nxt=NULL;
			En=Ne;
		}
		S++;
	}
	void delf(int n){//删除表头开始第N个 
        if(n<0||n>S) {
			printf("ERROR NO SUCH THING\n");
			return ;
		}
		node *t=Fr;
		for(int i=1;i<n;i++) t=t->nxt;
		if(n==1) Fr=Fr->nxt;
		else if(n==S) En=En->pre;
		else t->pre->nxt=t->nxt;
		S--;
	}
	void dele(int n){//删除表尾开始第N个 
		//delf(S-n+1);
        //if(2*n>S) delf(S-n-1);
        if(n<0||n>S){
            printf("ERROR NO SUCH THING\n");
            return ;
        }
        if(n==1) {
            En=En->pre;
            return ;
        }
        node* t=En;
        for(int i=1;i<n;i++) t=t->pre;
        if(n==1) En=En->pre;
        else if(n==S) Fr=Fr->nxt;
        else t->pre->nxt=t->nxt;
        S--;
	}
    void show(int n){//展示表头起第N个元素
        node* t=Fr;
        for(int i=1;i<=n;i++) t=t->nxt;
    }
}T;
int main(){
	T.init();
	for(int i=1;i<=3;i++) T.insf(i);
	T.outf();
	for(int i=5;i<=7;i++) T.inse(i);
	T.outf();
	T.dele(1);
	
	T.outf();
	T.oute();
}


