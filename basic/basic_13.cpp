#include <iostream>
#include <vector>
#include <map>
#include <sstream>
using namespace std;
class card{
public:
    char suit;
    int num;
    card(char,int);
};
struct CustomCompare {
    bool operator()(const std::pair<char, int>& lhs, const std::pair<char, int>& rhs) const {
        // 定义花色的优先级顺序
        std::string suits = "SHDC"; // S > H > D > C

        // 先按花色排序
        if (lhs.first != rhs.first) {
            return suits.find(lhs.first) < suits.find(rhs.first);
        }
        // 再按数字大小排序
        return lhs.second > rhs.second;
    }
};
int main() {
    int n;
    cin >> n; // 讀取行數 n
    cin.ignore(); // 忽略掉換行符

    for (int i = 0; i < n; ++i) {
        string line;
        getline(cin, line); // 讀取一行輸入

        map<pair<char, int>, card, CustomCompare> cards;

        istringstream iss(line);
        char c;
        int num;

        while (iss >> c >> num) {
            // 插入到 map 中
            cards.insert(make_pair(make_pair(c, num), card(c, num) ) );
        }

        // 使用 map 遍歷和輸出排序後的結果
        for (const auto& pair : cards) {
            cout << pair.second.suit << pair.second.num << " ";
        }
        cout << endl;
    }

    return 0;
}
card::card(char c,int n): suit(c),num(n){
}