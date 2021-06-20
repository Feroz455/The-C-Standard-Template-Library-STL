 /*
Cpp_STL_Reference
LIST
program reverse
*/
#include<iostream>
#include<algorithm>
#include<list>
using namespace std;

//main begin
int main()
{
    list<int> L;
    for(int i = 0; i < 5; i++)
    {
        L.push_back(i*10);
    }

    for(int n : L)
        cout << n << " ";
    cout << " ";
    cout << "\n\n";
    L.reverse();
    for(int n : L)
        cout << n << " ";
    cout << " ";
    getchar();
    return 0;
}
//main end
///Program end

/*
output
0 10 20 30 40

40 30 20 10 0

Process returned 0 (0x0)   execution time : 1.596 s
Press any key to continue.
*/

