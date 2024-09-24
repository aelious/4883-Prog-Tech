#include <fstream>
using namespace std;

int main() {
    ifstream infile("input.txt");
    ofstream outfile("output.txt");
    int val1, val2;
    while(infile >> val1 >> val2){
        if(val1 < val2) {
            outfile << val2 - val1 << endl;
        } else {
            outfile << val1 - val2 << endl;
        }
    }
    return 0;
}