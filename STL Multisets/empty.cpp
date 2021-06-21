/*
Cpp_STL_Reference
MULSET
program empty
void empty();
*/
#include<iostream>
#include<algorithm>
#include<set>
using namespace std;
//merge function
template<typename T>
T Merge(T a , T b)
{
    T t(a);
    t.insert(b.begin(), b.end());
    return t;
}

//main begin
int main()
{
    multiset<int> sample1, sample2, sample3;

    // List initialization
    sample1 = { 1, 2, 3, 4, 5 };
    sample2 = { 6,6,6,6, 7, 8, 1,9,99,999,999,999 };

    // Merge both sets and
    // move the result to sample3
    sample3 = Merge(sample1, sample2);

    // copy assignment
    sample1 = sample3;

    // Print the sets
    for (auto it = sample1.begin(); it != sample1.end(); ++it) {
        cout << *it << " ";
    }

    cout << endl;

    for (auto it = sample2.begin(); it != sample2.end(); ++it) {
        cout << *it << " ";
    }

    cout << endl;

    sample3.clear();
    cout << "After clear sample 3 \n";
    if(sample3.empty())
        cout << "\nSample 3 is empty\n";

    for (auto it = sample3.begin(); it != sample3.end(); ++it) {
        cout << *it << " ";
    }



    return 0;
    getchar();
    return 0;
}
//main end
///Program end

/*
output
1 1 2 3 4 5 6 6 6 6 7 8 9 99 999 999 999
1 6 6 6 6 7 8 9 99 999 999 999
After clear sample 3

Sample 3 is empty

Process returned 0 (0x0)   execution time : 0.102 s
Press any key to continue.

*/



