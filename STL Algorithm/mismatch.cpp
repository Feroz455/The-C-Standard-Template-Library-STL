/*
Cpp_STL_Reference
program pair<iterator1, iterator2> mismatch(iterator start1, iterator end1, iterator start2);
program pair<iterator1, iterator2> mismatch(iterator start1, iterator end1, iterator start2, BinPred p);
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool compare(int a, int b)
{
    return (a>b);
}
//main begin
int main()
{
    vector<int> v1 = { 1,10,15,20};
    vector<int> v2 = {1,10,25,30,45};
    vector<int> v3 = {1,10,15,20};
    vector<int> v4 = {1,10,15,20,24};


    //Declaring pointer pair
    pair<vector<int>::iterator, vector<int>::iterator> mispair;

    //Using mismatch() to search for 1st mismatch
    mispair = mismatch(v1.begin(), v1.end(), v2.begin());


    //Printing the mismatch pair
    //1st mismatch at 15 and 25

    cout << "The 1st mismatch element of 1st container : ";
    cout << *mispair.first << endl;

    cout << "The 1st mismatch element of 2nd container : ";
    cout << *mispair.second << endl;

    //Using mismatch() to search for 1st mismatch

    mispair = mismatch(v3.begin(), v3.end(), v4.begin());


    //Printing the mismatch pair
    //no mismatch
    //points to position after last 0 and corresponding 24

    cout << "The returned value from 1st container is : ";
    cout << *mispair.first << endl;

    cout << "The returned value from 2nd container is : ";
    cout << *mispair.second << endl;

    /**********mismatch(start_iter1, end_iter1, start_iter2, comparator)**************/

    v1 = {23, 13, 15, 20};
    v2 = {1,10,25,30,45};
    v3 = {12,100,152,204};
    v4 = {1,10,15,20,24};

    //using mismatch() to search for 1st mismatch
    mispair = mismatch(v1.begin(), v1.end(), v2.begin(), compare);

    //Printing the mismatch pair
    //1st mismatch at 15 and 25
    //15 is 1st element less than 2nd at same position
    cout << "The 1st mismatch element of 1st container: ";
    cout << *mispair.first<< endl;

    //using mismatch() to search for 1st mismatch
    mispair = mismatch(v3.begin(), v3.end(), v4.begin(), compare);

    //Printing the mismatch pair
    //no mismatch
    //all elements in 1st container are greater than 2nd
    //points to position after last 0 and corresponding 24

    cout << "The returned value from 1st container is : ";
    cout << *mispair.first << endl;

    cout << "The returned value from 2nd container is : ";
    cout << *mispair.second << endl;

    getchar();
    return 0;
}
//main end
///Program end

/*
output

The 1st mismatch element of 1st container : 15
The 1st mismatch element of 2nd container : 25
The returned value from 1st container is : 0
The returned value from 2nd container is : 24
The 1st mismatch element of 1st container: 15
The returned value from 1st container is : 0
The returned value from 2nd container is : 24
*/

