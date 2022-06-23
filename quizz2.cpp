#include <iostream>
using namespace std;
int organmasivi[3][100];
int  masivi1[100], jami[2000000];
int z,maximaluri;
int i, j; //ciklebistvis
int main() {
    cin >> z;
    for (i = 1; i <= 2; i++){
        for (j = 1; j <= z; j++){
            cin >> organmasivi[i][j];}
        }

    for (i = 1; i <= z; i++) {
        if (organmasivi[1][i] > 0 && organmasivi[2][i] > 0) masivi1[i] = masivi1[i - 1] + organmasivi[1][i] + organmasivi[2][i];
        else if (organmasivi[1][i] > organmasivi[2][i]) masivi1[i] = masivi1[i - 1] + organmasivi[1][i];
        else masivi1[i] = masivi1[i - 1] + organmasivi[2][i];
        for ( j = 0; j < i - 1; j++) {
            if (masivi1[i] - masivi1[j] > 0) jami[masivi1[i] - masivi1[j]] = 1;
        }
    }

    for (i = 1; i <= 2000000; i++){
        if (jami[i] == 1) maximaluri = i;
}
    cout<<maximaluri;
}
/*5
-1 3 -2 4 -9
-2 -1 -1 6 -3*/	