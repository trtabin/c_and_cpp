#include<iostream>
#include<map>
#include<set>
using namespace std;

bool wordPattern(string pattern, string s) {
    map<char, string> map;
    set<string> word_set;

    int i=-1,len=s.length();
    string word;

    for(int j=0; j<pattern.length(); j++)
    {
        while(i<len-1)
        {
            i++;
            if(s.at(i)==' ')
            {
                break;
            }
            else
            {
                word = word + s.at(i);
            }
        }


        if(map.find(pattern[j]) == map.end() && word_set.find(word)== word_set.end())
        {
            map[pattern[j]] = word;
            word_set.insert(word);
        }
        else
        {
            if(word != map[pattern[j]]){
                return false;
            }
        }
        word = "";
    }
    return true;
}

int main()
{

    cout<<"Function Output: "<<wordPattern("aaaa", "dog dog dog dog")<<endl;
    return 0;
}
