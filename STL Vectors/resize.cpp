/*
Cpp_STL_Reference
VECTOR
program resize
void resize(size_type num, const TYPE & val = TYPE());
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//main begin
int main()
{
    vector<int> vec;
    //5 elements are inserted in vector
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    cout << "Contents of vector before resizing: " << endl;

    //Displaying the contents of the vector before resizing
    for(int i = 0; i < vec.size(); i++)
        cout << vec[i] << " ";
    cout << endl;

    //vector is resized
    vec.resize(4);

    cout << "Contents of vector after resizing: "<< endl;

    //displaying the contents of the vector after resizing
    for(int i = 0; i < vec.size(); i++)
        cout << vec[i] << " ";

    getchar();
    return 0;
}
//main end
///Program end

/*
output
Contents of vector before resizing:
1 2 3 4 5
Contents of vector after resizing:
1 2 3 4

Process returned 0 (0x0)   execution time : 1.422 s
Press any key to continue.
*/

