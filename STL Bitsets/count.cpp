/*
Cpp_STL_Reference
BITESETS
program count
size_type count();

*/
#include<iostream>
#include<algorithm>
#include<bitset>
using namespace std;

//main begin
int main()
{
     bitset<8> s(100);
    if(s.any())
    {
        cout << "True\n";
    }
    else
        cout << "False\n";


    cout << s <<endl;

    cout <<"Number of bits on = "<< s.count();
    getchar();
    return 0;
}
//main end
///Program end

/*
output
True
01100100
Number of bits on = 3

Process returned 0 (0x0)   execution time : 1.171 s
Press any key to continue.
*/
