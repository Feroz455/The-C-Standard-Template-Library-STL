/*
Cpp_STL_Reference
MULTISETS
program equl_range
pair<iterator, iterator> equal_range(const key_type & key)
*/
#include<iostream>
#include<algorithm>
#include<set>
using namespace std;

//main begin
int main()
{

  multiset<int> m;

    //Inserting elements
    m.insert(1);
    m.insert(6);
    m.insert(2);
    m.insert(5);
    m.insert(3);
    m.insert(3);
    m.insert(5);
    m.insert(3);

    //Prints the multiset elements
    cout << "The multiset elements are : ";
    for(int n:m)
        cout << n << " ";
    cout << "\n";
    //Function returns lower bound and upper bound
    pair<multiset<int>::iterator, multiset<int>::iterator> it = m.equal_range(3);

    cout << "\nThe lower bound of 3 is " << *it.first;
    cout << "\nThe upper bound of 3 is " << *it.second;

    getchar();
    return 0;
}
//main end
///Program end

/*
output
The multiset elements are : 1 2 3 3 3 5 5 6

The lower bound of 3 is 3
The upper bound of 3 is 5

Process returned 0 (0x0)   execution time : 1.431 s
Press any key to continue.

*/
