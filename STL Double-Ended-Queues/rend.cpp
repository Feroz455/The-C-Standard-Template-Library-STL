/*
Cpp_STL_Reference
DEQUE
program rend()
 reverse_Iterator rend()
const reverse_Iterator rend() const ;

*/
#include<iostream>
#include<algorithm>
#include<deque>
using namespace std;

//main begin
int main()
{
    deque<int> dq = { 10,20,30,40,50};
    cout << "The deque in reverse order: ";
    //Print the elements in reverse order
    for(auto it = dq.rbegin(); it != dq.rend(); it++)
    {
        cout << *it << " ";
    }

    getchar();
    return 0;
}
//main end
///Program end

/*
output
The deque in reverse order: 50 40 30 20 10
*/

