
/*
Cpp_STL_Reference
LIST
program void rbegin();
*/
#include<iostream>
#include<algorithm>
#include<list>
using namespace std;
bool comparator(int first, int second)
{
    return first < second;
}
//main begin
int main()
{
    //Declaring the lists
    //initially sorted

    list<int> list1 = {10,20,30};
    list<int> list2 = {40,50,60};

    //merge operation
    list2.merge(list1, comparator);

    cout << "list: ";

    for(auto it = list2.rbegin(); it != list2.rend(); ++it)
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
list: 60 50 40 30 20 10

Process returned 0 (0x0)   execution time : 2.317 s
Press any key to continue.



*/



