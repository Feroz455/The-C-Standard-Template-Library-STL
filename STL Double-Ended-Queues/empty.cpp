/*
Cpp_STL_Reference
DEQUE
program empty
bool empty() const;
*/
#include<iostream>
#include<algorithm>
#include<deque>
using namespace std;

//main begin
int main()
{
    deque<int> d;
    for(int i = 0; i < 10; i++)
    {
        d.push_back(i);
    }
    while(!d.empty())
    {
        cout << d.back() << " ";
        d.pop_back();
    }
    getchar();
    return 0;
}
//main end
///Program end

/*
output
9 8 7 6 5 4 3 2 1 0

Process returned 0 (0x0)   execution time : 2.656 s
Press any key to continue.
*/

