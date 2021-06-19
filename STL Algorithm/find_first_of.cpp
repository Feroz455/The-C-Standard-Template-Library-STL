/*
Cpp_STL_Reference
program find_first_of
iterator find_first_of(iterator start, iterator end, iterator find_start, iterator find_end);
iterator find_first_of(iterator start, iterator end, iterator find_start, iterator find_end, BinPred bp);

*/
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
bool Pred(int a, int b)
{
    if(a % b == 0)
    {
        return 1;
    }
    else
        return 0;
}
//main begin
int main()
{
    int nums[] = {0,1,2,3,4,5,6,7,8,9,10};

    int *result;
    int start = 0;
    int end = 10;

    int targets[] = {10,9,4,7};

    result = find_first_of(nums + start, nums + end, targets+0, targets+2);

    if(*result == nums[end])
    {
        cout << "Did not find any of {9,4,7} " << endl;
    }
    else
        cout << "Found a matching target : " << *result << endl;

    cout << "\n/**************/\n";

    vector<int> v = {1,3,3,3,10,1,3,3,7,7,8};
    //Defining second container
    vector<int>v1 =  {1,3,10};

    vector<int>::iterator ip;

    //Using find_first_of

    ip = find_first_of(v.begin(), v.end(), v1.begin(), v1.end());

    //Displaying the first common element found
    cout << *ip << "\n";

    //Finding the second common element
    ip = find_first_of(ip+1, v.end(), v1.begin(), v1.end());

    //Displaying the second common element found
    cout << *ip << "\n";

    //Defining first container
    vector<int> vv = {1,5,7,11,13,15,30,30,7};
    //Defining second container
    vector<int> vv1 = {2,3,4};
    //Using find_first_of
    ip = find_first_of(vv.begin(),vv.end(), vv1.begin(), vv1.end(), Pred);

    //Displaying the first element satisfying Pred
    cout << *ip << "\n";


    cout << "\n\n/*********************/\n";
    string  s1 = "You are reading find_first_of";
    //Defining second container containing list of vowels
    string
     s2 = { 'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'U', 'u'};

     //Using find_first_of to find first occurrence of a vowel
     auto p = find_first_of(s1.begin(), s1.end(), s2.begin(), s2.end());
     //Displaying the first vowel found

     cout << "First vowel found at index " << (p - s1.begin()) << endl;


    getchar();
    return 0;
}
//main end
///Program end

/*
output
*/

