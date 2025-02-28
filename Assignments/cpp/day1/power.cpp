#include<iostream>
using namespace std;

int main(){
	long a ;
	int p;
	cout<<"enter a number "<<endl;
	cin>>a;
	cout<<"enter power number" << endl;
	cin>>p;
	long temp = a;
	for(int i = 1; i< p; i++){
		
		a= a * temp;
	}
	cout <<"power of given number "<< a<<endl;	
		
	return 0;
}
