/*
Cpp_STL_Reference
program rotate
inline iterator rotate(iterator start, iterator middle, iterator end);
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//main begin
int main()
{

    vector<int> vec1{1,2,3,4,5,6,7,8,9};

    //print old vector
    cout << "Old vector : ";
    for(int i = 0; i < vec1.size(); i++)
        cout << " " << vec1[i];
    cout << "\n";
    //Rotate vector left 3 times
    int rotL = 3;
    //rotate function
    rotate(vec1.begin(), vec1.begin()+rotL, vec1.end());
    //Print new vector
    cout << "New vector after left rotation : ";
    for(int i = 0; i < vec1.size(); i++)
        cout << " " << vec1[i];
    cout << "\n\n";

    vector<int> vec2{1,2,3,4,5,6,7,8,9};

    //print old vector
    cout << "old vector: ";

    for(int i = 0; i < vec2.size(); i++)
        cout << " "<< vec2[i];
    cout << "\n";

    //Print new vector
    cout << "New vector after right rotation: ";;
    for(int i = 0; i < vec2.size(); i++)
        cout << " " << vec2[i];
    cout <<  "\n";
    getchar();
    return 0;
}
//main end
///Program end

/*
output
*/

