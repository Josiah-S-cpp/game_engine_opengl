int strlen(char *string){
    int out = 0;
    for (int i = 0; string[i] != 0; i++){
        out++;
    }
    return out;
}
