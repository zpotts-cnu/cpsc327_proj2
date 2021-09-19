#ifndef fileio
#define fileio
#include <vector>
#include <string>
#include "../includes/constants.h"

int load(const std::string filename, std::vector<process> &myProcesses);
int save(const std::string filename, std::vector<process> &myProcesses);

#endif
