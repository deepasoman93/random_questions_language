#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int main (int argc, const char * argv[]) {
    string line, csvItem;
    ifstream myfile ("C:/Users/Administrator/Desktop/report.csv");
    int lineNumber = 0;
    if (myfile.is_open()) {
        while (getline(myfile,line)) {
            lineNumber++;
            if(lineNumber  % 2 != 0) {
                cout << line << endl; ;
                istringstream myline(line);
                while(getline(myline, csvItem, ',')) {
                    cout << csvItem << endl;
                }
            }
        }
        myfile.close();
    }
    return 0;
}