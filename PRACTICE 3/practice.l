variable [a-zA-z_]{1}[a-zA-Z0-9_]*
integer \-?[0]{1}|(\-?)[1-9]{1}[0-9]*
decimal (\-?)((0?\.[0-9]*[1-9][0-9]*)|(([1-9]{1}[0-9]*)((\.([0-9]*[1-9][0-9]*))|(\.0)))|(0\.0){1})
pow [p|P][o|O][w|W]\(({integer}|{decimal}),({integer}|{decimal})\)
pow1 ({decimal}|{integer})\^({decimal}|{integer})
mod mod\(({integer}|{decimal}),({integer}|{decimal})\)
cv [a-zA-Z0-9@\.]*
may [A-Z]
min [a-z]
chr [\.\@]
mMc {min}{cv}{may}{cv}{chr}
mcM {min}{cv}{chr}{cv}{may}
Mmc {may}{cv}{min}{cv}{chr}
Mcm {may}{cv}{chr}{cv}{min}
cmM {chr}{cv}{min}{cv}{may}
cMm {chr}{cv}{may}{cv}{min}
pass {cv}({Mmc}|{Mcm}|{mMc}|{mcM}|{cMm}|{cmM}){cv}
%%
{variable} {printf("variable ");}
{integer} {printf("integer_number ");}
{decimal} {printf("decimal_number ");}
{pow} {printf("potency ");}
{pow1} {printf("potency ");}
{mod} {printf("module ");}
\= {printf("equal ");}
\+ {printf("sum ");}
\- {printf("minus ");}
\* {printf("multiply ");}
\/ {printf("divition ");}
{pass} {printf("pass ");}


