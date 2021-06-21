/*
Cpp_STL_Reference
STACK()
program  push
void push();
*/
#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;

//main begin
int main()
{
    stack<int> s;
    for(int i = 0; i < 5; i++)
    {
        s.push(i);
    }
    while(!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
    getchar();
    return 0;
}
//main end
///Program end

/*
output
4
3
2
1
0


Process returned 0 (0x0)   execution time : 12.109 s
Press any key to continue.
*/



