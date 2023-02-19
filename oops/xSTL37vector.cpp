//cppvector.com for extra
#include <iostream>
#include <vector>
using namespace std;

/*
void display(vector<int> &v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
       // cout<<v.at(i)<<" ";//use can use this also1
    }
}
*/
// display using template
template <class T>
void display(vector<T> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        // cout<<v.at(i)<<" ";//use can use this also1
    }
}

int main()
{
    /*
    vector<int> vec1;//zero element vector
    int Element, size;
    cout << "Enter the value of size" << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element ";
        cin >> Element;
        vec1.push_back(Element);
    }
    // vec1.pop_back();//use to popup the element
    display(vec1);
    vector<int>::iterator iter = vec1.begin();
    vec1.insert(iter + 2, 3, 45);
    //       position,no of times,element to insert
    cout << endl;
    display(vec1);
    */

   /*
    vector<char> vec2(4);//4 element vector
        vec2.push_back('a');
        vec2.push_back('l');
        display(vec2);
        cout<<endl;
    vector<char> vec3(vec2);
    //       display vec2 element
        display(vec3);
    */

    vector<int> vec4(3,45);
    //            (no of times,element)
    display(vec4);
    cout<<endl<<vec4.size();
}