#include "fileparser.h"

int main(int charc, char* argv[]) {
	std::string filePath = argv[1];
	std::ifstream stream(filePath);
	for (auto& line: cool::IteratorRange(stream)) {
		std::cout << *line << std::endl;
	}
}
