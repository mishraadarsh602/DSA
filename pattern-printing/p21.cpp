/* print:

*********
 *******
  *****
   ***
    *

*/
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n=5;
   for(int row=1;row<=n;row++){
       for(int col=1;col<=row-1;col++){
           cout<<" ";
       }
       for(int col=1;col<=((2*n)-(2*row-1));col++){
           cout<<"*";
       }

       cout<<endl;
   }
    return 0;
}