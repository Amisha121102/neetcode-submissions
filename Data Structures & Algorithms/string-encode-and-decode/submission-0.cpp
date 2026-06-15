class Solution {
public:

    string encode(vector<string>& strs) {
    string s = "";
    for (auto& w : strs)
        s += to_string(w.size()) + '#' + w;  // '#' after length, before content
    return s;
}

vector<string> decode(string s) {
    vector<string> ans;
    int i = 0;
    while (i < (int)s.size()) {
        int j = i;
        while (s[j] != '#') j++;         // find the '#' separator
        int len = stoi(s.substr(i, j - i)); // parse multi-digit length
        ans.push_back(s.substr(j + 1, len));
        i = j + 1 + len;                 // jump to start of next token
    }
    return ans;
}

};
