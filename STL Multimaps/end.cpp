/*
Cpp_STL_Reference
MULTIMAP
program end
iterator end();
cosnt _terator end() const;

*/
#include<iostream>
#include<algorithm>
#include<map>
using namespace std;

//main begin
int main()
{
    multimap<char, int> foo;
    foo.insert(make_pair('x',32 ));
    foo.insert(make_pair('y', 64));
    foo.insert(make_pair('z', 96));
    foo.insert(make_pair('y', 128));


    multimap<char,int>::iterator it;
    for(it = foo.begin(); it != foo.end(); it++)
    {
        cout << it->first << " => " << it->second << endl;
    }
    getchar();
    return 0;
}
//main end
///Program end

/*
output

x => 32
y => 64
y => 128
z => 96


Process returned 0 (0x0)   execution time : 1.700 s
Press any key to continue.
*/
