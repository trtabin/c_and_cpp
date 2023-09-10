#include<iostream>
#include<set>
using namespace std;

bool canConstruct(string ransomNote, string magazine) {
    multiset<char> char_set;

        for(unsigned i=0; i<magazine.size(); i++)
        {
            char_set.insert(magazine.at(i));
        }

        for(unsigned i=0; i<ransomNote.size(); i++)
        {
            if(char_set.find(ransomNote.at(i))== char_set.end())
            {
                return false;
            }
            else
            {
                char_set.erase(char_set.find(ransomNote.at(i)));
            }
        }

        return true;
    }


int main()
{
    cout << canConstruct("aab","ababa");

    return 0;
}
