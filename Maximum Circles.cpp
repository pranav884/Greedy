#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool compare( pair<int,int> p1, pair<int,int> p2)
{
    return p1.second<p2.second;
}
int main()
{
    int t,n,s,e;
    vector<pair<int,int>> vcr,vse;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>s>>e;
            vcr.push_back(make_pair(s,e));
        }
        for(int i=0;i<n;i++)
            vse.push_back(make_pair(vcr[i].first-vcr[i].second,vcr[i].first+vcr[i].second));
        sort(vse.begin(),vse.end(),compare);
        int res=0;
        int fin=vse[0].second;
        for(int i=1;i<n;i++)
            if(vse[i].first>=fin)
                fin=vse[i].second;
            else
                res++;
        cout<<res<<endl;
    return 0;
}