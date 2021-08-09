#include <iostream>

using namespace std;

int T = 0;

void set_input(int &N, int &a, int &b) {
	scanf("%d %d %d", &N, &a, &b);
	return;
}

void solve(int &N, int &a, int &b, int &mi, int &ma) {
	mi = 0;
	ma = 0;

	mi = a + b - N;
	if (mi < 0) mi = 0;
	if (a > b) ma = b;
	else ma = a;
	
	return;
}

int main(void) {
	scanf("%d", &T);
	int N = 0, a = 0, b = 0;
	int min_v = 0, max_v = 0;
	for (int tc = 1; tc <= T; tc++) {
		set_input(N, a, b);
		solve(N, a, b, min_v, max_v);
		printf("#%d %d %d\n", tc, max_v, min_v);
	}
	return 0;
}