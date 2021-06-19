/*
Cpp_STL_Reference
Program accumulate
*/
#include<iostream>
#include<numeric>
using namespace std;
int myFun(int x, int y)
{
    return x * y;
}
//main begin
int main()
{
   //  TYPE accumulate(iterator start, iterator end, TYPE val);
    // TYPE accumulate(iterator start, iterator end, TYPE val, BinaryFunction f);
    int result = 1;
    int a[] = {5,10,15};
    //simple default accumulate function
    cout << "\nResult using accumulate: ";
    cout << accumulate(a, a+3,result);
    //using accumulate with define function
    cout << "\nResult using accumulate with user define function: ";
    cout << accumulate(a, a+3, result, myFun);

    //Using accumulate function with pre_define function

    cout << "\nResult using accumulate with pre_define function: ";
    cout << accumulate(a, a+3, result, std::minus<int>());
    getchar();
    return 0;
}
//main end
///Program end

/*
output

Result using accumulate: 31
Result using accumulate with user define function: 750
Result using accumulate with pre_define function: -29

Process returned 0 (0x0)   execution time : 0.859 s
Press any key to continue.
*/
