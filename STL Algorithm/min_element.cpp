/*
Cpp_STL_Reference
program
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
    cout << "Min element in array is " << *min_element(array, array+array_size) << endl;
    vector<char> v;
    v.push_back('a');
    v.push_back('b');
    v.push_back('c');
    v.push_back('d');

    cout << "Min element in the vector v is " << *min_element(v.begin(), v.end()) << endl;
    getchar();
    return 0;
}
//main end
///Program end

/*
output

Min element in array is 1
Min element in the vector v is a


Process returned 0 (0x0)   execution time : 5.348 s
Press any key to continue.
*/

