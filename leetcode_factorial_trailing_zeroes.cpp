#include<iostream>
using namespace std;

int trailingZeroes(int n) {
    int zero = 0, five=0, two=0;

    while(n>0)
    {
        int local = n;
        while(local%10==0)
        {
            zero += 1;;
            local /= 10;
        }

        if(n%10==5) five += 1;
        if(n%10==2) two += 1;

        cout<<n<<endl;
         n -= 1;
    }

    if(five>two) swap(two, five);

    return zero+five;
}

int main()
{
    trailingZeroes(30);
    return 0;
}
