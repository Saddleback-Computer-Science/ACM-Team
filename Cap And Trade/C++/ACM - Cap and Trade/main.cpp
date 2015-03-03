/**
 *
 * @author Shawn Azar
 * 
 * This was written for Saddle back Computer Science Society & The ACM Club.
 * Check read.me for prompt
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <math.h>
#include <vector>

using namespace std;

int main(int argc, char** argv) {
    const int AR_SIZE = 2;
    string inputAR[AR_SIZE] = {
        "SCC,90000,15,485000,967000",
        "UCX,150000,15,1500000,6000000"
    };
    

    cout << "Vector, String and Streams" << endl;
    for (int i = 0; i < AR_SIZE; i++) 
    {
        vector<string> splitInputElements;
        stringstream ss(inputAR[i]);

        string currentElement;
        while (getline(ss, currentElement, ',')) 
        {
            if (!currentElement.empty()) 
            {
                splitInputElements.push_back(currentElement);
            }
        }
        
        cout << splitInputElements[0] << " Fees per Unit: $" << round(atof(splitInputElements[3].c_str()) / atof(splitInputElements[1].c_str())) << "-$" << round(atof(splitInputElements[4].c_str()) / atof(splitInputElements[1].c_str())) << " Full Time: $" << round(atof(splitInputElements[3].c_str()) / atof(splitInputElements[1].c_str())*atof(splitInputElements[2].c_str())) << "-$" << round(atof(splitInputElements[4].c_str()) / atof(splitInputElements[1].c_str())*atof(splitInputElements[2].c_str())) << endl;
    }







    return 0;
}

