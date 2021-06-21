/*
Cpp_STL_Reference
MULTISETS
program max_size;
size_type max_size() const;

*/
#include<iostream>
#include<algorithm>
#include<set>
using namespace std;

//main begin
int main()
{
    multiset<int> m;
    cout << m.max_size();
    getchar();
    return 0;
}
//main end
///Program end

/*
output

461168601842738790

Process returned 0 (0x0)   execution time : 1.333 s
Press any key to continue.
*/
