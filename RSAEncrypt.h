#include "EncryptedMessage.h"


class RSAEncrypt{
	

	public:
		EncryptedMessage message;
		static EncryptedMessage encrypt(std::string const message);	
	private:
		int p;
		int q;
		int n;
		int phi;
		int e;
		int d;
	
		int GCD(int const x, int const y);
		static int findInverse(int const x,int const m);
};
