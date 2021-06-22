/*
Cpp_STL_Reference
MAP
program insert
iterator insert(iterator i, const TYPE& pair)
void insert(input_iterator start, input_iterator end);
pair<iterator, bool> insert(const TYPE& pair);

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
    map<string, int>::iterator iter;
    iter = theMap.find("key 1");

    theMap.insert(iter, {"With iter", 90});
    for(iter = theMap.begin(); iter != theMap.end(); ++iter)
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
key : AND gain' , value: 60
key : Another key' , value: 32
key : With iter' , value: 90
key : key 1' , value: -1
key : key the Three' , value: 6667


Process returned 0 (0x0)   execution time : 3.136 s
Press any key to continue.


*/
