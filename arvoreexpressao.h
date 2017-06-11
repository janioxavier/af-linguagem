struct noexpr {
    struct noexpr* esq;
    struct noexpr* dir;
    double value;
    char *token;
};

typedef struct noexpr noexpr;

noexpr *criar_no(noexpr *left, noexpr *right, int tokencode, char *token);
double computar(noexpr *tree);
