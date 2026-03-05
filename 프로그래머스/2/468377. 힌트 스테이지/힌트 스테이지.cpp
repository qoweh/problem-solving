#include <bits/stdc++.h>
using namespace std;

int n;
int answer;
int have_coupon[17];

void dfs(int stage,
         const vector<vector<int>>& cost,
         const vector<vector<int>>& hint,
         int total_cost)
{
    if (stage == n) {
        answer = min(answer, total_cost);
        return;
    }

    // 가지치기
    if (total_cost >= answer) return;

    // 현재 스테이지에서 사용 가능한 쿠폰 수
    int usable = min(have_coupon[stage],
                     (int)cost[stage].size() - 1);

    int stage_cost = cost[stage][usable];

    // 🔹 1️⃣ 번들 구매 안 함
    dfs(stage + 1, cost, hint, total_cost + stage_cost);

    // 🔹 2️⃣ 번들 구매 함 (마지막 스테이지는 구매 불가)
    if (stage < n - 1) {
        // 쿠폰 추가
        for (int i = 1; i < hint[stage].size(); i++) {
            int next_stage = hint[stage][i] - 1; // 0-index 변환
            have_coupon[next_stage]++;
        }

        dfs(stage + 1,
            cost,
            hint,
            total_cost + stage_cost + hint[stage][0]);

        // 🔥 반드시 복구
        for (int i = 1; i < hint[stage].size(); i++) {
            int next_stage = hint[stage][i] - 1;
            have_coupon[next_stage]--;
        }
    }
}

int solution(vector<vector<int>> cost,
             vector<vector<int>> hint)
{
    n = cost.size();
    answer = INT_MAX;

    memset(have_coupon, 0, sizeof(have_coupon));

    dfs(0, cost, hint, 0);

    return answer;
}