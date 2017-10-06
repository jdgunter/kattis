#include <iostream>
#include <map>
#include <string>
#include <vector>

int main()
{
    std::map <std::string, int> candidates;
    std::string candidate;
    std::string end = "***";
    
    while (getline(std::cin, candidate)) {
        if (candidate != end) { candidates[candidate]++; }
    }
    
    std::vector <std::string> max_vote_names;
    int max_vote_count = 0;
    for (auto it = candidates.begin(); it != candidates.end(); it++) {
        if (it->second > max_vote_count) {
            max_vote_names.clear();
            max_vote_names.push_back(it->first);
            max_vote_count = it->second;
        } else if (it->second == max_vote_count) {
            max_vote_names.push_back(it->first);
        }
    }
    
    if (max_vote_names.size() > 1) {
        std::cout << "Runoff!" << std::endl;
    } else {
        std::cout << max_vote_names[0] << std::endl;
    }
    
    return 0;
}
