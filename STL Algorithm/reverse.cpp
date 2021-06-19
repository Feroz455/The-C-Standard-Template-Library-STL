/*
Cpp_STL_Reference
program reverse
void reverse(iterator start, iterator end)
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//main begin
int main()
{
    vector<int> v = {1,2,3,4,5,6,7,8,9};
    reverse(v.begin(), v.end());

    for(int n : v)
        cout << n << " ";

    getchar();
    return 0;
}
//main end
///Program end

/*
output

9 8 7 6 5 4 3 2 1

Process returned 0 (0x0)   execution time : 1.965 s
Press any key to continue.
*/

