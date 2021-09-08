//
//  main.cpp
//  Text Censor
//
//  Created by Amir on 8/6/21.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    cout << "Enter a sentence: ";
    vector<string> sentence;
    
    //words to censor
    vector<string> censor = {"hate", "bad", "no"};
    for (string temp; cin >> temp;) {
        sentence.push_back(temp);
    }
    cout << "\n";
    for (string x : sentence) {
        bool ok = true;
        for (int counter = 0; counter < sentence.size(); ++counter) {
            if (x == censor[counter]) {
                ok = false;
            }
        }
        if (ok == true) cout << x << " ";
        else cout << "BLEEP ";
    }
    cout << "\n";
}

