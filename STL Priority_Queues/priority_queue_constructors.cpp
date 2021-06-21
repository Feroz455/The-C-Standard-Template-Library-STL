/*
Cpp_STL_Reference
PRIORITY QUEUES
program priority Queues constructors

priority_queues(const Compare& cmp = Compare(), const Container& C = Container());
priority_queues(input_iterator start, input_iterator end, const Compare& cmp = Compare(), const Container& C = Container());
*/
#include<iostream>
#include<algorithm>
#include<queue>
#define ROW 5
#define COL 2
using namespace std;
struct Person
{
    int age;
    float height;
    //this will used to initialize the variables of the structure
    Person(int age, float height):
        age(age), height(height)
        {

        }
};

//this is an structure which implements the operator overloading
struct CompareHeight
{
    bool operator()(Person const &p1, Person const& p2)
    {
        //Return "true" if "p1" is ordered before "p2" for example
        return p1.height < p2.height;
    }
};
//main begin
int main()
{
    priority_queue<Person, vector<Person>, CompareHeight> Q;
    //When we use priority_queue with structure
    //then we need this kind of syntax where
    //CompareHeight is the function or comparison function
    float arr[ROW][COL] = { {30,5.5}, {25,5}, {20,6}, {33,6.1}, {23,5.6}};

    for(int i = 0; i < ROW; ++i)
    {
        Q.push(Person(arr[i][0], arr[i][1]));
        //insert an object in priority_queue by using the person structure constructor

    }


    while(!Q.empty())
    {
        Person p = Q.top();
        Q.pop();
        cout << p.age << " " << p.height << "\n";
    }
    getchar();
    return 0;
}
//main end
///Program end

/*
output
*/
