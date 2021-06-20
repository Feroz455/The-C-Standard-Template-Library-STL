/*
Cpp_STL_Reference
LIST
program empty();

bool empty() const;

*/
#include<iostream>
#include<algorithm>
#include<list>
using namespace std;

//main begin
int main()
{
    list<int> v;

    for(int i = 0; i < 5; i++)
    {
        v.push_back(i);
    }
    while(!v.empty())
    {
        cout << v.back() << endl;
        v.pop_back();
    }

    /***************************/

        // Creating a list
    list<int> demoList;

    // check if list is empty
    if (demoList.empty())
        cout << "Empty List\n";
    else
        cout << "Not Empty\n";

    // Add elements to the List
    demoList.push_back(10);
    demoList.push_back(20);
    demoList.push_back(30);
    demoList.push_back(40);

    // check again if list is empty
    if (demoList.empty())
        cout << "Empty List\n";
    else
        cout << "Not Empty\n";
    getchar();
    return 0;
}
//main end
///Program end

/*
output
4
3
2
1
0


Process returned 0 (0x0)   execution time : 1.321 s
Press any key to continue.
*/

