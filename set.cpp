#include<iostream>
#include<set>
#include <iterator>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    multiset<int> my_set;
    multiset<int>::iterator itr;

    my_set.insert(30);
    my_set.insert(10);
    my_set.insert(20);

    itr=my_set.begin();
    for(itr; itr != my_set.end(); itr++){
        cout<<*itr<<endl;
    }

    cout<<*itr<<endl;

    if(my_set.find(10) != my_set.end()){
        cout<< "Found 10" <<endl;

        my_set.erase(my_set.find(10));
    }

    cout<<my_set.size()<<endl;

    cout<<*(my_set.rbegin())<<endl;
}
