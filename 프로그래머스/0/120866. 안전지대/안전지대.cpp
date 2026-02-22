#include <string>
#include <vector>

using namespace std;

int dx[] = {0, 0, 0, 1, 1, 1, -1, -1, -1};
int dy[] = {0, 1, -1, 0, 1, -1, 0, 1, -1};


int solution(vector<vector<int>> board) {
    // vector<vector<int>> t(board.size() * board.size()) = {};
    // vector<vector<int>> t(board.size() * board.size(), 0);
    vector<pair<int,int>> t;
    
    int answer = 0;
    for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board.size(); j++) {
            if (board[i][j] == 1) t.push_back({i, j});
        }
    }

    for (auto& c : t) {
        for (int i = 0 ; i < 10; i++) {
            auto [x, y] = c;
            x += dx[i];
            y += dy[i];
            if (x < 0 || y < 0 || x >= board.size() || y >= board.size()) continue;
            board[x][y] = 1;
        }
    }
    for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board.size(); j++) {
            if (board[i][j] == 0) answer++;
        }
    }
    return answer;
}