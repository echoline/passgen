int main() {
	char buf[1];
	while (read(0, buf, 1) == 1) {
		if ((buf[0] >= 'A' && buf[0] <= 'Z')
		  ||(buf[0] >= 'a' && buf[0] <= 'z')
		  ||(buf[0] >= '0' && buf[0] <= '9')) {
			write (1, buf, 1);
		}
	}
}
