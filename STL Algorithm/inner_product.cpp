/*
Cpp_STL_Reference
program inner_product

TYPE inner_produt(iterator start1, iterator end1, iterator start2, iterator TYPE val);
TYPE inner_produt(iterator start1, iterator end1, iterator start2, iterator TYPE val, BinarayFunction f1, BinaryFunction f1);;

*/
#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>
using namespace std;
// Custom funcitons
int myaccumulator(int x, int y)
{
    return x - y;
}
int myproduct(int x, int y)
{
    return x * y;
}
//main begin
int main()
{
    int init = 100;
    int series1[] = {10,20,30};
    int series2[] = {1,2,3};
    int i = sizeof(series1) / sizeof(series1[0]);

    //Elements in series1
    cout << "First array contains : ";
    for(int n: series1)
    cout << " " << n;
    cout << "\n";

    //Elements in series 2
    cout << "Second array contains: ";
    for(int n: series2)
        cout << " " << n;
    cout << endl;

    cout << " Using default inner_products: ";
    cout << inner_product(series1, series1+i, series2, init);
    cout << "\n\n";

    cout << "\n\n********************\n";

    cout << "Using functional operations : ";

    // std :: minus returns the difference b/w
    // each elements of both array
    // std :: divides return the quotient of
    // each elements of both array after performing
    // divide operation
    // The operations is performed b/w number of same index
    // of both array

    cout << inner_product(series1, series1+i, series2, init, minus<int>(), divides<int>());


    cout << "\n\n";
      cout << "\n\n********************\n";

   cout << "Using custom functions: ";
   cout << std::inner_product(series1, series1 + i, series2, init,
                                    myaccumulator, myproduct);
    std::cout << '\n';

    getchar();
    return 0;
}
//main end
///Program end

/*
output

First array contains :  10 20 30
Second array contains:  1 2 3
 Using default inner_products: 240



********************
Using functional operations : 70



********************
Using custom functions: -40
*/

