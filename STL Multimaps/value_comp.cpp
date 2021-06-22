
/*
Cpp_STL_Reference
MAP
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
    //Creating a map named m;

    map<char, int> m;

    //inserting elements into map
    m.insert({'a' ,10});
    m.insert({'b' ,20});
    m.insert({'c' ,30});
    m.insert({'d' ,40});

    auto last = *m.rbegin();
    auto i = m.begin();

    cout << "Map contains "
         << "following elements"
         << endl;

    do {

        cout << i->first
             << " = "
             << i->second
             << endl;
    } while (m.value_comp()(*i++, last));
    getchar();
    return 0;
}
//main end
///Program end

/*
output
Map contains following elements
a = 10
b = 20
c = 30
d = 40


Process returned 0 (0x0)   execution time : 1.052 s
Press any key to continue.
*/
