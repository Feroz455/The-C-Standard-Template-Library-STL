/*
Cpp_STL_Reference
program find_end

iterator find_end(iterator start, iterator end, iterator seq_start, iterator seq_end)
iterator find_end(iterator start, iterator end, iterator seq_start, iterator seq_end, BinPred bp);

*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool Pred(int a, int b)
{
    if(a%b != 0)
    {
        return 1;
    }
    else
        return 0;
}

bool Pred1(int a, int b)
{
    if(a % b == 0)
        return 1;
    else
        return 0;
}
//main begin
int main()
{
    int nums[] = {1,2,3,4,1,2,3,4,3,2,3,4};
    int *result;
    int start = 0;
    int end = 11;

    int target1[] = {1,2,3};

    result = find_end(nums + start, nums + end, target1 + 0, target1 + 2);
    if(*result == nums[end])
    {
        cout << "Did not find any subsequence matching {1,2,3} " << endl;
    }
    else
        cout << "The last matching subsequence is at : " << *result << endl;
    int target2[] = {3,2,3};
    result = find_end(nums+start, nums+end, target2+0, target2 + 2);
    if(*result == nums[end])
    {
        cout << "Did not find any subsequence matching {3,2,3} " << endl;
    }
    else
        cout << "The last matching subsequence is at : " << *result << endl;

   vector<int> v = {1,3,10,3,10,1,3,3,10,7,8,1,3,10};
   // defining second container
   vector<int> v1 = {1,3,10};
   vector<int> ::iterator ip;
   //Using find_end
   ip = find_end(v.begin(), v.end(), v1.begin(), v1.end());

   //Displaying the index where the last common occurrence begins
   cout << (ip - v.begin()) << "\n";
   cout << "\n/****************/\n";

   vector<int> vv = {1,5,7,11,13,15,30,30,7};

   //Defining second container
   vector<int> vv1 = {13,15};

   ip = find_end(vv.begin(), vv.end(), vv1.begin(), vv1.end());
   //Displaying the index where the last common occurrence begins
   cout << (ip - vv.begin()) << "\n";

   //defining a vector
   vector<int> tor = {1,3,4,5,6,7,8,10};
   //Declaring a sub-sequence
   vector<int> tor2 = {2};

   //Using find_end to find the last occurrence of an odd number
   vector<int>::iterator pp;
   pp = find_end(tor.begin(), tor.end(), tor2.begin(), tor2.end(), Pred);
   //Displaying the index where the last odd number occurred
   cout << "Last odd no . occurs at " << (pp - tor.begin());


   //Using find_end to find the last occurrence of an even number
   pp = find_end(tor.begin(), tor.end(), tor2.begin(), tor2.end(), Pred1);
   //Displaying the index where the last even number occurred
   cout << "\nLast even no . occurs at " << (pp - tor.begin());


    getchar();
    return 0;
}
//main end
///Program end

/*
output
The last matching subsequence is at : 1
The last matching subsequence is at : 3
11

/****************
4
Last odd no . occurs at 5
Last even no . occurs at 7

Process returned 0 (0x0)   execution time : 1.609 s
Press any key to continue.
*/

