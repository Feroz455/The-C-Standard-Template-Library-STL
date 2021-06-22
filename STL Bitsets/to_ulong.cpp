/*
Cpp_STL_Reference
BITESETS
program  to_ulong;
unsigned long to_ulong();
*/
#include<iostream>
#include<algorithm>
#include<bitset>
using namespace std;

//main begin
int main()
{
    std::bitset<5> b(5);
    cout << "b = " << b << endl;
    std::cout << b.to_ulong() << '\n';

    getchar();
    return 0;
}
//main end
///Program end

/*
output
b = 00101
5


Process returned 0 (0x0)   execution time : 1.906 s
Press any key to continue.


*/
