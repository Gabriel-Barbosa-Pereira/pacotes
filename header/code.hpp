#ifndef _CODE_HPP_
#define _CODE_HPP_

#include <string>
#include <fstream>
#include <map>

int code(std::string signature, std::string title, std::string language, std::string path);

std::string invert(std::string text);

std::string convert(std::string text); // Then go back to std::string

#endif
