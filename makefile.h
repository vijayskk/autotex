#include <stdio.h>

void maketext(char *string, char title[], char author[], char abstract[])
{
    char stemplate[] =
        "\\documentclass[10pt,letterpaper]{article}"
        "\\usepackage[utf8]{inputenc}"

        "\\begin{document}"

        "\\title{%s}"
        "\\author{%s}"
        "\\begin{abstract}"
        "%s"
        "\\end{abstract}"

        "\\maketitle"

        "\\end{document}";
    sprintf(string, stemplate, title,author,abstract);
}