#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the function below.
 */
vector <int> jobOffers(vector <int> scores, vector <int> lowerLimits, vector <int> upperLimits) {

}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector <int> res;
    int scores_size = 0;
    cin >> scores_size;
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    vector<int> scores;
    for(int i = 0; i < scores_size; i++) {
        int scores_item;
        cin >> scores_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        scores.push_back(scores_item);
    }

    int lowerLimits_size = 0;
    cin >> lowerLimits_size;
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    vector<int> lowerLimits;
    for(int i = 0; i < lowerLimits_size; i++) {
        int lowerLimits_item;
        cin >> lowerLimits_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        lowerLimits.push_back(lowerLimits_item);
    }

    int upperLimits_size = 0;
    cin >> upperLimits_size;
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    vector<int> upperLimits;
    for(int i = 0; i < upperLimits_size; i++) {
        int upperLimits_item;
        cin >> upperLimits_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        upperLimits.push_back(upperLimits_item);
    }

    res = jobOffers(scores, lowerLimits, upperLimits);
    for(int res_i = 0; res_i < res.size(); res_i++) {
    	fout << res[res_i] << endl;;
    }

    fout.close();
    return 0;
}

