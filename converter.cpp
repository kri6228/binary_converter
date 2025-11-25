#include <emscripten/emscripten.h>
#include <string>

extern "C" {
    EMSCRIPTEN_KEEPALIVE
    int binaryToDecimal(const char* bin) {
        int result = 0;
        std::string s(bin);
        for(char c : s) {
            result = result * 2 + (c - '0');
        }
        return result;
    }
}
