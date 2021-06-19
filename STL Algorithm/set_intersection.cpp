/*
Cpp_STL_Reference
program set_intersection

*/
#include<iostream>
#include<algorithm>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

bool comp(int a, int b)
{
    return a < b;
}
//main begin
int main()
{
    int first[] = {5,10,15,20,25};
    int second[] = {50,40,30,20,10};
    int n = sizeof(first) / sizeof(first[0]);
    vector<int> v1(5);
    vector<int> v2(5);
    vector<int>::iterator it, ls;

    sort(first, first+5);
    sort(second, second+5);

    //Print elements
    cout << "First array: ";
    for(int i = 0; i < 5; i++)
        cout << " "<< first[i];
    cout << "\n";

    //Print elements

    cout << "second array: ";
    for(int i = 0; i < 5; i++)
        cout << " " << second[i];

    cout << "\n\n";

    //set_intersection
    ls = set_intersection(first, first+5, second, second+5, v1.begin(), comp);
    cout << "The intersection has " << (ls - v1.begin()) << " element: ";

    for(it = v1.begin(); it != ls ; it++)
    {
        cout << " " << *it;
    }
    cout << "\n";
    getchar();
    return 0;
}
//main end
///Program end

/*
output
*/

