/*
Cpp_STL_Reference
program partition

iterator partition(iterator start, iterator end, predicate  p);
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//main begin
int main()
{
    //Initializing vector
    vector<int> vect = {2,1,5,6,8,7};

    //checking if vector is partitioned using is_partitioned()
    is_partitioned(vect.begin(), vect.end(), [](int x){return x % 2 == 0;})?
    cout << "Vector is partitioned":
    cout << "Vector is not partitioned ";
    cout << endl;

    partition(vect.begin(), vect.end(), [](int x){return x % 2== 0;});
    //Checking if vector is partitioned
    //Using is_partitioned()

    is_partitioned(vect.begin(), vect.end(), [](int x){return x % 2 == 0;})?
    cout << "Now vector is partitioned after partition operation" :
    cout << "Vector is still not partitioned after operation";
    cout << endl;

    //Displaying partitioned vector
    cout << "The partitioned vector is : ";
    for(int n: vect)
        cout << n  << " ";

    stable_partition(vect.begin(), vect.end(), [](int x){return x % 2 == 0;});
    //Displaying partitioned vector
    cout << "The partitioned vector is : ";
    for(int &x: vect) cout << x << " ";
    cout << endl;
    vector<int>::iterator it1;
    //Declaring iterator vector
    //Using partition_point() to get ending position of partition
    auto it = partition_point(vect.begin(), vect.end(),[](int x){return x % 2 == 0;});

    //Displaying partitioned vector
    cout << "The vector elements returning true for condition are : ";

    for(it1 = vect.begin(); it1 != it; it1++)
        cout << *it1 << " ";
    cout << endl;

    //partition_copy


    getchar();
    return 0;
}
//main end
///Program end

/*
output

Vector is not partitioned
Now vector is partitioned after partition operation
The partitioned vector is : 2 8 6 5 1 7

Process returned 0 (0x0)   execution time : 4.379 s
Press any key to continue.

*/

