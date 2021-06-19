 /*
Cpp_STL_Reference
program iterator rotate_copy(iterator start, iterator middle , iterator end , iterator result)
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//main begin
int main()
{
    int arr[] = {10,20,30,40,50,60,70};
    //Use of rotate_copy
    vector<int> v(7);
    rotate_copy(arr, arr+3, arr+7,v.begin());
    //Print the content
    cout << "v contains: ";
    for(vector<int>::iterator i = v.begin(); i != v.end(); i++)
        cout << " "<< *i;
    cout << endl;
    getchar();
    return 0;
}
//main end
///Program end

/*
output

v contains:  40 50 60 70 10 20 30


Process returned 0 (0x0)   execution time : 1.620 s
Press any key to continue.

*/

