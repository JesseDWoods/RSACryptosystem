#include "EncryptedMessage.h"
#include <string>

class rsa_encrypt{
	public:
	
		static EncryptedMessage encrypt(std::string message){
			EncryptedMessage a;
			return a;
		}
	private:
		static int findInverse(int const x, int const m) {
			int num = x;
			int mod = m;
			int remainder = 0;
			int div = 0;
			int one_back = 1;
			int two_back = 1;
			do {
				two_back = one_back;
				one_back = div;
				div = num/mod;
				remainder = num % mod;
				num = mod;
				mod = remainder;

			}while (remainder != 0);

			return (one_back * two_back) + 1;
		}
};

	
