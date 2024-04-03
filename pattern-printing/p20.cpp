/* Print
    1
   121 
  12321
 1234321
123454321

*/

#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n=5;
   for(int i=1;i<=n;i++){
       for(int j=n;j>=i;j--){
           cout<<" ";
       }
       for(int k=1;k<=i;k++){
           cout<<k;
       }
        for(int l=i-1;l>=1;l--){
          cout<<l;
      }
       

       
       cout<<endl;
   }
    return 0;
}