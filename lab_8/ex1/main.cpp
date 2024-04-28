#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <queue>
#include <algorithm>
#include <cctype>

using namespace std;

string toLowercase(const string& s) {
    string result;
    for (char c : s) {
        result += tolower(c);
    }
    return result;
}

int main() {
    ifstream inputFile("input.txt");

    string word;
    map<string, int> wordCount;

    while (inputFile >> word) {
        word = toLowercase(word);

        word.erase(remove_if(word.begin(), word.end(), ispunct), word.end());

        wordCount[word]++;
    }
    inputFile.close();

    auto cmp = [](const std::pair<std::string, int>& a, const std::pair<std::string, int>& b) {
        if (a.second == b.second)
            return a.first > b.first;
        return a.second < b.second;
        };

    std::priority_queue<std::pair<std::string, int>, std::vector<std::pair<std::string, int>>, decltype(cmp)> pq(cmp);

    for (const auto& pair : wordCount) {
        pq.push(pair);
    }

    while (!pq.empty()) {
        auto top = pq.top();
        std::cout << top.first << " => " << top.second << std::endl;
        pq.pop();
    }

    return 0;
}