/*
Cpp_STL_Reference
MAP
program

*/
#include<iostream>
#include<algorithm>
#include<map>
using namespace std;

//main begin
int main()
{
    map<int, int> mp;
    //insert elements in random order
    mp.insert({2,30});
    mp.insert({1,40});
    mp.insert({3,60});
    mp.insert({4,20});
    mp.insert({5,50});


    if(mp.count(1))
        cout << "The key 1 present \n";
    else
        cout << "The 1 is not present \n";

    //checks if key 100 is present or not
    if(mp.count(100))
        cout << "The key 100 is present\n";
    else
        cout << "The key 100 is not present\n";
    getchar();
    return 0;
}
//main end
///Program end

/*
output
The key 1 present
The key 100 is not present


Process returned 0 (0x0)   execution time : 1.925 s
Press any key to continue.



*/
