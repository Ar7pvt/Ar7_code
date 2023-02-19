//cpplist.com for extra
#include <iostream>
#include <list>
using namespace std;

template <class T>
void display(list<T> &it)
{
    list<int>::iterator iter;
    for (iter = it.begin(); iter != it.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout<<endl;
}
int main()
{
   
    list<int> lst1;//empty list of zero length
    lst1.push_back(4);
    lst1.push_back(5);
    lst1.push_back(8);
    lst1.push_back(78);
    lst1.push_back(50);
   // lst1.pop_back();
   // lst1.remove(7);
    display(lst1);
    //lst1.sort();
    //display(lst1);
   
    list<int> lst2(4);//empty list of 4 length
    list<int>::iterator iter=lst2.begin();
    
    *iter=34;
    iter++;
    *iter=9;
    iter++;
    *iter=74;
    iter++;
    *iter=3;
    iter++;

    display(lst2);
   // lst2.sort();
    //display(lst2);

    lst1.merge(lst2);
    display(lst1);
    
    lst1.reverse();
    display(lst1);

}