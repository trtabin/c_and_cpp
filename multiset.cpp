#include<iostream>
#include<set>
using namespace std;

int main()
{
    multiset<char> char_container;
    multiset<char>::iterator it;

    char_container.insert('a');
    char_container.insert('a');
    char_container.insert('a');

    if(char_container.find('a') != char_container.end())
    {
        char_container.erase(char_container.find('a'));
    }

    if(char_container.find('a') != char_container.end())
    {
        char_container.erase(char_container.find('a'));
    }


    for(it=char_container.begin(); it!=char_container.end(); it++)
    {
        cout << *it <<endl;
    }

    string str ("Test String");

    for(unsigned i=0; i<str.length(); i++)
    {
        cout << str.at(i) <<endl;
    }

    return 0;
}

