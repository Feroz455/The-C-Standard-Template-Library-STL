/*
Cpp_STL_Reference
program for_each
unaryFunction for_each(iterator start, iterator end, UnaryFunction f)
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
template<typename TYPE>
struct increment: public unary_function<TYPE, void>
{
    void operator()(TYPE &x){ x++;}

};
//Helper function
void printx2(int a)
{
    cout << a * 2 << " ";
}

//Helper function 2
//object type function
//main begin

struct class2
{
    void operator()(int a)
    {
        cout << a * 3 << " ";
    }
}ob1;
int main()
{
    int nums[] = {3,4,2,9,15,267};

    const int N = 6;

    cout << "Before , nums[] is : ";
    for(int i = 0; i < N; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    for_each(nums, nums+N, increment<int>());
    cout << "After nums[] is : ";

    for(int i = 0; i < N; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    cout << "\n********************\n";

    int arr[5] = { 1,5,2,4,3};

    //Printing array using for_each using function
    cout << "Multiple of 2 of elements are : ";
    for_each(arr, arr+5, printx2);
    cout << endl;

    //Initializing vector
    vector<int> arr1 = {4,5,8,3,1};

    cout << "Using vector: " << endl;

    //printing array using for_each
    // using function

    cout << "Multiplying of 2 of element are : ";
    for_each(arr1.begin(), arr1.end(), printx2);
    cout << "\n";
    cout << "\n\n\n*******************\n\n\n";
    //printing array using for_each using object function

    cout << "Multiple of 3 of elements are : ";
    for_each(arr1.begin(), arr1.end(), ob1);
    cout << endl;


    vector<int> vec{ 1, 2, 3, 4, 5 };

    // this increases all the values in the vector by 1;
    for_each(vec.begin(), vec.end(), [](int& a) { a++; });

    // this prints all the values in the vector;
    for_each(vec.begin(), vec.end(),
             [](int a) { cout << a << " " << endl; });
    getchar();
    return 0;
}
//main end
///Program end

/*
output

Before , nums[] is : 3 4 2 9 15 267
After nums[] is : 4 5 3 10 16 268


Process returned 0 (0x0)   execution time : 1.625 s
Press any key to continue.
*/

