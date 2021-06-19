/*
Cpp_STL_Reference
VECTOR
program back
TYPE & back();
const TYPE & back() const;
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//main begin
int main()
{
    vector<int> v;
    for(int i = 0; i < 5; i++)
    {
        v.push_back(i);
    }
    cout << "The first elements is " << v.front() << " and the last elements is " << v.back() << endl;
    getchar();
    return 0;
}
//main end
///Program end

/*
output
The first elements is 0 and the last elements is 4
*/

