#include<iostream>
#include<cmath>
using namespace std;

int main(){

	int principal, years;
	float rateOfInterest;

	cout<< "Enter the principle amount"<< endl;
	cin>> principal;

	cout<<"Enter total years"<< endl;
	cin>> years;

	cout <<"rate of interest"<< endl;
	cin>> rateOfInterest;
	int n ;
	cin>> n;
	float ci = 0;
	       	
	ci = principal * (pow((1 + rateOfInterest / (n * 100 )), n * years));

	cout<<"compound interest is " <<ci << endl;
	return 0;
}
