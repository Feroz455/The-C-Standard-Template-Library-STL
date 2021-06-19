/*
Cpp_STL_Reference
program push_heap
void push_heap(iterator start, iterator end)
void push_heap(iterator start, iterator end, StictWeakORDERING comp)
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//main begin
int main()
{
    int myints[] = {10,20,30,5,15};

    vector<int> v(myints, myints+5);
    make_heap(v.begin(), v.end());
    cout << "Initial max heap : " << v.front() << "\n";
    pop_heap(v.begin(), v.end());
    v.pop_back();
    cout << "max heap  after pop: " << v.front() << "\n";


    v.push_back(99);
    push_heap(v.begin(), v.end());

    cout << "Max heap after push : " << v.front() << endl;
    sort_heap(v.begin(), v.end());
    cout << "Final sorted range: ";
    for(int i = 0; i < v.size(); i++)
        cout << " " << v[i];

    cout << "\n";
    getchar();
    return 0;
}
//main end
///Program end

/*
output
Initial max heap : 30
max heap  after pop: 20
Max heap after push : 99
Final sorted range:  5 10 15 20 99


Process returned 0 (0x0)   execution time : 2.720 s
Press any key to continue.

*/

