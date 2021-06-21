/*
Cpp_STL_Reference
SET
program insert
iterator insert(iterator i, const TYPE& val)
void insert(inpute_iterator start, input_iterator end)
pair<iterator , bool > insert(const TYPE& val);
*/
#include<iostream>
#include<algorithm>
#include<set>
using namespace std;

//main begin
int main()
{
    //insert(elements) function
    set<int> s;
    //Function to insert elements
    //in the set container
    s.insert(1);
    s.insert(4);
    s.insert(2);
    s.insert(5);
    s.insert(3);


    cout << "The elements in set are: ";
    for(auto it = s.begin(); it != s.end(); it++)
        cout << *it << " ";


    set<int> s2;
    //Function to insert one set to another
    //al elements from where 3 is to end is
    //inserted to set2

    s2.insert(s.find(3), s.end());

    cout << "\nThe elements in set2 are : ";
    for(auto it = s2.begin(); it != s2.end(); it++)
        cout << *it << " ";


    cout << "\n\n\n";

   set<int> myset;
   set<int>::iterator it;
   pair< set<int>::iterator,bool> ret;

  // set some initial values:
  for (int i=1; i<=5; ++i) myset.insert(i*10);    // set: 10 20 30 40 50

  ret = myset.insert(20);               // no new element inserted

  if (ret.second==false) it=ret.first;  // "it" now points to element 20

  myset.insert (it,25);                 // max efficiency inserting
  myset.insert (it,24);                 // max efficiency inserting
  myset.insert (it,26);                 // no max efficiency inserting

  int myints[]= {5,10,15};              // 10 already in set, not inserted
  myset.insert (myints,myints+3);

   cout << "myset contains:";
  for (it=myset.begin(); it!=myset.end(); ++it)
     cout << ' ' << *it;
   cout << '\n';

    getchar();
    return 0;
}
//main end
///Program end

/*
output

The elements in set are: 1 2 3 4 5
The elements in set2 are : 3 4 5


myset contains: 5 10 15 20 24 25 26 30 40 50
*/
