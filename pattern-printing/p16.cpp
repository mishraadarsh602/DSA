/*print

    1
   12
  123
 1234
12345

*/
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
   for(int i=1;i<=5;i++){
       for(int j=5;j>=i;j--){
           cout<<" ";
       }
       for(int q=1;q<=i;q++){
           cout<<q;
       }
       
       cout<<endl;
   }
    return 0;
}