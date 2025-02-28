#include <iostream>
using namespace std;
int sumOfDigits(int num){
    if(num == 0){
        return 0;
    }
    
    return (num % 10) +sumOfDigits(num / 10);
}
int main() {
    cout<<"Enter number"<< endl;
    int n;
    cin>>n;
    
    cout<<sumOfDigits(n);
    
    return 0;
}
