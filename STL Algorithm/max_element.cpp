/*
Cpp_STL_Reference
program max_element(iterator start, iterator end);
iterator max_element(iterator start, iterator end, BinPred p)
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//main begin
int main()
{
    int array[] = {3,1,4,1,5,9};
    int array_size = 6;
    cout << "Max element in array is " << *max_element(array, array+array_size) << endl;
    vector<char> v;
    v.push_back('a');
    v.push_back('b');
    v.push_back('c');
    v.push_back('d');

    cout << "Max element in the vector v is " << *max_element(v.begin(), v.end()) << endl;

    getchar();
    return 0;
}
//main end
///Program end

/*
output

Max element in array is 9
Max element in the vector v is d


Process returned 0 (0x0)   execution time : 45.031 s
Press any key to continue.
*/

