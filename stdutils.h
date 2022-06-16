#include <string>
#include <vector>

static void split(std::string str, std::vector<string> &token_v, const char delim){
    size_t start = str.find_first_not_of(delim), end=start;
    while (start != std::string::npos){
        // Find next occurence of delimiter
        end = str.find(delim, start);
        // Push back the token found into vector
        // back to back tokens leave an empty string in the vector
        token_v.push_back(str.substr(start, end-start));
        // Skip all occurences of the delimiter to find new start
        start = end + 1
    }
}