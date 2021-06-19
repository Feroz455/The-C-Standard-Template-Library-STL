/*
Cpp_STL_Reference
VECTOR
program rbegin
reverse_iterator rend();
const reverse_iterator rend() const;
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//main begin
int main()
{
    vector<int> v;
    for(int i = 11 ; i < 16; i++)
    {
        v.push_back(i);
    }
    //print all the elements
    cout << "The vector elements in reverse order are \n";
    for(auto it = v.rbegin(); it != v.rend(); it++)
        cout << *it << " ";
    getchar();
    return 0;
}
//main end
///Program end

/*
output

The vector elements in reverse order are
15 14 13 12 11

Process returned 0 (0x0)   execution time : 105.564 s
Press any key to continue.
*/


