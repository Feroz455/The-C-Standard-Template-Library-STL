/*
Cpp_STL_Reference
LIST
program
void splice(iterator pos, list& lst);
void splice(iterator pos, list& lst, iterator del);
void splice(iterator pos, list& lst, iterator start, iterator end);

*/
#include<iostream>
#include<algorithm>
#include<list>
using namespace std;

//main begin
int main()
{
    // initializing lists
    list<int> L1 = { 1, 2, 3 };
    list<int> L2 = { 4, 5 };
    list<int> L3 = { 6, 7, 8 };

    // transfer all the elements of L2
    L1.splice(L1.begin(), L2);

    // at the beginning of L1
    cout << "list L1 after splice operation" << endl;
    for (auto x : L1)
        cout << x << " ";

    // transfer all the elements of L1
    L3.splice(L3.end(), L1);

    // at the end of L3
    cout << "\nlist L3 after splice operation" << endl;
    for (auto x : L3)
        cout << x << " ";
        /***************************/
     // initializing lists
    list<int> L4 = { 1, 2, 3 };
    list<int> L5 = { 4, 5 };

    list<int>iterator it;

    //Iterator pointing to 4
    it = L5 .begin();
    //transfer 4 at the end of L1
    L4.splice(L4.end(), L5, it);

    cout << "list L4 after splice Operation "
    getchar();
    return 0;
}
//main end
///Program end

/*
output
list L1 after splice operation
4 5 1 2 3
list L3 after splice operation
6 7 8 4 5 1 2 3

Process returned 0 (0x0)   execution time : 5.085 s
Press any key to continue.
*/
