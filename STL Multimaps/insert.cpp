/*
Cpp_STL_Reference
MULTIMAP
program insert

iterator  insert(iterator pos, const TYPE& val);
iterator insert(const TYPE & val);
void insert(input_iterator start, input_iterator end);
*/
#include<iostream>
#include<algorithm>
#include<map>
using namespace std;

//main begin
int main()
{
    multimap<int, int> mp, mp1;

    //insert elements in random order
    mp.insert({2,30});
    mp.insert({1,40});

    //Inserts all elements in range [begin end] in mp1
    mp1.insert(mp.begin(), mp.end());

    //Printing the elements
    cout << "Elements in mp1 are \n";
    cout << "KEY\tELEMENTS\n";


    for(auto itr = mp1.begin(); itr != mp1.end(); itr++)
    {
        cout << itr->first << "\t" << itr->second << "\n";
    }

    auto it = mp.find(2);

    //insert(3,6) starting the search from position where 2 is present
    mp.insert(it,{3, 60});


     //Printing the elements
    cout << "Elements in mp1 are \n";
    cout << "KEY\tELEMENTS\n";


    for(auto itr = mp.begin(); itr != mp.end(); itr++)
    {
        cout << itr->first << "\t" << itr->second << "\n";
    }
    getchar();
    return 0;
}
//main end
///Program end

/*
output
Elements in mp1 are
KEY     ELEMENTS
1       40
2       30
Elements in mp1 are
KEY     ELEMENTS
1       40
2       30
3       60


Process returned 0 (0x0)   execution time : 1.485 s
Press any key to continue.





*/
