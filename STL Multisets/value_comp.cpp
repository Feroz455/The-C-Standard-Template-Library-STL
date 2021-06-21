
/*
Cpp_STL_Reference
MULTISETS
program key_compare key_comp() const;
*/
#include<iostream>
#include<algorithm>
#include<set>
using namespace std;

//main begin
int main()
{
    //Creating a multiset named m;
    multiset<int> m;
    multiset<int>::value_compare comp = m.value_comp();

    //Inserting elements into multiset
    m.insert(10);
    m.insert(20);
    m.insert(30);
    m.insert(40);

    cout << "Multiset has the elements\n";

    //store key value of last element
    int height =*m.rbegin();


    //initializing the iterator
    multiset<int>::iterator it = m.begin();


    //Printing elements of all multiset

    do
    {
        cout << " " << *it;

    }while(comp(*it++, height));
    getchar();
    return 0;
}
//main end
///Program end

/*
output


Multiset has the elements
 10 20 30 40

Process returned 0 (0x0)   execution time : 1.937 s
Press any key to continue.



*/
