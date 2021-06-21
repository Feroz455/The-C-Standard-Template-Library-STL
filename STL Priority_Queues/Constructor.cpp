//Constructing priority queues
#include<iostream>
#include<queue>
#include<vector>
#include<functional>
using namespace std;
class mycomparison
{
    bool reverse;
public:
    mycomparison(const bool& revparam = false)
    {
        reverse = revparam;
    }
    bool operator()(const int& Lhs, const int& Rhs) const
    {
        if(reverse)
            return(Lhs > Rhs);
        else
            return(Lhs < Rhs);
    }
};
int main()
{
    int myints[] = {10,60,50,20};

    priority_queue<int>first;
    priority_queue<int>second(myints, myints+4);

    priority_queue<int, vector<int>, greater<int> > third(myints, myints+4);

    //using mycomparison
    typedef priority_queue<int , vector<int>, mycomparison> myqp_type;

    mypq_type fourth; // less then comparison
    myqp_type fifth(mycomparison(true)); // greater-then comparison
    return 0;
}
