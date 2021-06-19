/*
Cpp_STL_Reference
program lexicographical_compare_3way(iterator start1, iterator end1, iterator start2, iterator end2)
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//main begin
int main()
{
  int A1[] = {3, 1, 4, 2, 8, 5, 7};
  int A2[] = {3, 1, 4, 1, 5, 9, 3};
  int A3[] = {1, 2, 3, 4};
  int A4[] = {1, 2, 3, 4, 5};

  const int N1 = sizeof(A1) / sizeof(int);
  const int N2 = sizeof(A2) / sizeof(int);
  const int N3 = sizeof(A3) / sizeof(int);
  const int N4 = sizeof(A4) / sizeof(int);

  int C12 = lexicographical_compare_3way(A1, A1 + N1, A2, A2 + N2);
  int C34 = lexicographical_compare_3way(A3, A3 + N3, A4, A4 + N4);

  cout << "A1[] and A2[]: " << C12 << endl;
  cout << "A3[] and A4[]: " << C34 << endl;
    getchar();
    return 0;
}
//main end
///Program end

/*
output
*/

