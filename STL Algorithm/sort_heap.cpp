/*
Cpp_STL_Reference
program
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//main begin
int main()
{
        vector<int> v = {8, 6, 2, 1, 5, 10};

    make_heap(v.begin(), v.end());

    cout << "heap:   ";
    for (const auto &i : v) {
     cout << i << ' ';
    }

    sort_heap(v.begin(), v.end());

    std::cout <<endl<< "now sorted:   ";
    for (const auto &i : v) {
        cout << i << ' ';
    }
    std::cout <<endl;
    getchar();
    return 0;
}
//main end
///Program end

/*
output

heap:   10 6 8 1 5 2
now sorted:   1 2 5 6 8 10


Process returned 0 (0x0)   execution time : 1.531 s
Press any key to continue.
*/

