/*
Cpp_STL_Reference
MULTIMAP
program empty
bool empty();
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


    if(foo.empty())
    {
        cout << "\nFoo is empty\n";
    }
    cout << "Size of foo : " << foo.size() << " \n";
    cout << "Size of bar : " << bar.size() << " \n";

    getchar();
    return 0;
}
//main end
///Program end

/*
output

Foo is empty
Size of foo : 0
Size of bar : 4


Process returned 0 (0x0)   execution time : 1.190 s
Press any key to continue.

*/

