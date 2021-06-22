/*
Cpp_STL_Reference
MULTIMAP
program operator
multimap operator = (const multimp& c2);
bool operator == (const multimap& c1, const multimap& c2)
bool operator != (const multimap& c1, const multimap& c2)
bool operator < (const multimap& c1, const multimap& c2)
bool operator > (const multimap& c1, const multimap& c2)
bool operator <= (const multimap& c1, const multimap& c2)
bool operator >= (const multimap& c1, const multimap& c2)
*/
#include<iostream>
#include<algorithm>
#include<map>
using namespace std;

//main begin
int main()
{
    multimap<char, int> foo, bar;
    foo.insert(make_pair('x',32 ));
    foo.insert(make_pair('y', 64));
    foo.insert(make_pair('z', 96));
    foo.insert(make_pair('y', 128));

    bar = foo;
    foo.clear();


    cout << "Size of foo : " << foo.size() << " \n";
    cout << "Size of bar : " << bar.size() << " \n";

    getchar();
    return 0;
}
//main end
///Program end

/*
output

Size of foo : 0
Size of bar : 4


Process returned 0 (0x0)   execution time : 10.388 s
Press any key to continue.

*/
