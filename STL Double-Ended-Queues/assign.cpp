/*
Cpp_STL_Reference
DEQUE
program assign
void assing(size_type num, const TYPE & val);
void assign(input_iterator start, input_iterator end);
*/
#include<iostream>
#include<algorithm>
#include<deque>
using namespace std;

//main begin
int main()
{
    deque<int> d;
    d.assign(10, 42);
    for(int n: d)
    {
        cout << n << " ";
    }
    cout << "\n";

    deque<int> q1;
    for(int i = 0; i < 10; i++)
    {
        q1.push_back(i);
    }
    deque<int> q2;
    q2.assign(q1.begin(), q1.end());
    for(int  i = 0; i < q2.size(); i++)
    {
        cout << q2[i] << " ";
    }
    getchar();
    return 0;
}
//main end
///Program end

/*
output
42 42 42 42 42 42 42 42 42 42
0 1 2 3 4 5 6 7 8 9

Process returned 0 (0x0)   execution time : 1.328 s
Press any key to continue.
*/

