#include <iostream>
#include <vector>

using namespace std;

void solve(vector<int>& gains, int& answer) {
	float ave = 0;
	int sum = 0;
	for (int i = 0; i < gains.size(); i++) {
		sum += gains[i];
	}
	ave = (float)sum / (float)gains.size();
	for (int i = 0; i < gains.size(); i++) {
		if (ave >= (float)gains[i]) answer++;
	}
	return;
}

int main(void) {
	int T = 0;
	scanf("%d", &T);
	int tc = 1;
	vector<int> gains;
	while (tc <= T) {
		gains.clear();
		int answer = 0;
		int cnt = 0;
		scanf("%d", &cnt);
		int gain = 0;
		for (int i = 0; i < cnt; i++) {
			scanf("%d", &gain);
			gains.push_back(gain);
		}
		solve(gains, answer);
		printf("#%d %d\n", tc, answer);
		tc++;
	}
	//system("pause");
	return 0;
}