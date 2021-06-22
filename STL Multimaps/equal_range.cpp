/*
Cpp_STL_Reference
MULTIMAP
program equal_range
pair<iterator, iterator> equal_range(const key_type& key);
*/
#include<iostream>
#include<algorithm>
#include<map>
#include<string>
using namespace std;

//main begin
int main()
{
    //initialize container
    multimap<int, int > mp;
    //Insert elements in random order

    mp.insert({2,30});
    mp.insert({1,40});
    mp.insert({3,50});
    mp.insert({1,20});
    mp.insert({5,50});


    // Stores the range of key 1
    pair<multimap<int,int>::iterator,multimap<int,int>::iterator> it = mp.equal_range(1);

    cout << "The multimap elements of key 1 is : \n";
    cout << "KEY\tELEMENT\n";

    // Prints all the elements of key 1
    for (multimap<int,int>::iterator itr = it.first; itr != it.second; ++itr) {
        cout << itr->first
             << '\t' << itr->second << '\n';
    }
    getchar();
    return 0;
}
//main end
///Program end

/*
output
The multimap elements of key 1 is :
KEY     ELEMENT
1       40
1       20


Process returned 0 (0x0)   execution time : 1.031 s
Press any key to continue.

*/
