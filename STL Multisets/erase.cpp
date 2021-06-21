/*
Cpp_STL_Reference
MULTISETS
program erase
void erase(iterator pos)
void erase(iterator start , iterator end)
size_type erase(const key_type& key)


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


    cout << "erase number 3";

    m.erase(3);
    cout << "The multiset elements are : ";
    for(int n:m)
        cout << n << " ";
    cout << "\n";

    multiset<int>::iterator it = m.begin();

    m.erase(it);
    cout << "The multiset elements are : ";
    for(int n:m)
        cout << n << " ";
    cout << "\n";

    cout << "After erase whole multiset\n";

    m.erase(m.begin(), m.end());

    cout << "The multiset elements are : ";
    for(int n:m)
        cout << n << " ";
    cout << "\n";
    getchar();
    return 0;
}
//main end
///Program end

/*
output

The multiset elements are : 1 2 3 3 3 5 5 6
erase number 3The multiset elements are : 1 2 5 5 6
The multiset elements are : 2 5 5 6
After erase whole multiset
The multiset elements are :


Process returned 0 (0x0)   execution time : 3.506 s
Press any key to continue.
*/
