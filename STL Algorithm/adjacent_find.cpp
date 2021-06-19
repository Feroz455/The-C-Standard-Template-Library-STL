/*
Cpp_STL_Reference
program Adjacent_find

*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//main begin
int main()
{
    //iterator adjacent_find(iterator start, iterator end);
    //iterator adjacent_find(iterator start, iterator end, BinPred pr);
    vector<int> v1;
    for(int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    //add a duplicate 7 into v1
    if(i == 7)
        v1.push_back(i);
    }
    vector<int> :: iterator result;
    result = adjacent_find(v1.begin(), v1.end());
    if(result == v1.end())
    {
        cout << "Did not find adjacent elements in v1 " << endl;
    }
    else
        cout << "Fount matching adjacent elements starting at " << *result << endl;


        //Sorted array with a repeated element
        int A[] = {10, 13,16,16,18};
        //size of the array
        int n = sizeof(A)/ sizeof(A[0]);
        //Iterator pointer which points to the address of the repeted element
        int *itt = std::adjacent_find(A,A+n);
        //Printing the result

        cout << *itt << endl;


        vector<int> vec{0,1,2,5,40,40,41,41,5};
        //index 0 to 4
        int renge1 = 5;
        // Index 0 to 8
        int renge2 = 9;

        vector<int> :: iterator it;
        // Iterating from 0 to renge1
        //till we get a deceasing element
        it = adjacent_find(vec.begin(), vec.begin()+renge1, greater<int>());


        if(it == vec.begin()+renge1)
        cout << "Sorted in the range : " << renge1 << endl;
        else
            cout << "Not sorted in the range: " << renge1 << endl;

        //Iterating from 0 to range2
        //till we get a decreasing element
        it = std::adjacent_find(vec.begin(), vec.begin()+renge2, greater<int>());
        if(it == vec.begin()+renge2)
        {
            cout << "Sorted in the range " << renge2 << endl;

        }
        else
                   cout << "Not sorted in the range: " << renge2 << endl;
    getchar();
    return 0;
}
//main end
///Program end

/*
output
Fount matching adjacent elements starting at 7
16
Sorted in the range : 5
Not sorted in the range: 9

*/

