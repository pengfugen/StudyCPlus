
#include "Utils.h"
#include <string>
using namespace std;

int main(int argc, char **argv) {
	Utils utils;
	utils.print((char*)("=====Proc=====\n"));
	string s = "video/x-h264, "
	        "stream-format = byte-stream, "   /* only byte-stream */
	        "alignment = au, "          /* only entire frames */
	        "width = (int)[ 16, 2048 ], "
	        "height = (int)[ 16, 2048 ]; "
	        "video/x-h264, "
	        "stream-format = byte-stream, "   /* only byte-stream */
	        "alignment = au, "          /* only entire frames */
	        "width = (int)[ 16, 2048 ], "
	        "height = (int)[ 16, 2048 ], "
	        "profile = (string) {high, high-10-intra, high-10, high-4:2:2-intra, "
	        "high-4:2:2, high-4:4:4-intra, high-4:4:4, cavlc-4:4:4-intra}, "
	        "level = (string) {1, 1b, 1.1, 1.2, 1.3, 2, 2.1, 2.2, 3, 3.1, 3.2, 4, 4.1, 4.2, 5, 5.1};";
	printf(s.c_str());
	printf("\n");
	return 0;

}

