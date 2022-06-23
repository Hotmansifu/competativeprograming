#include <iostream>
long long z, momatrico[3][101], lada;
int i=0,j=0;
int main() {
	std::cin>>z;
	int momaximo = 0;
	for ( i=1; i<=2; i++)
		for ( j = 1; j <= z; j++) {d
		
		std::cin>>momatrico[i][j];
	}
	for (i = 1; i <= z; i++) {
		for (j = i; j <= z; j++) {
			if (momatrico[1][j] > 0 && momatrico[2][j]>0) lada=lada + momatrico[1][j] + momatrico[2][j];
			else if (momatrico[2][j] > momatrico[1][j]) lada=lada+ momatrico[2][j];
			else lada=lada + momatrico[1][j];
			
			
			
			if (lada>momaximo) momaximo = lada;
		}
		lada = 0;
	}
	std::cout << momaximo;
}