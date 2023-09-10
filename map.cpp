#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<char, int> char_map;

    char_map['c'] = 30;
    char_map['b'] = 10;

    if(char_map.find('b') != char_map.end())
    {
        cout<< "b found" <<endl;
    }

    char_map.erase(char_map.find('b'));
    cout<<char_map['c']<<endl;

    return 0;
}
