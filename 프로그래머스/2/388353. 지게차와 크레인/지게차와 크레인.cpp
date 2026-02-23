#include <string>
#include <vector>
#include <queue>

using namespace std;

int n, m;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void forklift(vector<string>& storage, char target) {
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    queue<pair<int,int>> q;
    vector<pair<int,int>> toRemove;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == 0 || j == 0 || i == n-1 || j == m-1) {
                if (storage[i][j] == '.') {
                    q.push({i,j});
                    visited[i][j] = true;
                }
                else if (storage[i][j] == target) {
                    toRemove.push_back({i,j});
                }
            }
        }
    }

    while (!q.empty()) {
        auto [x, y] = q.front(); q.pop();

        for (int d = 0; d < 4; d++) {
            int nx = x + dx[d];
            int ny = y + dy[d];

            if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
            if (visited[nx][ny]) continue;

            if (storage[nx][ny] == target) {
                toRemove.push_back({nx, ny});
                visited[nx][ny] = true;
            } else if (storage[nx][ny] == '.') {
                q.push({nx, ny});
                visited[nx][ny] = true;
            }
        }
    }

    for (auto& p : toRemove) {
        storage[p.first][p.second] = '.';
    }
}

void crane(vector<string>& storage, char target) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (storage[i][j] == target) {
                storage[i][j] = '.';
            }
        }
    }
}

int solution(vector<string> storage, vector<string> requests) {
    n = storage.size();
    m = storage[0].size();

    for (auto& r : requests) {
        if (r.size() == 1) {
            forklift(storage, r[0]);
        } else {
            crane(storage, r[0]);
        }
    }

    int res = 0;
    for (auto& row : storage) {
        for (char c : row) {
            if (c != '.') res++;
        }
    }

    return res;
}