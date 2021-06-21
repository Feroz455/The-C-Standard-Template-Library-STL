/*
Cpp_STL_Reference
STACK()
program  pop
void pop();
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
    cout << "\nsize of the stack = " << s.size() << endl;
    while(!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
    cout << "\nsize of the stack = " << s.size() << endl;
    getchar();
    return 0;
}
//main end
///Program end

/*
output

size of the stack = 5
4
3
2
1
0

size of the stack = 0


Process returned 0 (0x0)   execution time : 2.175 s
Press any key to continue.
*/



