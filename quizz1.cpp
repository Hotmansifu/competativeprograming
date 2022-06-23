#include <bits/stdc++.h>
std::map <int, int>::iterator iteratori;
long long z, x, c, passuxi;
long long i; // ciklebitvis

int main() {
    std::cin>>z>>x;
 	std::map <long long, int> ruka;
    for (i=1; i<=z; i++) {
        std::cin>>c;
        ruka[c]++;
    }
    while(x--) {
        std::cin>>c;
        passuxi = passuxi + ruka[c]; ruka[c] = 0;
    }
    std::cout<<passuxi;
}