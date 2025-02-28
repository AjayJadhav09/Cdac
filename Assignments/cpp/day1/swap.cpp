#include<iostream>
using namespace std;

int main(){
	int a , b;
	int temp;
	cout<<"Enter two values"<< endl;
	cin>>a>>b;

	cout << "Before Swapping a= "<<a << "and b= "<< b<<endl ;

	temp = a;
	a= b;
	b = temp;
	
	cout <<"After Swapping a = " << a << "and b= "<< b;
	return 0;
}
