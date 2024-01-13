#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string sortSentence(string s) {
        vector<string> freq(10, "");
        int siz = s.size();

        int indx = 0;
        for (int i = 0; i < siz; i++) {
            if (s[i] == ' ') {
                freq[s[indx] - '0'] = s.substr(indx, i - indx);
                indx = i + 1;
            }
        }

        freq[s[indx] - '0'] = s.substr(indx, siz - indx);

        string res = "";
        for (int i = 1; i <= 9; i++) {
            if (freq[i] == "")
                continue;

            res += freq[i];
            if (i != 9) {
                res += " ";
            }
        }
        return res;
    }
};

int main() {
    Solution solution = new Soultion();

    // Example
    string input = "is2 sentence4 This1 a3";
    cout << "Input: " << input << endl;
    cout << "Output: " << solution.sortSentence(input) << endl;

    return 0;
}
