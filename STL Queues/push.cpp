
/*
Cpp_STL_Reference
QUEUES
program push();
void push(const TYPE & val);
*/
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;

//main begin
int main()
{
    queue<int> q;

    for(int i = 0; i < 5; i++)
    {
        q.push(i);
    }

    cout << "The first elements is " << q.front() << " and the last elements is " << q.back() << endl;
    getchar();
    return 0;
}
//main end
///Program end

/*
output

The first elements is 0 and the last elements is 4


Process returned 0 (0x0)   execution time : 3.047 s
Press any key to continue.
*/


