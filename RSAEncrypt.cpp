#include "RSAEncrypt.h"
#include <string>

RSAEncrypt::RSAEncrypt() {}
RSAEncrypt::RSAEncrypt(std::string a) { RSAEncrypt::m.message = a; }
EncryptedMessage RSAEncrypt::encrypt(std::string message) {
    EncryptedMessage a;
    a.message = message;
    return a;
}
int RSAEncrypt::euclidAlgorithm(const int a, const int b) {

    int x = a;
    int y = b;
    int remainder = 0;

    if (y < x) {
        return euclidAlgorithm(y, x);
    } else {
        do {
            remainder = x % y;
            x = y;
            y = remainder;
        } while (remainder != 0);
    }

    return x;
}
int RSAEncrypt::findInverse(int const x, int const m) {
    int num = x;
    int mod = m;
    int remainder = 0;
    int div = 0;
    int one_back = 1;
    int two_back = 1;
    do {
        two_back = one_back;
        one_back = div;
        div = num / mod;
        remainder = num % mod;
        num = mod;
        mod = remainder;

    } while (remainder != 0);

    return (one_back * two_back) + 1;
}
