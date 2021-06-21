/*
Cpp_STL_Reference
SET
program key_comp
key_compare key_comp() const;
*/
#include<iostream>
#include<algorithm>
#include<set>
using namespace std;

//main begin
int main()
{
    //Creating a set named 'a'
    set<int> a;

    set<int>::value_compare comp = a.value_comp();


    //Inserting elements into set
    for(int i = 0; i <= 10; i++)
    {
        a.insert(i);
    }
    cout << "Set a has the numbers: ";
    //Store the last  value of the set
    int L = *a.rbegin();

    //initialising the iterator
    set<int>::iterator it = a.begin();

    //printing elements of all set
    do
    {
        cout << *it << " ";
    }while(comp(*(++it), L));

    getchar();
    return 0;
}
//main end
///Program end

/*
output

Set a has the numbers: 0 1 2 3 4 5 6 7 8 9

Process returned 0 (0x0)   execution time : 1.531 s
Press any key to continue.

*/

