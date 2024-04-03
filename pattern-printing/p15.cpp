/*print

    1
   22  
  333
 4444
55555


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
           cout<<i;
       }
       
       cout<<endl;
   }
    return 0;
}