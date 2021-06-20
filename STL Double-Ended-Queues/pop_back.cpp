/*
Cpp_STL_Reference
DEQUE
program void pop_back();
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
    for(int i = 0; i < 10; i++)
    {
        cout << d[i] << " ";
        d.pop_back();
    }
    cout << "\n";
    getchar();
    return 0;
}
//main end
///Program end

/*
output

0 1 2 3 4 5 6 7 8 9


Process returned 0 (0x0)   execution time : 1.187 s
Press any key to continue.
*/

