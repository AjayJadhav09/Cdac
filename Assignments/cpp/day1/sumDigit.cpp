#include<iostream>
using namespace std;

int main(){

	int a ;
	cout<<"enter 4 digit number"<<endl;
	cin>> a;
	int ans = 0;
	while(a > 0){
		int temp = a % 10;
		ans = ans + temp;
		a = a / 10;
	}
	
	cout<<"Sum of digits are " << ans << endl;
	return 0;
}
