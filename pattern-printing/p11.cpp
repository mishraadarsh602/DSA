/*print
a
b b 
c c c
d d d d 
e e e  e e
*/
#include <iostream>
using namespace  std;

int main()
{
    char alpa = 'a';
     for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
          cout<<alpa;
        
        }  
        alpa++;
        cout<<endl;
     }
     return 0;
} 
