//check no is palindrome or not

#include <iostream>
using namespace std;

int main(){

    int num,temp,rev=0,digit;
    cout<<"Enter a number: ";
    cin>>num;

    temp=num;
    while(temp!=0){
        digit= temp%10; // 121 = 1 // 12=2 // 1=1
        rev=rev*10+digit; //1 // 1*10 +2 = 12 // 12*10 +1 = 121
        temp=temp/10;  // 12 // 1 // 0
    }

    if(rev==num){
        cout<<"Number is palindrome";
    }
    else{
        cout<<"Number is not palindrome";
    }

    return 0;


}