#include <iostream>
using namespace std;

char convert(char ch)
{
    // ASCII of a= 97 and A =65
    ch = ch - 'a' + 'A';
    return ch;
}

int main()
{
    char ch;
    cin >> ch;
    cout << convert(ch);
    return 0;
}