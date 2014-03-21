class Solution {
	public:
		void reverseWords(string &s) {
			vector<string> words;
			string word;
			stringstream stream(s);
			while(stream>>word) {
				words.push_back(word);
			}
			if(!words.empty()) {
				s = words.back();
				words.pop_back();
			} else {
				s = "";
			}
			reverse(words.begin(), words.end());
			for(auto &w: words) {
				s += (" " + w);
			}
		}
};
