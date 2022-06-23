#include <bits/stdc++.h>
using namespace std;
int i,j;//loopebistvis
int rankingi[100001],jami[1000001];
int z,x,c,v;
vector <int> vkt[1000000];
int main () {
    cin>>z>>x;
    for(int i=1;i<=z;i++) {
	cin>>rankingi[i];
}
    for(int i=1;i<=x;i++){
        cin>>c>>v;
        vkt[v].push_back(c);
        vkt[c].push_back(v);
    }
    for(int i=1;i<=z;i++){
        for(int j=0;j<vkt[i].size();j++){
            jami[i]= jami[i] + rankingi[vkt[i][j]];
        }
        jami[i]+=rankingi[i];
    }
    reverse(jami+1,jami+z+1);
    sort(jami+1,jami+z+);
    for(int i=z;i>=1;i--) {
	cout<<jami[i];
	cout<<endl;
	}
}