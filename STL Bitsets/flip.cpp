/*
Cpp_STL_Reference
BITESETS
program flip
bitset<N>& flip();
bitset<N>& filp(size_type);

*/
#include<iostream>
#include<algorithm>
#include<bitset>
using namespace std;

//main begin
int main()
{
    bitset<8> s;
    cout << s << endl;
    cout << s.flip() << endl;
     cout << s.flip(4) << endl;
    getchar();
    return 0;
}
//main end
///Program end

/*
output

00000000
11111111
11101111


Process returned 0 (0x0)   execution time : 1.453 s
Press any key to continue.
*/
