/*
Cpp_STL_Reference
program  copy
iterator copy(iterator start , iterator end, iterator dest);
*dest   == *start
*(dest+1) == *(start+1);
*(dest+2) ==  *(start+2 ;
......
*(dest+N) == *(start + N);
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//main begin
int main()
{
    vector<int> from_Vector;
    for(int i = 0; i < 10; i++)
        from_Vector.push_back(i);
    vector<int> to_vector(10);
    copy(from_Vector.begin(), from_Vector.end(), to_vector.begin());

    cout << "To vector contains : ";
    for(unsigned int i = 0; i < to_vector.size(); i++)
    {
        cout << to_vector[i] << " ";
    }
    cout << endl;

    cout << "\n\n";
    //Initializing source vector
    vector<int> v1 = {1,5,7,3,8,3};
    //Declaring destination vector
    vector<int> v2(6);
    vector<int> v3(6);

    //using copy() to copy 1st 3  elements
    cout << "V1 = : \n";
    for(int i = 0; i< v1.size(); i++)
    {
        cout << v1[i] << " " ;
    }
    cout << endl;
    copy(v1.begin(), v1.begin()+3, v2.begin());

    // printing new vector
    cout << "The new vector elements entered using copy(): ";
    for(int i = 0; i< v2.size(); i++)
    {
        cout << v2[i] << " " ;
    }
    cout << endl;

    //using copy_n() to copy 4 element
    copy_n(v1.begin(), 4, v3.begin());

    //printing new vector
    cout << "The new vector elements entered using copy_n() : ";
    for(int i = 0; i < v3.size(); i++)
    {
        cout << v3[i] << " ";
    }
    cout << "\n\n";


    //Using copy_if() to copy odd elements

    copy_if(v1.begin(), v1.end(), v2.begin(), ([](int i){return i%2 != 0;}));
    //printing new vector
    cout << "The new vector elements entered using copy_if() : ";

    for(int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
    cout << endl;

    //using copy_backward() to copy 1st 4 elements

    copy_backward(v1.begin(), v1.begin() + 4, v3.begin()+5);
    cout << "The new vector elements entered using copy_Backward(): ";
    for(int i = 0; i < v3.size(); i++)
    {
        cout << v3[i] << " ";
    }


    vector<int> ve1 = {1,5,7,3,8,3};
    vector<int>:: iterator itr;
    vector<int> ve2;
    //using inserter()

    copy(v1.begin(), v1.end(), inserter(ve2, itr));
    cout << "\nThe new vector elements entered using inserter: ";
    for(int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";
    getchar();
    return 0;
}
//main end
///Program end

/*
output
To vector contains : 0 1 2 3 4 5 6 7 8 9


V1 = :
1 5 7 3 8 3
The new vector elements entered using copy(): 1 5 7 0 0 0
The new vector elements entered using copy_n() : 1 5 7 3 0 0

The new vector elements entered using copy_if() : 1 5 7 3 3 0
The new vector elements entered using copy_Backward(): 1 1 5 7 3 0
The new vector elements entered using inserter: 1 5 7 3 3 0

*/
