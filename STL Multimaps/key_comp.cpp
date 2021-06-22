
/*
Cpp_STL_Reference
MULTIMAP
program  key_comp;
key_compare key_comp() const;

*/
#include<iostream>
#include<algorithm>
#include<map>
using namespace std;

//main begin
int main()
{
    //Creating a multimap named m;

    multimap<char, int> m;
    multimap<char,int>::key_compare comp = m.key_comp();

    //inserting elements into multimap
    m.insert({'a' ,10});
    m.insert({'b' ,20});
    m.insert({'c' ,30});
    m.insert({'d' ,40});

    cout << "Map has the elements\n";
    //store key value of last elements

    char L = m.rbegin()->first;

    //Initializing the iterator
    multimap<char,int>::iterator it = m.begin();
    //printing elements of all multimap
    do
    {
        cout << it->first << " => " << it->second << "\n";
    }while(comp((*it++).first, L));
    getchar();
    return 0;
}
//main end
///Program end

/*
output
Map has the elements
a => 10
b => 20
c => 30
d => 40


Process returned 0 (0x0)   execution time : 0.984 s
Press any key to continue.
*/

