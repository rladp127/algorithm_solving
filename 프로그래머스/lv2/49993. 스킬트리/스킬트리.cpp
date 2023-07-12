#include <string>
#include <vector>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    vector <string> skIndex(skill_trees.size());

    
    for (int i = 0; i < skill_trees.size(); i++) {
        for (int j = 0; j < skill_trees[i].size(); j++) {
            for (int k = 0; k < skill.length(); k++) {
                if (skill_trees[i][j] == skill[k]) {
                    skIndex[i] += skill[k];
                }
            }
        }
    }

        for (int a = 0; a < skIndex.size(); a++) {
        if (skIndex[a].length() == 0) {
            answer++;
            continue;
        }

        for (int i = 0; i < skIndex[a].length(); i++) {
            if (skIndex[a][i] != skill[i]) { 
                break;
            }
            if (i == skIndex[a].size() - 1) {
            answer++;
            }
        }
    }
    
    return answer;
}