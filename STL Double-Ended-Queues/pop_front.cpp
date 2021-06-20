/*
Cpp_STL_Reference
DEQUE
program pop_front();
void pop_front;
*/
#include<iostream>
#include<algorithm>
#include<deque>
using namespace std;

//main begin
int main()
{
    deque<int> mydeque;
    mydeque.push_back(3);
    mydeque.push_back(2);
    mydeque.push_back(1);

    mydeque.pop_front();
    //Deque becomes 2,3
    for(auto it = mydeque.begin(); it != mydeque.end(); it++)
    {
        cout << " "<< *it;
    }
    getchar();
    return 0;
}
//main end
///Program end

/*
output
 2 1

Process returned 0 (0x0)   execution time : 1.875 s
Press any key to continue.

*/

