/*
Cpp_STL_Reference
SET
program find
iterator find(const key_type& key);
*/
#include<iostream>
#include<algorithm>
#include<set>
using namespace std;

//main begin
int main()
{
    //Initialize set
    set<int> s;

    s.insert(1);
    s.insert(4);
    s.insert(2);
    s.insert(5);
    s.insert(3);


    //iterator pointing to position where 2 is

    auto pos = s.find(3);

    //Prints the set elements
    cout << "The set elements after 3 are : ";
    for(auto it = pos; it != s.end(); it++)
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

The set elements after 3 are : 3 4 5

Process returned 0 (0x0)   execution time : 1.297 s
Press any key to continue.

*/
