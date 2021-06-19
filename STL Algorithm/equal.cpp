/*
Cpp_STL_Reference
program equal
bool equal(iterator start1, iterator end1, iterator start2)
bool equal(iterator start1, iterator end1, iterator start2, BinPred p);

*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool pred(int i, int j)
{
    return (i != j);
}
//main begin
int main()
{
    vector<int> v1;
    for(int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }
    vector<int> v2;
    for(int i= 0; i < 10; i++)
    {
        v2.push_back(i);
    }
    if(equal(v1.begin(), v1.end(), v2.begin()))
    {
        cout << "v1 and v2 are equal " << endl;
    }
    else
        cout << "v1 and v2 are NOT equal " << endl;

        /*******************/

    int v[] = { 10, 20, 30, 40, 50 };
    std::vector<int> vector_1 (v, v + sizeof(v) / sizeof(int) );

    // Printing vector1
    std::cout << "Vector contains : ";
    for (unsigned int i = 0; i < vector_1.size(); i++)
        std::cout << " " << vector_1[i];
    std::cout << "\n";

    // using std::equal()
    // Comparison within default constructor
    if ( std::equal (vector_1.begin(), vector_1.end(), v) )
        std::cout << "The contents of both sequences are equal.\n";
    else
        printf("The contents of both sequences differ.");
    /****************/
    if(equal(vector_1.begin(), vector_1.end(), v, pred))
        cout << "The contents of both sequences are equal.\n";
    else
        cout << "The contents of both sequence differ.";
    getchar();
    return 0;
}
//main end
///Program end

/*
output
*/
