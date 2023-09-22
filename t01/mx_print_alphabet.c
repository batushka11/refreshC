void mx_printchar(char c);

void mx_print_alphabet(void)
{
	for (int y = 65; y <= 90; y += 2) {
		mx_printchar(y);
		mx_printchar(y+33);
	}
	mx_printchar('\n');
}


