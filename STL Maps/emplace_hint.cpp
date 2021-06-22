/*
Cpp_STL_Reference
MAP
program emplace_hint();

*/
#include<iostream>
#include<algorithm>
#include<map>
using namespace std;

//main begin
int main()
{
     // initialize container
    map<int, int> mp;

    // insert elements in random order
    mp.emplace_hint(mp.begin(), 2, 30); // faster
    mp.emplace_hint(mp.begin(), 1, 40); // faster
    mp.emplace_hint(mp.begin(), 3, 60); // slower

    // prints the elements
    cout << "\nThe map is : \n";
    cout << "KEY\tELEMENT\n";
    for (auto itr = mp.begin(); itr != mp.end(); itr++)
        cout << itr->first << "\t" << itr->second << endl;
    getchar();
    return 0;
}
//main end
///Program end

/*
output


The map is :
KEY     ELEMENT
1       40
2       30
3       60


Process returned 0 (0x0)   execution time : 1.705 s
Press any key to continue.
*/
