#include <stdio.h>

int main(void) {

    return 0;
}
size_t ctrlen(const char *str) {
    size_t len = 0;
    while (*str != '\0') {
        len++;
        str++;
    }
    return len;
}
char *ctrcpy(char *dest, const char *src) {
    char *start = dest;
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return start;
}
int ctrcmp(const char *s1, const char *s2) {
    while (*s1 == *s2) {
        if (*s1 == '\0')
            return 0;
        s1++;
        s2++;
    }
    return *s1 - *s2;
}
void *cmemcpy(char *dest, const char *src, size_t n) {
    unsigned char *d = (unsigned char *)dest;
    const unsigned char *s = (unsigned char *)src;
    while (n--) {
        *d++ = *s++;
    }
    return dest;
}