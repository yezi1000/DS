#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
#define type int
#define MAX 100
struct sql{
	type* a;
	int S;
	void init(int n){
		a=(type*)malloc(2*n*sizeof(type));
        memset(a,0,sizeof(a));
		S=0;
	}
	void getsize(){
		printf("size=%d\n",S);
	}
	void out(){
		printf("SQL:");
		for(int i=0;i<S;i++) printf("%d ",a[i]);
		putchar('\n');
		return ;
	}
	void insert(type t,int n){//往从表头起第n个位置插入t
		n--;
		if(S==MAX) {
			printf("ERROR NO other SIZE\n");
			return ;
		}
		for(int i=S;i>n;i--) a[i]=a[i-1];
		a[n]=t;
		S++;
	}
	void del(int n){
		if(n>=S) {
			printf("ERROR NO such thing\n");
			return ;
		}
		int kk=a[n-1];
		for(int i=n;i<S;i++) a[i-1]=a[i];
		printf("del %d complete\n",kk);
		S--;
	}

}T;
int main(){
	T.init(MAX);
	for(int i=1;i<=10;i++) T.insert(i,1);
	T.out();
	T.del(2);
	T.out();
	return 0;
}


