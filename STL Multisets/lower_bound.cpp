/*
Cpp_STL_Reference
MULTISETS
program iterator lower_bound(const key_type& key)
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
    multiset<int>::iterator it = m.lower_bound(10);
    cout << "Lower bound of 10 = " << *it;

    it = m.upper_bound(4);
     cout << "\nupper bound of 4 = " << *it;

    getchar();
    return 0;
}
//main end
///Program end

/*
output
*/
