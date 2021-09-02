#include <ctime>

time_t now = time(nullptr);

char* date_time = ctime(&now);