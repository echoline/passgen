#include <stdio.h>
#include <ctype.h>

int main() {
	char buf[1];
	while (read(0, buf, 1) == 1) {
		if (isalnum(buf[0])) {
			write (1, buf, 1);
			fflush (stdout);
		}
	}
}
