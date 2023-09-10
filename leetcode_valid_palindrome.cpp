#include<iostream>
using namespace std;

bool isPalindrome(string s) {
    int i=0, j=s.length()-1;

    while(i<j)
    {
        char a = s.at(i), b=s.at(j);

        cout<< "Actual =>" <<a<<" "<<b<<endl;


        if(a>='A' && a<='Z')
        {
            a = a-'A' + 'a';
        }


        if(b>='A' && b<='Z')
        {
            b = b-'A' + 'a';
        }

        cout<<"After converting to lower case => "<<a<<" "<<b<<endl;

        if(a>='a' && a<='z' || a>='0' && a<='9')
        {
            if(b>='a' && b<='z' || b>='0' && b<='9')
            {
                if(a!=b)
                {
                    cout<< "Did not match"<<endl;
                    return false;
                }
                else
                {
                    cout<< "condition matched"<<endl<<endl;
                    i++;
                    j--;
                    continue;
                }
            }
            else
            {
                j--;
                continue;
            }

        }
        else
        {
            i++;
            continue;
        }
    }

    return true;
}

int main()
{
    cout<<isPalindrome("A man, a plan, a canal: Panama");
    return 0;
}
