/*
Cpp_STL_Reference
MULTIMAP
program  erase
void erase(iterator pos);
void erase(iterator start, iterator end);
size_type erase(const key_type& key);
*/
#include<iostream>
#include<algorithm>
#include<map>
using namespace std;

//main begin
int main()
{
   /* //initialize container
    multimap<int , int> mp;

    //insert elements in random order

    mp.insert({2,30});
    mp.insert({1,40});
    mp.insert({3,50});
    mp.insert({1,20});
    mp.insert({5,50});


    //prints the elements
    cout << "The elements from position 3 in multimap are : \n";
    cout << "KEY \tELEMENTS\n";

    //find() function find the position at which 3 is

    for(auto itr = mp.begin(); itr != mp.end(); itr++)
        cout << itr->first << " \t " << itr->second << "\n";


        mp.erase(1);
        mp.erase(2);

    //prints the elements
    cout << "The elements from position 3 in multimap are : \n";
    cout << "KEY \tELEMENTS\n";

    //find() function find the position at which 3 is

    for(auto itr = mp.begin(); itr != mp.end(); itr++)
        cout << itr->first << " \t " << itr->second << "\n";*/

        /*
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
    for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
        cout << itr->first
             << '\t' << itr->second << '\n';
    }

    // function to erase given position
    auto it = mp.find(2);
    mp.erase(it);

    auto it1 = mp.find(5);
    mp.erase(it1);

    // prints the elements
    cout << "\nThe multimap after applying erase() is : \n";
    cout << "KEY\tELEMENT\n";
    for (auto itr = mp.crbegin(); itr != mp.crend(); ++itr) {
        cout << itr->first
             << '\t' << itr->second << '\n';
    }
        */


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
    for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
        cout << itr->first
             << '\t' << itr->second << '\n';
    }

    // function to erase in a given range
    // find() returns the iterator reference to
    // the position where the element is
    auto it1 = mp.find(2);
    auto it2 = mp.find(5);
    mp.erase(it1, it2);

    // prints the elements
    cout << "\nThe multimap after applying erase() is : \n";
    cout << "KEY\tELEMENT\n";
    for (auto itr = mp.crbegin(); itr != mp.crend(); ++itr) {
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

The elements from position 3 in multimap are :
KEY     ELEMENTS
1        40
1        20
2        30
3        50
5        50
The elements from position 3 in multimap are :
KEY     ELEMENTS
3        50
5        50


Process returned 0 (0x0)   execution time : 1.316 s
Press any key to continue.
*/
