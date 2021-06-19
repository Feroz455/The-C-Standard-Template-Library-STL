/*
Cpp_STL_Reference
program fill
void fill(iterator start, iterator end, const TYPE & val)
*/
#include<iostream>
#include<algorithm>
#include<vector>
#include<list>
using namespace std;

//main begin
int main()
{
    vector<int> v1;
    for(int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }
    cout << "Before , v1 is : ";
    for(int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;

    fill(v1.begin(), v1.end() , -1);
    cout << "After , v1 is : ";
    for(int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;

    vector<int> vect(8);

    //calling fill to initialize values in the range to 4

    fill(vect.begin() + 2, vect.end()- 1, 4);
    for(int i = 0; i < vect.size(); i++)
    {
        cout << vect[i] << " ";
    }
    cout << "\n\n\n";
    int arr[10];
    //calling fill to initialize values in the range 4
    fill(arr, arr+10, 9);
    for(int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\n/******************/\n";
    list<int> m1 = {10, 20, 30};
    fill(m1.begin(), m1.end(), 5);
    for(int x : m1)
        cout << x << " ";
    getchar();
    return 0;
}
//main end
///Program end

/*
output
Before , v1 is : 0 1 2 3 4 5 6 7 8 9
After , v1 is : -1 -1 -1 -1 -1 -1 -1 -1 -1 -1
0 0 4 4 4 4 4 0


9 9 9 9 9 9 9 9 9 9
/******************
5 5 5
*/

