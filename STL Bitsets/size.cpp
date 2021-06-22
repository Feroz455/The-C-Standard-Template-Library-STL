/*
Cpp_STL_Reference
BITESETS
program size
size_t size();

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
    s.set();
    cout << "s = " << s << endl;


    s.flip();
    cout << "s = " << s << endl;

    s.set(5);
    cout << "s = " << s << endl;


    cout << s.size() << endl;
    getchar();
    return 0;
}
//main end
///Program end

/*
output

s = 00000000
s = 11111111
s = 00000000
s = 00100000
8


Process returned 0 (0x0)   execution time : 2.375 s
Press any key to continue.
*/
