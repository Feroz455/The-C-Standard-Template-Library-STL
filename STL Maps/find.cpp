/*
Cpp_STL_Reference
MAP
program find
iterator find(const key_type& key);

*/
#include<iostream>
#include<algorithm>
#include<map>
using namespace std;

//main begin
int main()
{
   map<string,int> stringCounts;
    string str;
    while( cin >> str ) stringCounts[str]++;
    map<string,int>::iterator iter = stringCounts.find("spoon");
    if( iter != stringCounts.end() ) {
    cout << "You typed '" << iter->first << "' " << iter->second << "time(s)" << endl;
    }
   getchar();
    return 0;
}
//main end
///Program end

/*
output

my spoon is too big. my spoon is TOO big! my SPOON is TOO big! I am
a BANANA!
^Z
You typed 'spoon' 2time(s)


Process returned 0 (0x0)   execution time : 11.173 s
Press any key to continue.
*/
