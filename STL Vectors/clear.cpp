/*
Cpp_STL_Reference
VECTOR
program clear();
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//main begin
int main()
{
    vector<int> v;
    v.assign(7, 100);
    cout << "size of first: " << int(v.size()) << "\n";

    cout << "Elements are \n";
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << "\n";



    vector<int> v1;
    int a[] = {1,2,3};
    //assign first 2 values
    v1.assign(a, a+2);

    cout << "Elements of vector1 are \n";

    for(int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";

    vector<int> v2;
    //assign first 3 values
    v2.assign(a, a+3);

    cout << "\nElements of vector2 are\n";

    for(int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";
        cout << "\n\n";
    /******************/
    v1.clear();
    for(int i = 0; i < 10; i++)
        v1.push_back(i);

    v2.clear();
    v2.assign(v1.begin(), v1.end());

    for(int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
    cout << endl;
    getchar();
    return 0;
}
//main end
///Program end

/*
output
*/

