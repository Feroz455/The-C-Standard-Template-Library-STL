/*
Cpp_STL_Reference
QUEUES
program  size_type size() const
*/
#include<iostream>
#include<algorithm>
#include<queue>
#include<string>
using namespace std;

//main begin
int main()
{
    queue<string> waiting_line;
    while(waiting_line.size() < 5)
    {
        cout << "Welcome to the line, please enter your name: ";
        string s;
        getline(cin , s);
        waiting_line.push(s);
    }
    while(!waiting_line.empty())
    {
        cout << "Now serving: " << waiting_line.front() << endl;
        waiting_line.pop();
    }

    /********************************/
    queue<int> cL;
    cL.push(5);
    cout << cL.size() << "\n";

    queue<int>c2(cL);

    cout << c2.size() << "\n";

    deque<int> deq{3,1,4,1,5};
    queue<int> c3(deq);
    cout << c3.size() << "\n";
    getchar();
    return 0;
}
//main end
///Program end

/*
output

Welcome to the line, please enter your name: Nata
Welcome to the line, please enter your name: Lizzy
Welcome to the line, please enter your name: Robart B. Parker
Welcome to the line, please enter your name: Ralph
Welcome to the line, please enter your name: Matthew
Now serving: Nata
Now serving: Lizzy
Now serving: Robart B. Parker
Now serving: Ralph
Now serving: Matthew


1
1
5
Process returned 0 (0x0)   execution time : 105.105 s
Press any key to continue.


*/

