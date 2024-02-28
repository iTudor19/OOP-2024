/*#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>

bool compareWords(const std::string& word1, const std::string& word2) {
    if (word1.length() != word2.length()) {
        return word1.length() > word2.length();
    }
    return word1 < word2;
}

int main() {
    std::string sentence;
    std::vector<std::string> words;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, sentence);

    std::string word;
    for (char ch : sentence) {
        if (ch != ' ') {
            word += ch;
        }
        else {
            if (!word.empty()) {
                words.push_back(word);
                word.clear();
            }
        }
    }
    if (!word.empty()) {
        words.push_back(word);
    }

    // Manual sorting
    for (size_t i = 0; i < words.size(); ++i) {
        for (size_t j = i + 1; j < words.size(); ++j) {
            if (compareWords(words[j], words[i])) {
                std::swap(words[i], words[j]);
            }
        }
    }

    std::cout << "Sorted words:\n";
    for (const std::string& w : words) {
        std::cout << w << std::endl;
    }

    return 0;
}
*/