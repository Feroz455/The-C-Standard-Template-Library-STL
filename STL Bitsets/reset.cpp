/*
Cpp_STL_Reference
BITESETS
program reset;
bitset<N>& reset();
bitset<N>& reset(size_t pos);


*/
#include<iostream>
#include<algorithm>
#include<bitset>
using namespace std;

//main begin
int main()
{
    bitset<8> s(100);

    cout << "s = " << s << endl;

    s.reset();
    cout << "s = " << s << endl;

    getchar();
    return 0;
}
//main end
///Program end

/*
output

s = 01100100
s = 00000000


Process returned 0 (0x0)   execution time : 1.417 s
Press any key to continue.
*/
