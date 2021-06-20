/*
Cpp_STL_Reference
LIST
program void pop_back();
*/
#include<iostream>
#include<algorithm>
#include<list>
using namespace std;

//main begin
int main()
{
    list<char> charList;

    for(int i = 0; i < 10; i++)
    {
        charList.push_back(i+65);
    }

    while(!charList.empty())
    {
        for(char n: charList)
            cout << n;
            cout << "\n";
        charList.pop_back();
    }
    getchar();
    return 0;
}
//main end
///Program end

/*
output

ABCDEFGHIJ
ABCDEFGHI
ABCDEFGH
ABCDEFG
ABCDEF
ABCDE
ABCD
ABC
AB
A


Process returned 0 (0x0)   execution time : 1.763 s
Press any key to continue.

*/

