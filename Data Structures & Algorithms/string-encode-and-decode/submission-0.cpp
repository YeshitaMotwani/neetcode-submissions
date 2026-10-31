class Solution {
public:
    string encode(vector<string>& strs) {
        string encoded;

        for (const string& str : strs) {
            encoded += to_string(str.size());
            encoded += '#';
            encoded += str;
        }

        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> decoded;
        int i = 0;

        while (i < s.size()) {
            // Find the '#' separating the length and string.
            int delimiter = i;
            while (s[delimiter] != '#') {
                delimiter++;
            }

            // Convert the length substring to an integer.
            int length = stoi(s.substr(i, delimiter - i));

            // Move past '#'.
            delimiter++;

            // Extract exactly `length` characters.
            decoded.push_back(s.substr(delimiter, length));

            // Move to the beginning of the next encoded string.
            i = delimiter + length;
        }

        return decoded;
    }
};