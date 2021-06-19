/*
Cpp_STL_Reference
program unique_copy
iterator unique_copy(iterator start, iterator  end, iterator result)
iterator unique_copy(iterator start, iterator  end, iterator result, BinPred p)

*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//main begin
int main()
{
       vector<int> v = { 10, 10, 30, 30, 30, 100, 10,
                      300, 300, 70, 70, 80 };

    // Declaring a vector to store the copied value
    vector<int> v1(10);

    vector<int>::iterator ip;

    // Using std::unique_copy
    ip = std::unique_copy(v.begin(), v.begin() + 12, v1.begin());
    // Now v1 contains {10 30 100 10 30 70 80 0 0 0}

    // Resizing vector v1
    v1.resize(std::distance(v1.begin(), ip));

    cout << "Before: ";
    for (ip = v.begin(); ip != v.end(); ++ip)
    {
        cout << *ip << " ";
    }

    // Displaying the vector after applying std::unique_copy
    cout << "\nAfter: ";
    for (ip = v1.begin(); ip != v1.end(); ++ip)
    {
        cout << *ip << " ";
    }
    getchar();
    return 0;
}
//main end
///Program end

/*
output
Before: 10 10 30 30 30 100 10 300 300 70 70 80
After: 10 30 100 10 300 70 80

Process returned 0 (0x0)   execution time : 2.350 s
Press any key to continue.
*/

