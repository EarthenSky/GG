//this
#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <sstream>
#include <cmath>
#include <cstdint>
#include <cstdlib>
#include <vector>
#include <deque>
#include <chrono>
#include <ctime>
#include <iomanip>
#include <algorithm>
#include <filesystem>
#include <functional>
#include <map>
#include <random>

#include <thread>
#include <atomic>

#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>

#include "server_deps/server_downloading.hpp"

#define loop while(true)



namespace gg{

}

auto main (int argc, char ** argv) -> int {
	gg::server_downloader();
	return EXIT_SUCCESS;
}
