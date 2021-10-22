#include <bits/stdc++.h>
using namespace std;

float a,b;
char x;

int main(){
	cout<<"Calculator (+,-,*,/ only)"<<endl;
	cin>>a>>x>>b;
	switch(x){
		case '+':
			cout<<a+b;
			break;
		case '-':
			cout<<a-b;
			break;
		case '*':
			cout<<a*b;
			break;
		case '/':
			cout<<a/b;
			break;
	}
	return 0;
}