/*
Cpp_STL_Reference
MULTISETS
program swap
void swap(container * from)

*/
#include<iostream>
#include<algorithm>
#include<set>
using namespace std;

//main begin
int main()
{
    multiset<int> m;
    for(int i = 1; i < 10; i++)
    {
        m.insert(m.begin(),i);
    }
    multiset<int> m1;
    for(int i = 1; i < 10; i++)
    {
        m1.insert(m1.begin(),(i*10));
    }

    cout <<  "1st multiset is ";
    for(int n: m)
        cout << n << " ";
    cout << "\n";





    cout <<  "\n2nd multiset is ";



    for(int n: m1)
        cout << n << " ";
    cout << "\n";


    m.swap(m1);


    cout << "After swap\n";
    cout <<  "1st multiset is ";
    for(int n: m)
        cout << n << " ";
    cout << "\n";





    cout <<  "\n2nd multiset is ";



    for(int n: m1)
        cout << n << " ";
    cout << "\n";
    getchar();
    return 0;
}
//main end
///Program end

/*
output


1st multiset is 1 2 3 4 5 6 7 8 9

2nd multiset is 10 20 30 40 50 60 70 80 90
After swap
1st multiset is 10 20 30 40 50 60 70 80 90

2nd multiset is 1 2 3 4 5 6 7 8 9
*/
