#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"\tFrequency of Words\t"<<endl;
    cout<<"Enter the paragraph ending with 'stop'"<<endl;
    string str;
    vector<string> para;
    while(true){
        cin>>str;
        if(str=="stop")
            break;
        para.emplace_back(str);
    }
    map<string, int> freq;
    for(int i=0; i<para.size(); i++){
        if(freq.find(para[i])==freq.end())
            freq[para[i]]=1;
        else
            freq[para[i]]++;
    }
    for(auto i: freq){
        cout<<i.first<<" -> "<<i.second<<endl;
    }
    return 0;
}
