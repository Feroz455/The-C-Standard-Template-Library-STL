/*
Cpp_STL_Reference
MULTISETS
program count
count (const key_type& key);

*/
#include<iostream>
#include<algorithm>
#include<set>
using namespace std;

//main begin
int main()
{
    int array[] = {15,10,15,11,10,18,18,18};
    //initializes the set from an array
    multiset<int> s(array, array+9);

    cout << "Count 18 occurs " << s.count(18) << " times in container";
    getchar();
    return 0;
}
//main end
///Program end

/*
output
Count 18 occurs 3 times in container

Process returned 0 (0x0)   execution time : 1.319 s
Press any key to continue.
*/
