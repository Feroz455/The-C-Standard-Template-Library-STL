/*
Cpp_STL_Reference
MAP
program emplace();
void emplace();

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
    mp.emplace(2, 30);
    mp.emplace(1, 40);
    mp.emplace(2, 20);
    mp.emplace(1, 50);
    mp.emplace(4, 50);

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
4       50


Process returned 0 (0x0)   execution time : 1.488 s
Press any key to continue.
*/
