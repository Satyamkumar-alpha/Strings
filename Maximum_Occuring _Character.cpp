
#include <bits/stdc++.h>
using namespace std;

int main() {
    string temp="sdfvkjdndvndcvndfvndfvdv";
    unordered_map<char, int>mpp;
    
    for (int i=0;i<temp.size();i++){
        mpp[temp[i]]++;
    }
    int maxi=-1;
    for(auto x:mpp){
        if(x.second>maxi){
            maxi=x.second;
        }
        cout<<x.first<<" -> "<<x.second<<endl;
    }

// creating a vector to store the which character occurs most of the time :
    vector<char>anslist;
    for(auto x:mpp){
        if(x.second==maxi) anslist.push_back(x.first);
    }
    cout<<"Maximum occuring charcater is:"

// Let's suppose there are more than one character which occured maximum time. So this loop is for that purpose :
    for(int i=0;i<anslist.size();i++){
        cout<<anslist[i]<<" ";
    }

    return 0;
}