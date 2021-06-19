/*
Cpp_STL_Reference
program partial_sum
iterator partial_sum(iterator start, iterator end, iterator result)
iterator partial_sum(iterator start, iterator end, iterator result, BinOp p);

*/
#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>
using namespace std;
int myfun(int x, int y)
{
    return x * y;
}
//main begin
int main()
{
    int sum = 1;
    int a[] = { 5,10,15};

    //Simple default accumulate function
    cout << "\nResult using accumulate : ";
    cout << accumulate(a , a+3, sum);
    //using accumulate function with define function
    cout << "\nResult using accumulate with user_define function : ";

    cout << accumulate(a , a+3, sum, myfun);


    //using accumulate function with predefine function
    cout << "\nResult using accumulate with pre_defien function : ";

    cout << accumulate(a , a + 3, sum, minus<int>());



    int  aa[] = {1,2,3,4,5};
    int b[5];
    //Default function
    partial_sum(aa, aa + 5, b);
    cout << "\nPartial sum - using default function: ";
    for(int n : b)
        cout << n << " ";
    cout << "\n";

    //Using user define function
    cout << "\nPartial sum - using user defined function : ";
    for(int n: b)
        cout << n << " ";
    getchar();
    return 0;
}
//main end
///Program end

/*
output

Result using accumulate : 31
Result using accumulate with user_define function : 750
Result using accumulate with pre_defien function : -29
Partial sum - using default function: 1 3 6 10 15

Partial sum - using user defined function : 1 3 6 10 15
*/

