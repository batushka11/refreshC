char* mx_strcpy(char * dst, const char * src)
{
    char *tptr = dst;
    while (*src) {
        *dst++ = *src++;
    }
    *dst = 0;
    return tptr;
}


