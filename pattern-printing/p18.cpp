/*print

    1
   21
  321
 4321
54321

*/
/*print

    1
   21
  321
 4321
54321

*/
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
   for(int i=1;i<=5;i++){
       for(int j=1;j<=5-i;j++){
           cout<<" ";
       }
       int l=i;
       for(int q=1;q<=i;q++){
           cout<<l;
           l--;

       }

       
       cout<<endl;
   }
    return 0;
}