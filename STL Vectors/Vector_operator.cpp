/*
Cpp_STL_Reference
VECTOR
program operators
TYPE & operator[](size_type index);
const TYPE& operator[](size_type index) const;
vector operator = (const vector& c2);
bool operator == (const vector& c1, const vector& c2);
bool operator != (const vector& c1, const vector& c2);
bool operator < (const vector& c1, const vector& c2);
bool operator > (const vector& c1, const vector& c2);
bool operator <= (const vector& c1, const vector& c2);
bool operator >= (const vector& c1, const vector& c2);
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//main begin
int main()
{
    vector<int> v{1,2,3};
    vector<int> v1{3,2,1,4};
    v = v1;
    cout << " v = ";
    for(auto it = v.begin(); it != v.end(); it++)
        cout << " " << *it;
    cout << "\n";


    cout << v[3];
    getchar();
    return 0;
}
//main end
///Program end

/*
output
 v =  3 2 1 4
\

Process returned 0 (0x0)   execution time : 2.555 s
Press any key to continue.

*/

