#include "main.h"
#include "solution/string/014/014.h"

int main(int argc, char** argv) {
	std::vector test{ std::string("vo"), std::string("volsd"), std::string("vov"), std::string("vbbo") };
	std::cout << longestCommonPrefix(test) << std::endl;
	return 0;
}
