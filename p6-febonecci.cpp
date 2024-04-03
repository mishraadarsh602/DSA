#include <iostream>
using namespace std;

int main(){
  int num,feb=0;
  cout<<"Enter the number : ";
  cin>>num;
 
  for(int i=3;i<num;i++){
   feb=feb +i;
  }
  
  cout<<"Febonecci of "<<num<<" is : "<<feb;
  return 0;

}