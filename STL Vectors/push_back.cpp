/*
Cpp_STL_Reference
VECTOR
program push_back
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
    while(!v.empty())
    {
        cout << v.back() << endl;
        v.pop_back();
    }
    getchar();
    return 0;
}
//main end
///Program end

/*
output
*/

