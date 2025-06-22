
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <string>
#include <cstdint>

bool IsDelimiter(char c);
bool IsNumeric(const std::string& s);
int32_t CountWords(const std::string& s);
void FillWords(const std::string& s, std::string* words);
std::string ProcessString(const std::string& input);

#endif