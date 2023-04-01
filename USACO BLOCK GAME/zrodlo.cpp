#include <iostream>
#include<vector>
#include<math.h>
#include<algorithm>
#include <fstream>
using namespace std;
int main() {
	ifstream fin("blocks.in");
	ofstream fout("blocks.out");
	int x;
	fin >> x;
	int tab[100] = {};
	for (int i = 0; i < x; i++) {
		string a, b;
		fin >> a>>b;
		for (int g = a.size(); g >=0; g--) {
			for (int h= b.size(); h >=0; h--) {
				if (a[g] == b[h]) {
					tab[a[g] - 97]++;
					a.erase(g, 1);
					b.erase(h, 1);
				}
			}
		}
		for (int g = 0; g < a.size(); g++) {
			tab[a[g] - 97]++;
		}
		for (int g = 0; g < b.size(); g++) {
			tab[b[g] - 97]++;
		}
	}
	for (int i = 0; i < 26; i++) {
		fout << tab[i]<<"\n";
	}
}