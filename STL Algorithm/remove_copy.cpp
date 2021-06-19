/*
Cpp_STL_Reference
program remove_copy
iterator remove_copy(iterator start, iterator end, iterator result, cnst
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void removecopy(vector<int> & v1)
{
    remove_copy(v1.begin(), v1.end(), v1.begin(), 3);
}

//Function to print content of vector
void print(vector<int> &v)
{
    int len = v.size();
    for(int i = 0; i < len; i++)
        cout << v[i] << " ";
    cout << endl;
}
//main begin
int main()
{
    vector<int> v1, v2(10);
    //Push data in vector
    for(int i = 10; i <= 25; i++)
        v1.push_back(i % 6);

    cout << "Element of v1 before remove-copy: " << endl;
    print(v1);

    removecopy(v1);

    cout << "After removing element 3 " << endl;
    print(v1);

    getchar();
    return 0;
}
//main end
///Program end

/*
output
Element of v1 before remove-copy:
4 5 0 1 2 3 4 5 0 1 2 3 4 5 0 1
After removing element 3
4 5 0 1 2 4 5 0 1 2 4 5 0 1 0 1


Process returned 0 (0x0)   execution time : 67.236 s
Press any key to continue.

*/

