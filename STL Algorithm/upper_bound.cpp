/*
Cpp_STL_Reference
program upper_bound
iterator upper_bound(iterator start, iterator end, const TYPE& val);
iterator upper_bound(iterator start, iterator end, const TYPE& val, StrictWeakOrdering cmp);

*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//main begin
int main()
{
      std::vector<int> v{ 10, 20, 30, 40, 50 };

    // Print vector
    std::cout << "Vector contains :";
    for (int i = 0; i < v.size(); i++)
        std::cout << " " << v[i];
    std::cout << "\n";

    std::vector<int>::iterator upper1, upper2;

    // std :: upper_bound
    upper1 = std::upper_bound(v.begin(), v.end(), 35);
    upper2 = std::upper_bound(v.begin(), v.end(), 45);

    std::cout << "\nupper_bound for element 35 is at position : "
              << (upper1 - v.begin());
    std::cout << "\nupper_bound for element 45 is at position : "
              << (upper2 - v.begin());
    getchar();
    return 0;
}
//main end
///Program end

/*
output
*/

