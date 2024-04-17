#include <cstdio>
using namespace std;

int main() {
	FILE *ifp, *ofp;
	int c;
	if((ifp = fopen("a.txt", "r")) == NULL)
		return 1;
	if((ofp = fopen("b.txt", "w")) == NULL)
		return 2;
	while((c = getc(ifp)) != EOF) {
		if(c == '\n');
		else
			fputc(c, ofp);
	}
	fclose(ifp);
	fclose(ofp);

	return 0;
}