#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main() {
    const int start = 24;
    const int end = 24;
    const string fileContent = "#include <iostream>\n\nusing namespace std;\n";
    const string directoryPath = "C:\\Users\\yunga\\Documents\\GitHub\\OOP_ITSA\\basic\\";

    for (int i = start; i <= end; ++i) {
        string fileName = directoryPath + "Math_" + to_string(i) + ".cpp";
        FILE* outFile = fopen(fileName.c_str(), "w");
        if (outFile != nullptr) {
            fwrite(fileContent.c_str(), sizeof(char), fileContent.size(), outFile);
            fclose(outFile);
            cout << "Created file: " << fileName << endl;
        } else {
            cerr << "Unable to open file: " << fileName << endl;
        }
    }

    cout << "All files created successfully." << endl;
    return 0;
}
