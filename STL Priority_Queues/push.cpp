
/*
Cpp_STL_Reference
PRIORITY QUEUES
program push
void push();
*/
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;

//main begin
int main()
{
    priority_queue<int> pqueues;
    pqueues.push(1);

    //Priority Queue becomes 1
    if(pqueues.empty())
    {
        cout << "true";
    }
    else
        cout << "False";

        cout << " \n\n\n\n";
    /*************************/
    int sum = 0;

    priority_queue<int> pq;
    pq.push(8);
    pq.push(6);
    pq.push(3);
    pq.push(2);
    pq.push(1);

    //Queue becomes = 8,6,3,2,1;

    while(!pq.empty())
    {
        sum = sum + pq.top();
        pq.pop();
    }
    cout << sum;
    getchar();
    return 0;
}
//main end
///Program end

/*
output

False



20

Process returned 0 (0x0)   execution time : 1.312 s
Press any key to continue.
*/


