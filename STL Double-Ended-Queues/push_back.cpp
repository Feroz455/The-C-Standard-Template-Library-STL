/*
Cpp_STL_Reference
DEQUE
program push_back
void push_back(const TYPE & val);
*/
#include<iostream>
#include<algorithm>
#include<deque>
using namespace std;

//main begin
int main()
{
    deque<char> d;
    for(int i = 0; i < 10; i++)
    {
        d.push_back(i + 65);
    }
      for(int i = 0; i < 10; i++)
    {
       cout <<  d[i] << " ";
    }
    getchar();
    return 0;
}
//main end
///Program end

/*
output
A B C D E F G H I J

Process returned 0 (0x0)   execution time : 2.609 s
Press any key to continue.

*/

