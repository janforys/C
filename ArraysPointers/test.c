/* from: "The C Programming Language" */


int strcmpA(char *s, char *t);
int strcmpP(char *s, char *t);

int main() {
	/* Uncomment to test */
	char *asd, *dsa;
	//strcmpA(asd, dsa); // arrays
	strcmpP(); // pointers
	return 0;
}

/* returns < 0 if s < t, 0 if s == t or > 0 if s > t */
/* String comparison */
/* Array version */
int strcmpA(char *s, char*t)
{
	int i;

	for (i = 0; s[i] == t[i]; i++)
		if (s[i] == '\0')
			return 0;
	return s[i] - t[i];
}

/* returns < 0 if s < t, 0 if s == t or > 0 if s > t */
/* String comparison */
/* Pointer version */
int strcmpP(char *s, char*t)
{
	for ( ; *s == *t; s++, t++)
		if (*s == '\0')
			return 0;
	return *s - *t;
}
