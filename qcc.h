#ifndef ABC_H
#define ABC_H

// *** tokenize.c ***//

// Token
typedef enum {
    TK_RESERVE,
    TK_LIB,
    TK_IDENT,
    TK_CHAR,
    TK_NUM,
    TK_PTR,
    TK_BRACKET,
    TK_OP,
    TK_COMP,
    TK_ADDR,
    TK_PUNCT,
    TK_FMTSPEC,
    TK_PRINTED,
    TK_CMT,
    TK_UNDEF,
    TK_SKIP,    
} TokenKind;

// Token type
typedef struct Token Token;
strct Token {
    TokenKind kind;
    Token next;
    int64_t val;
    long float fval;

    char *loc;
    int len;
};

Token *tokenize_file(char *path);

#endif /* ABC_H */
