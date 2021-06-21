/*
Cpp_STL_Reference
STACK()
program   stact();
stack();
stack(const Container& con);
*/
#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;

//main begin
int main()
{
    stack<int> c1;
    c1.push(5);
    cout << c1.size() << '\n';

    stack<int> c2(c1);
    cout << c2.size() << '\n';

    deque<int> deq {3, 1, 4, 1, 5};
    stack<int> c3(deq);
    cout << c3.size() << '\n';
    getchar();
    return 0;
}
//main end
///Program end

/*
output
*/

