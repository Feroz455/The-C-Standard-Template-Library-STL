/*
Cpp_STL_Reference
BITESETS
program  set;
bitset<N>& set();
bitset<N>& set(size_t pos, int val = 1);
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
*/
