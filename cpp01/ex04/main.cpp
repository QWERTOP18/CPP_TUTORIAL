#include <iostream>
#include <fstream>
#include <string>

bool copyFileWithReplacement(const std::string& file, const std::string& s1, const std::string& s2)
{
    std::ifstream input(file.c_str());
    if (!input) {
        std::cerr << "Error opening input file!" << std::endl;
        return false;
    }

    std::string out_file = std::string(file) + ".replace";
    std::ofstream output(out_file.c_str());
    if (!output) {
        std::cerr << "Error opening output file!" << std::endl;
        return false;
    }

    std::string line;
    size_t pos;
    while (std::getline(input, line)) {
        std::string result;
        size_t last_pos = 0;
        while ((pos = line.find(s1, last_pos)) != std::string::npos) {
            result.append(line, last_pos, pos - last_pos);
            result.append(s2);
            last_pos = pos + s1.length();
        }
        result.append(line, last_pos, line.length() - last_pos);
        output << result << std::endl;
    }

    return true;
}

int main(int argc, char** argv) {
    if (argc != 4) {
        std::cerr << "Usage: ./program <input_filename> <s1> <s2>" << std::endl;
        return 1;
    }

    if (copyFileWithReplacement(argv[1], argv[2], argv[3])) {
        std::cout << "File processed and saved successfully! :)" << std::endl;
    } else {
        std::cerr << "File processing failed! :(" << std::endl;
    }

    return 0;
}
