/*
Cpp_STL_Reference
MULTIMAP
program swap;
void swap(container & from)
*/
#include<iostream>
#include<algorithm>
#include<map>
using namespace std;

//main begin
int main()
{
          // initialize container
    multimap<int, int> mp, mp1;
    // insert elements in random order
    mp.insert({ 2, 30 });
    mp.insert({ 1, 40 });
    mp.insert({ 3, 60 });
    mp.insert({ 2, 20 });
    mp.insert({ 5, 50 });

    mp1.insert({ 2, 300 });
    mp1.insert({ 1, 400 });
    mp1.insert({ 3, 600});
    mp1.insert({ 2, 200});
    mp1.insert({ 5, 500 });
    // prints the elements
    cout << "\n\n mp = \n";
    for (auto itr = mp.rbegin(); itr != mp.rend(); ++itr) {
        cout << itr->first << '\t' << itr->second << '\n';
    }
    // prints the elements
    cout << "\n\n m2= \n";
    for (auto itr = mp.rbegin(); itr != mp.rend(); ++itr) {
        cout << itr->first << '\t' << itr->second << '\n';
    }
    cout << "After swap";
    mp.swap(mp1);
    cout << "\n\n mp = \n";
    for (auto itr = mp.rbegin(); itr != mp.rend(); ++itr) {
        cout << itr->first << '\t' << itr->second << '\n';
    }
    // prints the elements
    cout << "\n\n m2= \n";
    for (auto itr = mp.rbegin(); itr != mp.rend(); ++itr) {
        cout << itr->first << '\t' << itr->second << '\n';
    }
    cout <<
    getchar();
    return 0;
}
//main end
///Program end

/*
output


 mp =
5       50
3       60
2       20
2       30
1       40


 m2=
5       50
3       60
2       20
2       30
1       40
After swap

 mp =
5       500
3       600
2       200
2       300
1       400


 m2=
5       500
3       600
2       200
2       300
1       400


*/

