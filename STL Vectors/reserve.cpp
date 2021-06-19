/*
Cpp_STL_Reference
VECTOR
program
*/
#include <chrono>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std::chrono;
using namespace std;

//main begin
int main()
{
    // No of charactes
    int N = (int)1e6;

    vector<int> v1, v2;

    // Reserve space in v2
    v2.reserve(N);

    // Start filling up elements in v1
    // To measure execution time in C++, refer below
    // https://www.geeksforgeeks.org/measure-execution-time-function-cpp/

    auto start = high_resolution_clock::now();
    for (int i = 0; i < N; ++i)
        v1.push_back(i);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "Method I took " << duration.count() << " microseconds\n";

    // Start filling up elements in v2
    start = high_resolution_clock::now();
    for (int i = 0; i < N; ++i)
        v2.push_back(i);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);

    cout << "Method II took " << duration.count()
         << " microseconds \n";
    getchar();
    return 0;
}
//main end
///Program end

/*
output

Method I took 15623 microseconds
Method II took 15624 microseconds

*/

