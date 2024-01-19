#include "Solution3.h"
#include <algorithm>
#include <cctype>
#include <stdexcept>

// Don't fortget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_3

void Solution3::SetWords(const std::vector<std::string>& _words)
{
    if (_words.empty()) {
        throw std::invalid_argument("The vector of words is empty");
    }
    words = _words;
}

void Solution3::SortWords()
{
    std::sort(words.begin(), words.end(), [](const std::string& a, const std::string& b) {
        return std::lexicographical_compare(
            a.begin(), a.end(), b.begin(), b.end(),
            [](char char1, char char2) {
                return std::tolower(char1) < std::tolower(char2);
            });
        });
}

std::vector<std::string> Solution3::GetSortedWords() const
{
    return words;
}
#endif
