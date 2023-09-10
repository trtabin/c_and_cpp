#include<iostream>
#include<map>
using namespace std;

bool isAnagram(string s, string t) {
    map<char, int> char_map;
    map<char, int>::iterator it;

    if(s.length() != t.length()){
        return false;
    }

    for(int i=0; i<s.length(); i++)
    {
        if(char_map.find(s.at(i)) ==  char_map.end())
        {
            cout<< s.at(i) <<" Not Found" <<endl;
            char_map[s.at(i)] = 1;
        }
        else
        {
            cout<< s.at(i) <<"  Found" <<endl;
            char_map[s.at(i)] = char_map[s.at(i)] + 1;
            if(char_map[s.at(i)] == 0)
                {
                    char_map.erase(char_map.find(s.at(i)));
                }
        }

        if(char_map.find(t.at(i)) ==  char_map.end())
        {
            cout<< t.at(i) <<" Not Found" <<endl;
            char_map[t.at(i)] = -1;
        }
        else
        {
            cout<< t.at(i) <<"  Found" <<endl;
            char_map[t.at(i)] = char_map[t.at(i)]-1;

            if(char_map[t.at(i)] == 0)
                {
                    char_map.erase(char_map.find(t.at(i)));
                }
        }

        it = char_map.begin();
        cout<<"Iteration " << i+1 <<" : " <<endl;
        while (it != char_map.end()) {
            char chr = it->first;
            int count = it->second;
            cout << chr << " :: " << count << std::endl;
            it++;
        }
        cout<<endl<<endl;


    }

    if(char_map.size()==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    cout << isAnagram("anagram","nagaram") <<endl;
    return 0;
}
