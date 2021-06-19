/*
Cpp_STL_Reference
program random_shuffle
void random_shuffle(iterator start, iterator end);
void random_shuffle(iterator start, iterator end, RandomNumberGenerator &rnd);

*/
#include<iostream>
#include<algorithm>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int randomfunc(int j)
{
    return rand()%j;
}
//main begin
int main()
{
    srand(unsigned(time(0)));
    vector<int> arr;

    //set some values

    for(int j = 1; j < 10; j++)
        arr.push_back(j);

    //Using build-in random generator
    random_shuffle(arr.begin(), arr.end());

    //Using randomfunc
    random_shuffle(arr.begin(), arr.end(), randomfunc);


    //print out contents
    cout << "arr contains : ";
    for(auto i = arr.begin(); i != arr.end(); ++i)
        cout << " " << *i;



    cout << "\n*******************\n";

    array<int, 5> s{1,2,3,4,5};

    //To obtain a time based seed
    unsigned seed = 0;
    //Use of shuffle
    shuffle(s.begin(), s.end(), default_random_engine(seed));

    cout << "Shuffled elements are: ";
    for(int &i : s)
        cout << " "<< i;
    getchar();
    return 0;
}
//main end
///Program end

/*
output
*/

