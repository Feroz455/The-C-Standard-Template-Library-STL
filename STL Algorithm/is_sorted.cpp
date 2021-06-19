/*
Cpp_STL_Reference
program is_sorted
bool is_sorted(iterator start , iterator end);
bool is_sorted(iterator start, iterator end, StrictWeakOrdering cmp)
*/
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
bool ignore_case(char a, char b)
{
    //Converting both character to lowercase if a <= b
    return (tolower(a) <= tolower(b));
}

//Function that checks if string is sorted while ignoring the case
bool  chack_if_sorted(string str)
{
    //Function call to is_sorted with binary predicated ignore_case
    return is_sorted(str.begin(), str.end(), ignore_case);
}
//main begin
int main()
{

    int A[] = { 10,11,15,12};
    //index 0 to 2;
    int range1 = 3;
    //Index 0 to 3
    int range2 = 4;

    //Condition if container is sorted or not in range1
    if(is_sorted(A, A+range1))
        cout << "Sorted in the range: " << range1 <<endl;
    else
        cout << "Not soted in the range: " << range1 << endl;

    //condition if container is sorted or not in range 2
    if(is_sorted(A, A+range2))
        cout << "Sorted in the range: " << range2 <<endl;
    else
        cout << "Not soted in the range: " << range2 << endl;


        /****Using binary predicate********/
        cout << "\n*************************\n";
        //String which is to be checked
        string str = "tOy";
        //Function return true string is sorted
        if(chack_if_sorted(str))
        {
            cout << "Sorted " << endl;
        }
        //Function returns false string not sorted
        else
            cout << "Not sorted" << endl;;


    getchar();
    return 0;
}
//main end
///Program end

/*
output
*/

