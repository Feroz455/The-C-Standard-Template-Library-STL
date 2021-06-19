
/*
Cpp_STL_Reference
program set_symmetric_difference
iterator set_symmetric_difference(iterator start1, iterator end1, iterator start2, iterator end2, iterator result)
iterator set_symmetric_difference(iterator start1, iterator end1, iterator start2, iterator end2, iterator result, StrictWeakOrdering cmp)

*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//main begin
int main()
{
    int first[] = {5,10,15,20,25};
    int second[] = {50,40,30,20,10};

    int n = sizeof(first) / sizeof(first[0]);

    //Print first array

    cout << "First array contains : ";
    for(int i = 0; i < n; i++)
        cout <<  " "<< first[i];
        cout << "\n";
    cout << "second array contains : ";
    for(int i = 0; i < n; i++)
        cout <<  " "<< second[i];
    cout << '\n';


    vector<int> v(10);
    vector<int>::iterator it, st;

    //Sorting both the arrays
    sort (first, first+n);
    sort(second, second+n);

    //using default operator  <

    it = set_symmetric_difference(first, first + 5, second, second + 5, v.begin());

    cout << "The symmetric difference has " << (it - v.begin()) << " elements \n" ;

    for(st = v.begin(); st != it; ++st)
    {
        cout << "  "   << *st;
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
