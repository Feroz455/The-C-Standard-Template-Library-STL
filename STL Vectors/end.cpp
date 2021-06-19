/*
Cpp_STL_Reference
VECTOR
program const_iterator end() const;
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//main begin
int main()
{
    vector<int> v1;
    v1.push_back(0);
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    int bad_val = *(v1.end());
    cout << "bad_val is " << bad_val << endl;
    int good_val = *(v1.end() - 1);
    cout << "good_val is " << good_val << endl;

    vector<int>::iterator it;

    for(it = v1.begin(); it != v1.end(); it++)
        cout << *it << endl;
    cout << "\n";
    getchar();
    return 0;
}
//main end
///Program end

/*
output
bad_val is 0
good_val is 3


Process returned 0 (0x0)   execution time : 1.717 s
Press any key to continue.

*/
