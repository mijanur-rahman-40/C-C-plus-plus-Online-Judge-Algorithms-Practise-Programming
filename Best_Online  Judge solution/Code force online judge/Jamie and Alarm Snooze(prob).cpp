
/*
#include <bits/stdc++.h>

using namespace std;

int n, ans, ta, tb;

int main() {
	scanf("%d%d%d", &n, &ta, &tb);
	while (ta % 10 != 7 && tb % 10 != 7) {
		tb += 24 * 60 - n;
		ta += tb / 60;
		tb %= 60;
		ta %= 24;
		ans++;
	}
	printf("%d\n", ans);
	return 0;
}
 আপনাকে hour and min দেয়া আছে, সেখান থেকে x minus করতে থাকবেন, যতক্ষন না (hour or min ) % 10 == 7 না হয়।
এখন কতগুলি জিনিস খেয়াল রাখবেন, x minus করতে করতে, যদি min <=0 হয়ে যায়, তাহলে hour কেও ১ miuns করতে হবে, আর তখন আপনার নতুন min হবে min - x + 60. আর আরেকটা ব্যাপার হল, hour mins করতে গিয়ে যদি negative এ চলে আসে, তাহলে hour += 24 করতে হবে :)
আপনি এই কেস টা চিন্তা করেনঃ
8
00 : 08
ans = 47
*/
