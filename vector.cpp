#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums1, nums2, result;
    int m=0,n=3;

    nums1.push_back(1);
    nums1.push_back(2);
    nums1.push_back(3);
    nums1.push_back(0);
    nums1.push_back(0);

    nums2.push_back(2);
    nums2.push_back(5);
    nums2.push_back(6);


    if(find(nums1.begin(), nums1.end(), 1) == nums1.end())
    {
        cout<<"Not Found"<<endl;
    }
    else
    {
        cout<<"Found"<<endl;
    }

    int i = m-1;
    int j = n-1;
    int k = m+n-1;

    while(j>=0){
        if(i>=0 && nums1[i]>nums2[j]){
            nums1[k--] = nums1[i--];
        }
        else{
            nums1[k--] = nums2[j--];
        }
    }






    vector<int>::iterator result_itr = nums1.begin();
    cout<<"Output Vector"<<endl;
    for(;result_itr!=nums1.end();result_itr++){
        cout<<*result_itr<<endl;
    }

    return 0;
}
