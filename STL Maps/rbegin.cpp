/*
Cpp_STL_Reference
MAP
program  rbegin;
reverse_iterator rbegin();
const_reverse_iterator rbegin() const;

*/
#include<iostream>
#include<algorithm>
#include<map>
using namespace std;

//main begin
int main()
{
    map<string,int> theMap;
    theMap.insert(make_pair("key 1", -1));
    theMap.insert(make_pair("Another key", 32));
    theMap.insert(make_pair("key the Three", 6667));
    theMap.insert({"AND gain", 60});
    map<string, int>::reverse_iterator iter;
    for(iter = theMap.rbegin(); iter != theMap.rend(); ++iter)
    {
        cout << "key : " << iter->first << "' , value: " << iter->second << endl;
    }
    getchar();
    return 0;
}
//main end
///Program end

/*
output
key : key the Three' , value: 6667
key : key 1' , value: -1
key : Another key' , value: 32
key : AND gain' , value: 60


Process returned 0 (0x0)   execution time : 1.570 s
Press any key to continue.

*/
