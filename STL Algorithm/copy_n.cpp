/*
Cpp_STL_Reference
program copy_n
iterator copy_n(iterator from , size_t num, iterator to);
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//main begin
int main()
{
     // initializing source vector
   vector<int> v1 = { 1, 5, 7, 3, 8, 3 };

   // declaring destination vectors
   vector<int> v2(6);
   vector<int> v3(6);

   // using copy() to copy 1st 3 elements
   copy(v1.begin(), v1.end(), v2.begin());

   // printing new vector
   cout << "The new vector elements entered using copy() : ";
   for(int i=0; i<v2.size(); i++)
   cout << v2[i] << " ";

   cout << endl;

   // using copy_n() to copy 1st 4 elements
   copy_n(v1.begin(), 4, v3.begin());

   // printing new vector
   cout << "The new vector elements entered using copy_n() : ";
   for(int i=0; i<v3.size(); i++)
   cout << v3[i] << " ";
    getchar();
    return 0;
}
//main end
///Program end

/*
output
The new vector elements entered using copy() : 1 5 7 3 8 3
The new vector elements entered using copy_n() : 1 5 7 3 0 0

Process returned 0 (0x0)   execution time : 1.437 s
Press any key to continue.

*/
