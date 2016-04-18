////#include "testlib.h"
//
//#include <iostream>
//#include <sstream>
//#include <fstream>
//#include <iomanip>
//#include <string>
//#include <cstdlib>
//#include <cstdio>
//#include <cstring>
//#include <cmath>
//#include <ctime>
//#include <climits>
//#include <cassert>
//#include <vector>
//#include <queue>
//#include <stack>
//#include <deque>
//#include <set>
//#include <map>
//#include <bitset>
//#include <utility>
//#include <algorithm>
//
////using namespace System;
//using namespace std;
//
//
//int a[100001];
//set<pair<int, int> > edges;
//vector<vector<int> > g;
//int next(int min, int max) {
//	return rand() % (max - min + 1) + min;
//}
//void genGraph(int n, int m) {
//	g.assign(n, vector<int>());
//	
//	for (int i = 0; i < n; i++) {
//		a[i] = i;
//	}
//	//shuffle(a, a + n);
//
//	for (int i = 1; i < n; i++) {
//		int prev = next(1, i) - 1;
//		g[a[i]].push_back(a[prev]);
//		g[a[prev]].push_back(a[i]);
//		edges.insert(make_pair(a[prev], a[i]));
//		edges.insert(make_pair(a[i], a[prev]));
//	}
//
//	if (m < n * 1ll * (n - 1) / 4) {
//		for (int i = n - 1; i < m; i++) {
//			while (true) {
//				int x = next(1, n);
//				int y = next(1, n - 1);
//				if (y >= x) y++;
//				x--;
//				y--;
//				if (edges.count(make_pair(x, y)) == 0) {
//					edges.insert(make_pair(x, y));
//					edges.insert(make_pair(y, x));
//					g[x].push_back(y);
//					g[y].push_back(x);
//					break;
//				}
//			}
//		}
//	}
//	else {
//		vector<pair<int, int> > v;
//		for (int i = 0; i < n; i++) {
//			for (int j = i + 1; j < n; j++) {
//				if (edges.count(make_pair(i, j)) == 0) {
//					v.push_back(make_pair(i, j));
//				}
//			}
//		}
//		//shuffle(v.begin(), v.end());
//		for (int i = 0; i < m - n + 1; i++) {
//			g[v[i].first].push_back(v[i].second);
//			g[v[i].second].push_back(v[i].first);
//		}
//	}
//
//
//}
//
//void printGraph(int n) {
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < g[i].size(); j++) {
//			if (g[i][j] > i) {
//				cout << (i + 1) << " " << (g[i][j] + 1) << endl;
//			}
//		}
//	}
//}
//
//int main()
//{
//	//registerGen(argc, argv, 0);
//	int start = atoi("1");
//	int finish = atoi("10");
//	int minN = atoi("1");
//	int maxN = atoi("10");
//	int minP = atoi("1");
//	int maxP = atoi("1");
//	int maxTime = atoi("100");
//	double edgeFill = atof("1");
//	//Random^ randObj = gcnew Random(seed);
//
//	for (int test = start; test <= finish; test++) {
//		//startTest(test);
//		int n = next(minN, maxN);
//		long long tmp = n - 1;
//		long long x = ((long long)(n - 1)) * (n - 2) / 2;
//		tmp += edgeFill * x;
//		if (tmp > 200000) {
//			tmp = 200000;
//		}
//		int m = (int)tmp;
//		int p = next(minP, maxP);
//
//		cout << n << " " << m << " " << p << endl;
//		genGraph(n, m);
//		vector<int> t(n - 1);
//		for (int i = 0; i < n - 1; i++) {
//			t[i] = next(1, maxTime);
//		}
//
//		vector<int> game(p);
//		for (int i = 0; i < p; i++) {
//			game[i] = next(1, maxTime);
//		}
//
//		for (int i = 0; i < t.size(); i++) {
//			cout << t[i];
//			if (i != t.size() - 1) cout << " ";
//			else cout << endl;
//		}
//		for (int i = 0; i < game.size(); i++) {
//			cout << game[i];
//			if (i != game.size() - 1) cout << " ";
//			else cout << endl;
//		}
//
//		printGraph(n);
//	}
//	system("pause");
//	return 0;
//}