#include<iostream>
using namespace std;


int fibbo(int n){
	if(n==0) return 0;
	if(n == 1) return 1;
	return fibbo(n-1) + fibbo(n-2);
}

int main(){
	int n;
	cout<<"enter the number";
	cin>>n;
	for(int i = 0; i <n; i++){
	cout<<fibbo(i)<<endl;
	}
	return 0;
}
