#include<iostream>
#define MAX 10
using namespace std;

int stack[MAX];
int top=-1;

void push(int n){
	if(top==MAX-1){
		cout<<"stack overflow";
	}
	else{
		top++;
		stack[top]=n;
	}
}
int main(){
	push(4);
	cout<<stack[0];
}
