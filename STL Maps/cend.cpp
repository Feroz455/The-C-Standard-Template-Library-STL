/*
Cpp_STL_Reference
MAP
program cend()


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
    mp.insert({ 2, 30 });
    mp.insert({ 1, 40 });
    mp.insert({ 3, 60 });
    mp.insert({ 4, 20 });
    mp.insert({ 5, 50 });

    auto ite = mp.cbegin();

    cout << "The first element is: ";
    cout << "{" << ite->first << ", "
         << ite->second << "}\n";

    // prints the elements
    cout << "\nThe map is : \n";
    cout << "KEY\tELEMENT\n";
    for (auto itr = mp.cbegin(); itr != mp.cend(); ++itr) {
        cout << itr->first << '\t' << itr->second << '\n';
    }
    getchar();
    return 0;
}
//main end
///Program end

/*
output
*/
