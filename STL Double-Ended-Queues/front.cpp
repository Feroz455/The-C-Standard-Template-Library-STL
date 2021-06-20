/*
Cpp_STL_Reference
DEQUE
program front
TYPE & front ();
const TYPE& front () const ;
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
    cout << "The first elements is " << d.front()
     << " and the last elements is " << d.back() << endl;
    getchar();
    return 0;
}
//main end
///Program end

/*
output
The first elements is 0 and the last elements is 9


Process returned 0 (0x0)   execution time : 2.390 s
Press any key to continue.
*/

