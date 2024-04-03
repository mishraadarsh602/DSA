#include <iostream>
using namespace std;

int main(){
  int num,mul=1;
    cout<<"Enter a number: ";
    cin>>num;
    for(int i=1;i<=num;i++){
        mul = mul *i;
    }
    cout<<"Factorial of" <<num<< " is : "<<mul<<endl;
    return 0;

}