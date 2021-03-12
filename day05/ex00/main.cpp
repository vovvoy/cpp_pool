#include <bits/stdc++.h>

using namespace std;


vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player) {
	vector<int> total;
	vector<int>::iterator ip;
	ip = std::unique(ranked.begin(), ranked.begin() + ranked.size());
	ranked.resize(std::distance(ranked.begin(), ip));

	for (int i = 0; i < player.size(); i++){
		int r = ranked.size() - 1;
		int l = 0;
		while (l != r)
		{
			int m = (l + r) / 2;
			if (ranked[m] > player[i])
			{
				l = m + 1;
			}
			else
			{
				r = m;
			}
		}
		total.push_back(player[i] == ranked[l] ? l + 1 : player[i] < ranked[l] ? l + 2 : l + 1);
	}
	return (total);
}

int main()
{
	vector<int> ranked, player;
	int n, m;
	cin >> n;
	for (int i = 0; i < n; i++){
		int tmp;
		cin >> tmp;
		ranked.push_back(tmp);
	}
	cin >> m;
	for (int i = 0; i < m; i++){
		int tmp;
		cin >> tmp;
		player.push_back(tmp);
	}
	vector<int>total = climbingLeaderboard(ranked, player);


	return 0;
}





