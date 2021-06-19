/*
Cpp_STL_Reference
program set_difference
iterator set_difference (iterator start1, iterator end1, iterator start2, iterator end2, iterator result);
iterator set_difference (iterator start1, iterator end1, iterator start2, iterator end2, iterator result, StrictWeakOrdering cmp);

*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool comp(int i, int j)
{
    return(i < j);
}

//main begin
int main()
{
    int first[] = {5,10,15,20,25};
    int second[] = {50,40,30,20,10};

    int n = sizeof(first)/sizeof(first[0]);
    vector<int> v2(5);
    vector<int>::iterator it,ls;

    sort(first, first + 5);
    sort(second, second + 5);

    //Print elements
    cout << "First array : ";
    for(int i = 0; i < n; i++)
        cout << " " << first[i];
        cout << "\n";

        //Print elements
        cout << "Second array : ";
        for(int i = 0; i < n; i++)
            cout << " "<< second[i];
        cout << "\n\n\n";


        //Using default comparison first array intersection second array

      //  ls  = set_difference(first, first+n, second, second + n, v2.begin());
        ls  = set_difference(first, first+n, second, second + n, v2.begin(), comp);

        cout << "Using default comparison , \n";

        cout << " The difference has " << (ls - v2.begin()) << " elements : ";

        for(it = v2.begin(); it < ls; it++)
            cout << " " << *it;
        cout << "\n";
    getchar();
    return 0;
}
//main end
///Program end

/*
output

First array :  5 10 15 20 25
Second array :  10 20 30 40 50


Using default comparison ,
 The difference has 3 elements :  5 15 25


Process returned 0 (0x0)   execution time : 2.265 s
Press any key to continue.
*/

