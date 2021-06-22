/*
Cpp_STL_Reference
BITESETS
program any
bool any();

*/
#include<iostream>
#include<algorithm>
#include<bitset>
using namespace std;

//main begin
int main()
{
    bitset<4> s(2);
    if(s.any())
    {
        cout << "True\n";
    }
    else
        cout << "False\n";


    cout << s <<endl;
    getchar();
    return 0;
}
//main end
///Program end

/*
output

True
0001


Process returned 0 (0x0)   execution time : 1.592 s
Press any key to continue.

*/
