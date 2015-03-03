/*
  499 - What's The Frequency, Kenneth?
  UVa Online Judge
  Esteban Arango Medina

  Solution.
    Ad-hoc, make sure to count only alphabetical charecters. I used map to save it.

 */
#include <iostream>
#include <fstream>
#include <stack>
#include <list>
#include <map>
using namespace std;

int main() 
{
    string userInput;
    
    while (!cin.eof()) 
    {
        
        int top = 0;
        
        getline(cin, userInput);
        
        map<char, int> letterFrequencyMap;
                
        for (int i = 0; i < userInput.size(); ++i) 
        {
            if ((userInput[i] >= 'A' && userInput[i] <= 'Z') || (userInput[i] >= 'a' && userInput[i] <= 'z')) 
            {
                letterFrequencyMap[userInput[i]]++;
                top = max(top, letterFrequencyMap[userInput[i]]);
            }
        }
        
        map<char, int>::const_iterator itr;
        
        for (itr = letterFrequencyMap.begin(); itr != letterFrequencyMap.end(); ++itr) 
        {
            if ((*itr).second == top)
            {
                cout << (*itr).first;
            }
        }
        
        printf(" %d\n", top);
    }

    return 0;
}