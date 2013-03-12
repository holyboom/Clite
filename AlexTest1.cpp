int main ( ) {
	int ivar;
	float fvar;
	bool bvar, bvar2, bvar3, bvar4;
	char cvar;
	ivar = 5;
	fvar = 7.5;
	bvar = true;
	cvar = 'g';
	if (bvar) {
		while (ivar < 100) {
			fvar = fvar + 1.50342;
			ivar = ivar + 1;
		}
	}
	ivar = 2 * 3 + 4;
	bvar = bvar && false;
//	ivar = -ivar;
	bvar = ivar >= 5;
}
