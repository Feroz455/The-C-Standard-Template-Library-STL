/*
Cpp_STL_Reference
program stable_partition(iterator start, iterator end, predicate p)
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool odd(int i)
{
    return (i % 2) == 1;
}
//main begin
int main()
{
    vector<int> v{ 6, 9, 0, 1, 2, 7, 5, 8, 0 };
    stable_partition(v.begin(), v.end(), [](int n) {return n>0; });
    for (int n : v) {
        cout << n << ' ';
    }
    cout << '\n';
     std::vector<int> vct;

    for (int i = 1; i < 10; ++i)
        vct.push_back(i); // 1 2 3 4 5 6 7 8 9

    std::vector<int>::iterator bound;
    bound = std::stable_partition(vct.begin(), vct.end(), odd);

    std::cout << "odd numbers:";
    for (std::vector<int>::iterator it = vct.begin(); it != bound; ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';

    std::cout << "evennumbers:";
    for (std::vector<int>::iterator it = bound; it != vct.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';

    getchar();
    return 0;
}
//main end
///Program end

/*
output
*/

