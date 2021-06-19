/*
Cpp_STL_Reference
program replace_copy


iterator replace_copy(iterator start, iterator end, iterator result, const TYPE & old_value, const TYPE & new_value);
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void replace_copyDemo(vector<char> &v)
{
    replace_copy(v.begin(), v.begin()+1, v.begin(), 'A', 'Z');
}

void print(vector<char> &v)
{
    int len = v.size();
    for(int i = 0; i < len; i++)
        cout << v[i] << " ";
    cout << endl;
}
//main begin
int main()
{
    vector<char> v;

    for(int i = 0; i <= 6; i++)
        v.push_back('A' + i);
    cout << "Before replace_copy " << " ; ";
    print(v);
    replace_copyDemo(v);
    cout << "After replace_copy " << " : ";
    print(v);

    getchar();
    return 0;
}
//main end
///Program end

/*
output

Before replace_copy  ; A B C D E F G
After replace_copy  : Z B C D E F G


Process returned 0 (0x0)   execution time : 8.765 s
Press any key to continue.

*/

