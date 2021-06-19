/*
Cpp_STL_Reference
program iter_swap
inline void iter_swap(iterator a, iterator b);
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//main begin
int main()
{

    vector<int> v1;
    int i;
    for(i = 0; i < 10; i++)
    v1.push_back(i);

        //V1 container 0,1,2,3,4,5,6,7,8,9
        vector<int>:: iterator i1, i2;
    i1 = v1.begin();
    i2 = v1.end()-1;

    //Performing swap between first and last element of vector
    iter_swap(i1, i2);
    //Displaying v1 after swapping
    for(int i = 0; i < 10; ++i)
    {
        cout << v1[i] << " ";
    }
    getchar();
    return 0;
}
//main end
///Program end

/*
output
*/

