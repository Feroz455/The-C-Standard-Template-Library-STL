/*
Cpp_STL_Reference
MULTIMAP
program

*/
#include<iostream>
#include<algorithm>
#include<map>
using namespace std;

//main begin
int main()
{


    //Initialize container

    multimap<int, int> mp;

    //insert elements in random order

    mp.insert({2,30});
    mp.insert({6,40});
    mp.insert({2,60});
    mp.insert({3,20});
    mp.insert({1,50});
    mp.insert({4,50});


    cout << "The elements from position 3 in multimap are : \n";
    cout << "KEY \tELEMENTS\n";

    //find() function find the position at which 3 is

    for(auto itr = mp.find(3); itr != mp.end(); itr++)
        cout << itr->first << " \t " << itr->second << "\n";
    getchar();
    return 0;
}
//main end
///Program end

/*
output
The elements from position 3 in multimap are :
KEY     ELEMENTS
3        20
4        50
6        40
*/
