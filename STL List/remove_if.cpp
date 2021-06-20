/*
Cpp_STL_Reference
LIST
program remove_if
void remove_if(UnPred pr);
*/
#include<iostream>
#include<algorithm>
#include<list>
using namespace std;

bool even(const int &value)
{
    return (value % 2) != 0;
}
//main begin
int main()
{
    list<int> mylist{1,2,2,2,5,6,7};
    mylist.remove_if(even);

    for(auto it = mylist.begin(); it != mylist.end(); ++it)
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
 2 2 2 6

Process returned 0 (0x0)   execution time : 1.594 s
Press any key to continue.
*/

