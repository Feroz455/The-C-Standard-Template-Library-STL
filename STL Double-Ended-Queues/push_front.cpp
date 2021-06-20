/*
Cpp_STL_Reference
DEQUE
program push_front();

void push_front(const TYPE& val);
*/
#include<iostream>
#include<algorithm>
#include<deque>
using namespace std;

//main begin
int main()
{
    deque<int> mydeque, newdeque;
    mydeque.push_front(82);
    mydeque.push_front(73);
    mydeque.push_front(64);
    mydeque.push_front(57);
    mydeque.push_front(43);
    mydeque.push_front(39);
    mydeque.push_front(20);
    mydeque.push_front(1);

    //Deque becomes 1, 20, 39, 43, 57, 64, 73, 82

    while (!mydeque.empty()) {
        newdeque.push_back(mydeque.back());
        mydeque.pop_back();
    }
    for (auto it = newdeque.begin(); it != newdeque.end(); ++it)
        cout << ' ' << *it;
    getchar();
    return 0;
}
//main end
///Program end

/*
output
 82 73 64 57 43 39 20 1

Process returned 0 (0x0)   execution time : 1.079 s
Press any key to continue.
*/

