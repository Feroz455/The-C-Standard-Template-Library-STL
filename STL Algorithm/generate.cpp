/*
Cpp_STL_Reference
program generate
void generate(iterator start , iterator end , Generator g)
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
    generate(v1.begin(), v1.end(), gen);

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

1 2 3 4 5 6 7 8 9 10

Process returned 0 (0x0)   execution time : 3.625 s
Press any key to continue.
*/

