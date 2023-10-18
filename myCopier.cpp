// Tim Fortune HW 6 Part1
// The following code copys the contents of one designated file into another
//


#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char* argv[]) {
    // Check if the correct number of command-line arguments is provided.
    if (argc != 3) {
        std::cerr << "Usage: " << argv[0] << " <source_file> <destination_file>\n";
        return 1;
    }

    // Open the source file for reading.
    std::ifstream sourceFile(argv[1]);
    if (!sourceFile.is_open()) {
        std::cerr << "Error: Cannot open source file: " << argv[1] << "\n";
        return 1;
    }

    // Open the destination file for writing.
    std::ofstream destinationFile(argv[2]);
    if (!destinationFile.is_open()) {
        std::cerr << "Error: Cannot open destination file: " << argv[2] << "\n";
        return 1;
    }

    std::string line;
    while (std::getline(sourceFile, line)) {
        // Write the line to the destination file.
        destinationFile << line << '\n';
    }

    // Close both files.
    sourceFile.close();
    destinationFile.close();

    std::cout << "File copied successfully from " << argv[1] << " to " << argv[2] << "\n";

    return 0;
}
