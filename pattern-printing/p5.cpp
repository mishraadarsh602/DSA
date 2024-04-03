/*print
a b c d e
a b c d e
a b c d e
a b c d e
a b c d e
*/
#include <iostream>
using namespace  std;

int main()
{
    char alpha = 'a';
     for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
          cout<<alpha<<" ";
        }
        alpha++;
        cout<<endl;
     }
     return 0;
} 
