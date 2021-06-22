/*
Cpp_STL_Reference
BITESETS
program none;
bool none();

*/
#include<iostream>
#include<algorithm>
#include<bitset>
using namespace std;

//main begin
int main()
{
    bitset<8> s;
    cout << "s = " << s << endl;
    if(!s.none())
        cout << "s has some bitset\n";
    else
        cout << "s has't some bitset\n";
    getchar();
    return 0;
}
//main end
///Program end

/*
output
s = 00000000
s has't some bitset


Process returned 0 (0x0)   execution time : 1.812 s
Press any key to continue.
*/
