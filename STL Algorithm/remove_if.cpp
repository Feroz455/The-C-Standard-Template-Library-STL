/*
Cpp_STL_Reference
Program remove_if
iterator remove_if(iterator start, iterator end, Predicate p);
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool IsOdd(int i)
{
     return ((i % 2) == 1);
}
//main begin
int main()
{
     vector<int> vec1{10, 20, 30, 30, 20, 10, 10, 20};
     vector<int> vec2{1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    // Print original vector
    cout << "Original vector : ";
    for (int i = 0; i < vec1.size(); i++)
        cout << " " << vec1[i];
    cout << "\n";

    // Iterator that store the position of last element
    vector<int>::iterator pend;

    // remove function call
    pend = remove(vec1.begin(), vec1.end(), 20);

    // Print the vector
    cout << "After remove : ";
    for (vector<int>::iterator p = vec1.begin();
         p != pend; ++p)
        cout << " " << *p;
    cout << "\n";

    // Print original vector
    cout << "\nOriginal vector : ";
    for (int i = 0; i < vec2.size(); i++)
        cout << " " << vec2[i];
    cout << "\n";

    // remove_if function call
    pend = remove_if(vec2.begin(), vec2.end(), IsOdd);

    // the same of the above can be done using lambda
    // function in 1 line
    pend = remove_if(vec2.begin(), vec2.end(),[](int i) { return ((i % 2) == 1); });

    // Print the vector
    cout << "After remove_if : ";
    for (vector<int>::iterator q = vec2.begin();
         q != pend; ++q)
        cout << " " << *q;
     cout << "\n";
    getchar();
    return 0;
}
//main end
///Program end

/*
output

Original vector :  10 20 30 30 20 10 10 20
After remove :  10 30 30 10 10

Original vector :  1 2 3 4 5 6 7 8 9 10
After remove_if :  2 4 6 8 10 6 8 10


Process returned 0 (0x0)   execution time : 6.087 s
Press any key to continue.

*/

