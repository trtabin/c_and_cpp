#include <iostream>
#include <climits>
#include<vector>
#include<cmath>
#include <bits/stdc++.h>
using namespace std;

    bool isHappy(int n) {
        int _sum = 0;
        vector<int> vec;


        while(1){
            while(n>0){
                _sum += pow((n%10),2);
                n /= 10;
            }

            if(_sum==1){
                return true;
            }

            if ( find(vec.begin(), vec.end(), _sum) != vec.end() )
                return false;
            else
                vec.push_back(_sum);

            if(_sum<0){
                return false;
            }

            n = _sum;
            cout<<_sum<<endl;

        }
    }

int main() {
    cout<< isHappy(2);
    return 0;
}
