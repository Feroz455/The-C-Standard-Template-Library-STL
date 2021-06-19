/*
Cpp_STL_Reference
program count
size_t count(iterator start , iterator end, const TYPE &val);
count function returns the number of element between start and that match val
*/
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

//main begin
int main()
{
    vector<int> v;
    for(int i = 0; i < 10; i++)
    {
        v.push_back(i);

    }
    int target_Value = 3;

    int num_items = count(v.begin(), v.end(), target_Value);
    cout << "V contains " << num_items << " items maching " << target_Value << endl;
    //counting occurrences in an array
    int array[] = {3,2,1,3,3,5,3};
    int n = sizeof(array) / sizeof(array[0]);
    cout << "Number of times 3 appears: "
         << count(array, array+n, 3);
    cout << "\n\n";
    //Counting occurrences in a vector
    vector<int> vect{3,2,1,3,3,5,3};
    cout << "Number of items 3 appears : "
        << count(vect.begin(), vect.end(), 3);

    //counting occurrence in a string
    string str = "Bangladesh";
    cout << "Number of times 'a' appears: "
        << count(str.begin(), str.end(), 'a');
        cout << "\n\n\n";
    getchar();
    return 0;
}
//main end
///Program end

/*
output
V contains 1 items maching 3
Number of times 3 appears: 4

Number of items 3 appears : 4Number of times 'a' appears: 2




Process returned 0 (0x0)   execution time : 4.311 s
Press any key to continue.
*/
