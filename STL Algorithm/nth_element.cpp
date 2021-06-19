/*
Cpp_STL_Reference
program nth_element

void nth_element(iterator start , iterator middle, iterator end)
void nth_element(iterator start , iterator middle, iterator end, StrictWeakOrdering cmp);

*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool comp(int a, int b)
{
    return (a < b);
}
//main begin
int main()
{
    /*
    int v[] = {3,2,10,45,33,56,23,47};
    //using nth_element with n as 5
    nth_element(v,v+5, v+8, comp);

    //Since, n is 5 so 5th element should be sorted
    for(int i = 0; i < 8; ++i)
        cout << v[i] << " ";
    */
    int v[] = { 30, 20, 10, 40, 60, 50, 70, 80 }, i;

    // Using std::nth_element with n as 3
    std::nth_element(v, v + 2, v + 8);

    // Since, n is 3 so now first three numbers will be the
    // three smallest numbers in the whole array
    // Displaying first three smallest number
    for (i = 0; i < 3; ++i)
    {
        cout << v[i] << " ";
    }

    cout << "\n\n\n";
    // Using std::nth_element with n as 2
    std::nth_element(v, v + 1, v + 8, std::greater<int>());

    // Since, n is 2 so first 2 elements will be the largest
    // among all the array elements
    // Displaying First 2 elements
    for (i = 0; i < 2; ++i)
    {
        cout << v[i] << " ";
    }
    getchar();
    return 0;
}
//main end
///Program end

/*
output

33 2 10 23 3 45 47 56

Process returned 0 (0x0)   execution time : 2.850 s
Press any key to continue.
20 10 30

Process returned 0 (0x0)   execution time : 2.864 s
Press any key to continue.
*/

