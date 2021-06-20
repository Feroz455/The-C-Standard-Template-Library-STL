/*
Cpp_STL_Reference
LIST
program  sort;
*/
#include<iostream>
#include<algorithm>
#include<list>
using namespace std;

//main begin
int main()
{
    list<int> L;
    for(int i = 0;  i < 10; i++ )
    {
        L.push_back(rand() % 10);
    }
    cout << "Unsorted list \n";
    for(int n : L)
        cout << n << " ";
    cout << " \n";
    cout << "sorted list\n";

    L.sort();

     for(int n : L)
        cout << n << " ";
    cout << " \n";
    getchar();
    return 0;
}
//main end
///Program end

/*
output

Unsorted list
1 7 4 0 9 4 8 8 2 4
sorted list
0 1 2 4 4 4 7 8 8 9


Process returned 0 (0x0)   execution time : 1.837 s
Press any key to continue.
*/

