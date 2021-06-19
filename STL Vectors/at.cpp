/*
Cpp_STL_Reference
VECTOR
program at
TYPE & at(size_type loc)
const TYPE& at(size_type loc) const;
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//main begin
int main()
{
    vector<int> v(5,1);
    for(int i = 0; i < 10; i++)
    {
        cout << "Element " << i << " is " << v[i] << endl;
    }

    cout << "\n\n\n";
     for(int i = 0; i < 10; i++)
    {
        cout << "Element " << i << " is " << v.at(i) << endl;
    }

    getchar();
    return 0;
}
//main end
///Program end

/*
output
*/

