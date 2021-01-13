
void run()
{
	int n, a, b, c;
	cin >> n >> a >> b >> c;
	rep(i, 5000) dp[i] = -inf;
	dp[0] = 0;
	rep(i, 5000){
		if(i >= a) dp[i] = max(dp[i], dp[i - a] + 1);
		if(i >= b) dp[i] = max(dp[i], dp[i - b] + 1);
		if(i >= c) dp[i] = max(dp[i], dp[i - c] + 1);
	}
	cout << dp[n] << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
	int cs=3;rep(i,cs)
#endif
	run();
}
