/*
Cpp_STL_Reference
MULTIMAP
program size
size_type size() const;

*/
#include<iostream>
#include<algorithm>
#include<map>
using namespace std;

//main begin
int main()
{
          // initialize container
    multimap<int, int> mp;
    // insert elements in random order
    mp.insert({ 2, 30 });
    mp.insert({ 1, 40 });
    mp.insert({ 3, 60 });
    mp.insert({ 2, 20 });
    mp.insert({ 5, 50 });

    // prints the elements
    cout << "The multimap before using erase() is : \n";
    cout << "KEY\tELEMENT\n";
    for (auto itr = mp.rbegin(); itr != mp.rend(); ++itr) {
        cout << itr->first
             << '\t' << itr->second << '\n';
    }

    cout << "size of multimap : " << mp.size() << endl;
    getchar();
    return 0;
}
//main end
///Program end

/*
output
The multimap before using erase() is :
KEY     ELEMENT
5       50
3       60
2       20
2       30
1       40
size of multimap : 5


Process returned 0 (0x0)   execution time : 1.315 s
Press any key to continue.


*/
