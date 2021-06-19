/*
Cpp_STL_Reference
program Adjacent_Difference
y0 = x0
y1 = x1 - x0
y2 = x2 - x1
y3 = x3 - x2
y4 = x4 - x3
*/
#include<iostream>
#include<numeric>
using namespace std;
int comp(int x, int y)
{
    return x+y;
}
int mul(int x, int y)
{
    return x *y;
}
//main begin
int main()
{
    //iterator adjacent_difference(iterator start, iterator end, iterator result);
    //iterator adjacent_difference(iterator start, iterator end, iterator result, BinaryFunction f);
    int val[] = {1,2,3,5,9,11,12};
    int n = sizeof(val) / sizeof(val[0]);
    int result[n];
    //Array containers

    std::cout << "Array contains ; ";
    for(int i = 0; i < n; i++)
    {
        std::cout << " " << val[i];

    }
    cout << "\n";

    //using default std :: adjacent_difference
    std::adjacent_difference(val, val+n, result);
    cout << "Using default adjacent_Difference : ";
    for(int i = 0; i < n ; i++)
    {
        cout << result[i] << " " ;

    }
    cout << "\n";

      cout << "iterator adjacent_difference(iterator start, iterator end, iterator result, BinaryFunction f)" << endl;
    std::adjacent_difference(val, val+n, result, comp);
    for(int i = 0; i < n ; i++)
    {
        cout << result[i] << " " ;

    }
    cout << "\n";
    std::adjacent_difference(val, val+n, result, mul);
    for(int i = 0; i < n ; i++)
    {
        cout << result[i] << " " ;

    }
    cout << "\n";
    getchar();
    return 0;
}
//main end
///Program end

/*
output
Array contains ;  1 2 3 5 9 11 12
Using default adjacent_Difference : 1 1 1 2 4 2 1
iterator adjacent_difference(iterator start, iterator end, iterator result, BinaryFunction f)
1 3 5 8 14 20 23
1 2 6 15 45 99 132


Process returned 0 (0x0)   execution time : 1.766 s
Press any key to continue.
