/*
Cpp_STL_Reference
program sort
void sort(iterator start, iterator end)
void sort(iterator start, iterator end, StrictWeakOrdering cmp);

*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool cmp(int a, int b)
{
    return a > b;
}
//main begin
int main()
{
     vector<int> v;
     v.push_back(23);
     v.push_back(-1);
     v.push_back(9999);
     v.push_back(0);
     v.push_back(4);

     cout << "Before sorting: ";
     for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
     cout << endl;

     sort(v.begin(), v.end(), cmp);
     cout << "After sorting: ";
     for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
     cout << endl;

    getchar();
    return 0;
}
//main end
///Program end

/*
output

Before sorting: 23 -1 9999 0 4
After sorting: -1 0 4 23 9999


Process returned 0 (0x0)   execution time : 5.906 s
Press any key to continue.
*/

