/*
Cpp_STL_Reference
program generate_n

iterator generate_n(iterator result, size_t numm generator g);
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int gen()
{
    static int i = 0;
    return ++i;
}
//main begin
int main()
{
    int i;
    //Declaring a vector of size 0
    vector<int> v1(10);
    //Using generator
    generate_n(v1.begin(), 10, gen);

    vector<int>::iterator i1;
    for(i1 = v1.begin(); i1 != v1.end(); ++i1)
    {
        cout << *i1 << " ";
    }
    getchar();
    return 0;
}
//main end
///Program end

/*
output
*/

