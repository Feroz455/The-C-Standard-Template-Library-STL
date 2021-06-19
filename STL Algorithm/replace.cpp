/*
Cpp_STL_Reference
Program replace
void replace(iterator start, iterator end, const TYPE & old_value,cosnt TYPE& new_value);

*/
#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

//main begin
int main()
{
    int arr[] = { 10,20,30,30,20,10,10,20};

    int n = sizeof(arr) / sizeof(arr[0]);

    //variable containing the old and new values
    int old_val = 20, new_val = 99;

    //Pint old array
    cout << "Original Array: ";
    for(int i = 0; i < n; i++)
        cout << " " << arr[i];
        cout << "\n";

    //Function used to replace the values
        replace(arr, arr+n, old_val, new_val);
        //new array after using replace
        cout << "New array: ";
        for(int i = 0; i < n; i++)
            cout << " " << arr[i];
        cout << "\n";


    getchar();
    return 0;
}
//main end
///Program end

/*
output
*/

