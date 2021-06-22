/*
Cpp_STL_Reference
MAP
program equal_range;
pair<iterator, iterator> equal_range(const key_type& key);
*/
#include<iostream>
#include<algorithm>
#include<map>
using namespace std;

//main begin
int main()
{
    //initialize container
    map<int, int> mp;
    //insert elements in random order
    mp.insert({4,30});
    mp.insert({1,40});
    mp.insert({6,60});

    pair<map<int, int>::iterator, map<int,int>::iterator> it;

    //Iterator of pairs
    it = mp.equal_range(1);

    cout << "The lower bound is " << it.first->first << " : " << it.first->second;
    cout << "\nThe upper bound is " << it.second->first << " : " << it.second->second;



    getchar();
    return 0;
}
//main end
///Program end

/*
output
The lower bound is 1 : 40
The upper bound is 4 : 30

Process returned 0 (0x0)   execution time : 1.622 s
Press any key to continue.
*/
