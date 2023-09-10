#include<iostream>
using namespace std;

string addBinary(string a, string b) {
    string ans = "", one="1", zero="0";
    int carry=0;

    if(b.length()>a.length())
    {
        swap(a,b);
    }

    while(b.length() < a.length())
    {
        cout << "condition true"<<endl;
        b=zero+b;
    }

    cout<<a<<endl;
    cout<<b<<endl;


    for(int i=b.length()-1; i>=0; i--)
    {
        if(carry == 0)
        {
            if(a.at(i)=='1' && b.at(i)=='1')
            {
                carry = 1;
                ans = zero + ans;

            }
            else if(a.at(i)=='0' && b.at(i)=='0')
            {
                carry = 0;
                ans = zero + ans;

            }
            else
            {
                carry = 0;
                ans = one + ans;

            }

        }
        else
        {
            if(a.at(i)=='1' && b.at(i)=='1')
            {
                carry = 1;
                ans = one + ans;

            }
            else if(a.at(i)=='0' && b.at(i)=='0')
            {
                carry = 0;
                ans = one + ans;

            }
            else
            {
                carry = 1;
                ans = zero + ans;
            }
        }
    }


    if(carry==1)
    {
        ans = one + ans;
    }

    return ans;
}

int main()
{
    string a="110010", b="10111";
    cout<<"a " <<a<<endl;
    cout<<"b "<<b<<endl;
    cout<<addBinary(a,b)<<endl;


    return 0;

}



