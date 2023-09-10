#include<iostream>
using namespace std;

int main()
{

    string sentence ("Test String adfa"), word;
    int i=-1, len = sentence.length();

    while(i<len-1){
        i++;
        if(sentence.at(i)==' '){
            cout<<word<<endl;
            word = "";
        }
        else{
            word = word + (sentence.at(i));
        }
    }


    return 0;
}
