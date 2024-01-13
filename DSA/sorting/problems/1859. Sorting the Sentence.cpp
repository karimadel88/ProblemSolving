#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

class Solution {
public:
    static bool compareStrings(const string& a, const string& b) {
      int numA = a.back() - '0';
        int numB = b.back() - '0';
        return numA < numB;
    }

    string sortSentence(string s) {
        vector<string> vec;
        int siz = s.size();

        int indx = 0;
        for (int i = 0; i < siz; i++) {
            if (s[i] == ' ') {
                vec.push_back(s.substr(indx, i - indx));
                indx = i + 1;
            }
        }

        vec.push_back(s.substr(indx, siz - indx));

        sort(vec.begin(), vec.end(), compareStrings);
        string res = "";
        for (int i = 0; i < vec.size(); i++) {
            string temp = vec[i].substr(0, vec[i].size() - 1);

            res += temp;
            if (i != vec.size() - 1) {
                res += " ";
            }
        }
        return res;
    }
};