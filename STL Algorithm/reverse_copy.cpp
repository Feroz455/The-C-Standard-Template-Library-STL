/*
Cpp_STL_Reference
program reverse_copy

iterator reverse_copy(iterator start, iterator end, iterator result);
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//main begin
int main()
{
    int scr[] = {1,2,3,4,5,6,7,8,9,10};

    int n = sizeof(scr)/ sizeof(scr[0]);

    vector<int> dest(n);

    reverse_copy(scr, scr+n, dest.begin());

    cout << "The vector is : \n";
    for(int &x: dest)
    {
        cout << x << " ";
    }
    getchar();
    return 0;
}
//main end
///Program end

/*
output
*/

