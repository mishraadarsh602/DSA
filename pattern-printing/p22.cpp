/* print:

********
***  ***
**    **
*      *
**    **
***  ***
********

*/
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n=4;
    // cin>>n;
   for(int row=n;row>=1;row--){
       for(int col=1;col<=row;col++){
           cout<<"*";
       }
       for(int col=1;col<=2*n-2*row;col++){
           cout<<" ";
       }
       for(int col=1;col<=row;col++){
           cout<<"*";
       }
       cout<<endl;
   }

    for(int row=1;row<=n;row++){
       for(int col=1;col<=row;col++){
           cout<<"*";
       }
       for(int col=1;col<=2*n-2*row;col++){
           cout<<" ";
       }
       for(int col=1;col<=row;col++){
           cout<<"*";
       }
       cout<<endl;
   }

    return 0;
}