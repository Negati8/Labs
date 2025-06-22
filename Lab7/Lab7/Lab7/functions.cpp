#include "functions.h"

bool IsDelimiter(char c) {
    if (c == ' ' || c == '\t' ||  c == '\n')
        return true;
    if (c == '.' || c == ',' ||  c == ';' || c == ':'||  c == '!' ||
        c == '?' || c == '-'||  c == '(' || c == ')' || c == '"' || c == '\'')
        return true;
    return false;
}

bool IsNumeric(const std::string& s) {
    if (s.empty())
        return false;
    for (size_t i = 0; i < s.size(); ++i) {
        char c = s[i];
        if (c < '0' || c > '9')
            return false;
    }
    return true;
}

int32_t CountWords(const std::string& s) {
    int32_t count{ 0 };
    std::string token{};
    for (size_t i{ 0 }; i < s.size(); ++i) {
        char c = s[i];
        if (!IsDelimiter(c)) {
            token.push_back(c);
        }
        else {
            if (!token.empty()) {
                ++count;
                token.clear();
            }
        }
    }
    if (!token.empty())
        ++count;
    return count;
}

void FillWords(const std::string& s, std::string* words) {
    int32_t index{ 0 };
    std::string token{};
    for (size_t i{ 0 }; i < s.size(); ++i) {
        char c = s[i];
        if (!IsDelimiter(c)) {
            token.push_back(c);
        }
        else {
            if (!token.empty()) {
                words[index] = token;
                ++index;
                token.clear();
            }
        }
    }
    if (!token.empty()) {
        words[index] = token;
        ++index;
    }
}

std::string ProcessString(const std::string& input) {
    int32_t wordCount{ CountWords(input) };
    if (wordCount == 0)
        return "The string is empty or has no words.";

    std::string* words = new std::string[wordCount];
    bool* used = new bool[wordCount];
    for (int32_t i{ 0 }; i < wordCount; ++i)
        used[i] = false;

    FillWords(input, words);

    std::string result{};
    int32_t pos{ 1 };
    bool found;
    while (true) {
        found = false;
        for (int32_t i{ 0 }; i < wordCount; ++i) {
            if (!used[i]) {
                if ((pos % 2 == 1 && IsNumeric(words[i])) ||
                    (pos % 2 == 0 && !IsNumeric(words[i]))) {
                    if (!result.empty())
                        result += " ";
                    result += words[i];
                    used[i] = true;
                    found = true;
                    break;
                }
            }
        }
        if (!found)
            break;
        ++pos;
    }

    if (result.empty()) {
        result = "Impossible to form a new string according to the rule.";
        delete[] words;
        delete[] used;
        return result;
    }

    for (int32_t i{ 0 }; i < wordCount; ++i) {
        if (!used[i])
            result += " " + words[i];
    }

    delete[] words;
    delete[] used;

    return "New string: " + result;
}