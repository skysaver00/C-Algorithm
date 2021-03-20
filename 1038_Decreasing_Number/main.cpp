#include <stdio.h>
int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int b[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int c[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int d[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int e[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int f[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int g[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int h[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int i[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

int main() {
    int N;
    scanf("%d", &N);

    int count = 0;
    while(1) {
        for(int ant = 0; ant < 10; ant++) {
            if(count == N) {
                printf("%d\n", ant);
                return 0;
            } else count++;
        }

        for(int bnt = 1; bnt < 10; bnt++) {
            for(int ant = 0; ant < bnt; ant++) {
                if(count == N) {
                    printf("%d%d\n", bnt, ant);
                    return 0;
                } else count++;
            }
        }

        for(int cnt = 2; cnt < 10; cnt++) {
            for(int bnt = 1; bnt < cnt; bnt++) {
                for(int ant = 0; ant < bnt; ant++) {
                    if(count == N) {
                        printf("%d%d%d\n", cnt, bnt, ant);
                        return 0;
                    } else count++;
                }
            }
        }

        for(int dnt = 3; dnt < 10; dnt++) {
            for(int cnt = 2; cnt < dnt; cnt++) {
                for(int bnt = 1; bnt < cnt; bnt++) {
                    for(int ant = 0; ant < bnt; ant++) {
                        if(count == N) {
                            printf("%d%d%d%d\n", dnt, cnt, bnt, ant);
                            return 0;
                        } else count++;
                    }
                }
            }
        }

        for(int ent = 4; ent < 10; ent++) {
            for(int dnt = 3; dnt < ent; dnt++) {
                for(int cnt = 2; cnt < dnt; cnt++) {
                    for(int bnt = 1; bnt < cnt; bnt++) {
                        for(int ant = 0; ant < bnt; ant++) {
                            if(count == N) {
                                printf("%d%d%d%d%d\n", ent, dnt, cnt, bnt, ant);
                                return 0;
                            } else count++;
                        }
                    }
                }
            }
        }

        for(int fnt = 5; fnt < 10; fnt++) {
            for(int ent = 4; ent < 10; ent++) {
                for(int dnt = 3; dnt < ent; dnt++) {
                    for(int cnt = 2; cnt < dnt; cnt++) {
                        for(int bnt = 1; bnt < cnt; bnt++) {
                            for(int ant = 0; ant < bnt; ant++) {
                                if(count == N) {
                                    printf("%d%d%d%d%d%d\n", fnt, ent, dnt, cnt, bnt, ant);
                                    return 0;
                                } else count++;
                            }
                        }
                    }
                }
            }
        }

        for(int gnt = 6; gnt < 10; gnt++) {
            for(int fnt = 5; fnt < 10; fnt++) {
                for(int ent = 4; ent < 10; ent++) {
                    for(int dnt = 3; dnt < ent; dnt++) {
                        for(int cnt = 2; cnt < dnt; cnt++) {
                            for(int bnt = 1; bnt < cnt; bnt++) {
                                for(int ant = 0; ant < bnt; ant++) {
                                    if(count == N) {
                                        printf("%d%d%d%d%d%d%d\n", gnt, fnt, ent, dnt, cnt, bnt, ant);
                                        return 0;
                                    } else count++;
                                }
                            }
                        }
                    }
                }
            }
        }

        for(int hnt = 7; hnt < 10; hnt++) {
            for(int gnt = 6; gnt < 10; gnt++) {
                for(int fnt = 5; fnt < 10; fnt++) {
                    for(int ent = 4; ent < 10; ent++) {
                        for(int dnt = 3; dnt < ent; dnt++) {
                            for(int cnt = 2; cnt < dnt; cnt++) {
                                for(int bnt = 1; bnt < cnt; bnt++) {
                                    for(int ant = 0; ant < bnt; ant++) {
                                        if(count == N) {
                                            printf("%d%d%d%d%d%d%d%d\n", hnt, gnt, fnt, ent, dnt, cnt, bnt, ant);
                                            return 0;
                                        } else count++;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}