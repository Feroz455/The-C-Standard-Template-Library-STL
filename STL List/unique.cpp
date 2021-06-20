/*
Cpp_STL_Reference
LIST
program unique

void unique();
void unique(BinPred pr);
*/
#include<iostream>
#include<algorithm>
#include<list>
using namespace std;
bool compare(double a, double b)
{
    return ((int) a == (int)b) ;
}
//main begin
int main()
{
    list<double> List = {2.55,3.15,4.16,4.16,4.77,12.65,12.65,13.59};

    cout << "List is : ";;

    List.sort();
    for(double i: List)
        cout << i << " ";
    cout << "\n";

    //Unique operation on list with no parameters
    List.unique(compare);
    for(double i: List)
        cout << i << " ";
    cout << "\n";
    getchar();
    return 0;
}
//main end
///Program end

/*
output
*/

