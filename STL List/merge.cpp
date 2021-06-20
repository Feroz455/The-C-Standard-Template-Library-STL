/*
Cpp_STL_Reference
LIST
program merge
void merge(list &lst);
void merge(list &lst, BinPred compFunction)
*/
#include<iostream>
#include<algorithm>
#include<list>
using namespace std;
//Comparator which compares elements internally
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

    for(auto it = list2.begin(); it != list2.end(); ++it)
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

list: 10 20 30 40 50 60

Process returned 0 (0x0)   execution time : 1.647 s
Press any key to continue.

*/

