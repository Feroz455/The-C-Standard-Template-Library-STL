/*
Cpp_STL_Reference
VECTOR
program max_size
size_type max_size() const;
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//main begin
int main()
{
        // initialize a vector
    vector<int> vec;

    // returns the max_size of vector
    cout << "max_size of vector 1 = " << vec.max_size() << endl;

    vector<int> vec1;

    // returns the max_size of vector
    cout << "max_size of vector 2 = " << vec1.max_size() << endl;

    getchar();
    return 0;
}
//main end
///Program end

/*
output
*/

