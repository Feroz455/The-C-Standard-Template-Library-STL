/*
Cpp_STL_Reference
program
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//main begin
int main()
{
    char one[] = "Bangledesh";
    char two[] = "edh";
    //Using lexicographical compare for checking in "one" is less then two
    if(lexicographical_compare(one, one+10, two, two+3))
    cout << "Bangledesh is lexicographically less the edh";
    else
        cout << "Bangladesg is not lexicographical less then edh";


    getchar();
    return 0;
}
//main end
///Program end

/*
output
*/

