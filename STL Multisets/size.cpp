
/*
Cpp_STL_Reference
MULTISETS
program size
size_type size() const;
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
    multiset<int>::reverse_iterator it ;
    //Prints the multiset elements
    cout << "The multiset elements are : ";
    for(it = m.rbegin(); it != m.rend(); it++)
        cout << *it << " ";
    cout << "\n";



    cout << "size of the multisets is = " << m.size();
    getchar();
    return 0;
}
//main end
///Program end

/*
output
The multiset elements are : 6 5 5 3 3 3 2 1
size of the multisets is = 8

Process returned 0 (0x0)   execution time : 1.702 s
Press any key to continue.


*/


