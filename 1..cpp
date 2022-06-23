#include <bits/stdc++.h>
int z,x,c,v,b;
int i; // for loopebistvis
long  minimumi,jami;
std::vector <int> vkt;
int main() {
    std::cin>>z;
// b=vec.size(); ar gamodga
    for( i=1;i<=z;i++){
        std::cin>>x;
if(x==5) {
std::cin>>c;
vkt.push_back(101);
vkt.insert(vkt.begin(),101);
minimumi=std::min(vkt[c+1],std::min(vkt[c],vkt[c-1]));
if (minimumi==vkt[c]) vkt.erase(vkt.begin()+c);
        	else if (minimumi==vkt[c+1]) vkt.erase(vkt.begin()+c+2);
        		else if (minimumi=vkt[c+2]) vkt.erase(vkt.begin()+c+2);
        			vkt.erase(vkt.begin()); vkt.erase(vkt.begin()+vkt.size()-1);
        }
        if(x==2) {
		std::cin>>v; vkt.push_back(v);
		}
        if(x==4) {
		std::cin>>c; vkt.erase(vkt.begin()+c);
		}
        if(x==3) {
		std::cin>>c>>v; vkt.insert(vkt.begin()+c,v);
		}
        if(x==1) {
		std::cin>>v; vkt.insert(vkt.begin(),v);
		} 
    }
    for(i=0;i<vkt.size();i++) {
	jami= jami + vkt[i];
}
    std::cout<<jami;
}