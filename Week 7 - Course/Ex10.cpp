void rFilter(char *s) {
    int len = strlen(s);
    for (int i = len - 1; i >= 0; -- i) {
        if (!((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))) {
            s[i] = '_';
        } else {
            break;
        }
    }
}