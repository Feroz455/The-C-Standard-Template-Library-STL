/*
Cpp_STL_Reference
program partial_sort
void partial_sort(iterator start, iterator middle , iterator end)
void partial_sort(iterator start, iterator middle , iterator end, sStrickWeakOrdering cmp)

*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool comp(int a, int b)
{
    return (a < b);
}
//main begin
int main()
{

    vector<int> v = {1,3,1,10,3,3,7,7,8};
    vector<int>::iterator ip;
    //Using partial_sort
    partial_sort(v.begin(), v.begin()+3, v.end(), comp);
    //Displaying the vector after applying partial_sort
    for(ip = v.begin(); ip!= v.end(); ip++)
    {
        cout << *ip << " ";
    }

    cout << "\n/******************/\n";

    vector<int> vv = {10,45,60,78,23,21,30};
    //Using partial_sort
    partial_sort(vv.begin(), vv.begin()+1, vv.end(), greater<int>());
    //Displaying the largest element after applying
    //partial_sort

    ip = vv.begin();
    cout << "The largest element is = " << *ip;

    partial_sort(vv.begin(), vv.begin()+1, vv.end());
    //Displaying the largest element after applying
    //partial_sort

    ip = vv.begin();
    cout << "\nThe Smaller element is = " << *ip;


    int i;
    vector<int> v1 = vv;

    partial_sort(vv.begin(), vv.begin()+2, vv.end());
    //Using sort

    sort(v1.begin(), v1.begin()+2);

    cout << "\nvv = " ;
    for(int n: vv)
        cout << n << " ";

    cout << "\nv1 = ";
    for(int n: v1 )
        cout << n << " ";
     //
    getchar();
    return 0;
}
//main end
///Program end

/*
output

1 1 3 10 3 3 7 7 8
/*****************
The largest element is = 78
The Smaller element is = 10

Process returned 0 (0x0)   execution time : 1.760 s
Press any key to continue.
*/

