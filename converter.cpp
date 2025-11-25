#include<algorithm>
#include<cmath>
#include <emscripten/emscripten.h>
#include <string>
using namespace std;
extern "C" {

    //Binary to Decimal conversion
    EMSCRIPTEN_KEEPALIVE
    int binToDec(const char* bin) {
        int result = 0;
        string s(bin);
        for(char c : s) {
            result = result * 2 + (c - '0');
        }
        return result;
    }

    //Decimal to Binary conversion
    EMSCRIPTEN_KEEPALIVE
    const char* decToBin(int n) {
        static string res;
        res = "";
        if (n == 0) return "0";
            while (n > 0) {
                res.push_back((n % 2) + '0');
                n /= 2;
            }
            reverse(res.begin(), res.end());
            return res.c_str();
    }

    //Binary to Hexadecimal conversion
    EMSCRIPTEN_KEEPALIVE
    const char* binToHex(const char* bin) {
        string s(bin);
        int dec = binToDec(bin);
        static string hex = "";
        hex = "";
        char hexChar[] = "0123456789ABCDEF";
        if (dec == 0) return "0";
        while(dec > 0 ) {
            hex = hexChar[dec %16] + hex;
            dec /= 16;
        }
        return hex.c_str();
    }

    //Hexadecimal to Decimal conversion
    EMSCRIPTEN_KEEPALIVE
    int hexToDec(const char* hex) {
        string s(hex);
        int result = 0;
        for(char c : s) {
            result *= 16;
            if(c >= '0' && c<= '9') result += c - '0';
            else result += 10 + (toupper(c) - 'A');
        }
        return result;
    }

    //decimal to Hexadecimal conversion
    EMSCRIPTEN_KEEPALIVE
    const char* decToHex(int n) {
        static string res ="";
        res = "";
        char hexChar[] = "0123456789ABCDEF";
        if (n == 0) return "0";
        while (n > 0) {
            res = hexChar[n % 16] + res;
            n /= 16;
        }
        return res.c_str();
    }

    //octal to Decimal conversion
    EMSCRIPTEN_KEEPALIVE
    int octToDec(const char* oct) {
    std::string s(oct);
    int result = 0;
    for (char c : s) {
        result = result * 8 + (c - '0');
    }
    return result;
    }

    //Decimal to Octal conversion
    EMSCRIPTEN_KEEPALIVE
    const char* decToOct(int n) {
        static std::string res = "";
        res = "";
        if (n == 0) return "0";
        while (n > 0) {
            res = char('0' + (n % 8)) + res;
            n /= 8;
        }
        return res.c_str();
    }

}
