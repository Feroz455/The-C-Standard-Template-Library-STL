/*
Cpp_STL_Reference
DEQUE
program at
TYPE& at(size_type loc)
const TYPE& at(size_type loc) const;
*/
#include<iostream>
#include<algorithm>
#include<deque>
using namespace std;

//main begin
int main()
{
    deque<int> d;
    d.assign(5,5);
    for(int i = 0; i < 10; i++)
        cout << d[i] << endl;

        cout << " Using at\n\n\n";
    for(int i = 0; i < 10; i++)
        cout << d.at(i) << endl;
    getchar();
    return 0;
}
//main end
///Program end

/*
output
5
5
5
5
5
13640848
0
14877008
0
0
 Using at


5
5
5
5
5
terminate called after throwing an instance of 'std::out_of_range'
  what():  deque::_M_range_check: __n (which is 5)>= this->size() (which is 5)

Process returned 3 (0x3)   execution time : 0.672 s
Press any key to continue.
*/

