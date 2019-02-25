sigma-0: sigma-0.c
	clang -fsanitize=signed-integer-overflow -fsanitize=undefined -ggdb3 -O0 -std=c11 -Wall -Werror -Wextra -Wno-sign-compare -Wshadow -Wno-deprecated-declarations    sigma-0.c  -lcrypt -lcs50 -lm -o sigma-0
struct: struct.c
	clang -fsanitize=signed-integer-overflow -fsanitize=undefined -ggdb3 -O0 -std=c11 -Wall -Werror -Wextra -Wno-sign-compare -Wshadow -Wno-deprecated-declarations    struct.c  -lcrypt -lcs50 -lm -o struct
pointers: pointers.c
	clang -fsanitize=signed-integer-overflow -fsanitize=undefined -ggdb3 -O0 -std=c11 -Wall -Werror -Wextra -Wno-sign-compare -Wshadow  -Wno-deprecated-declarations  pointers.c  -lcrypt -lcs50 -lm -o pointers
compare: compare.c
	clang -fsanitize=signed-integer-overflow -fsanitize=undefined -ggdb3 -O0 -std=c11 -Wall -Werror -Wextra -Wno-sign-compare -Wshadow  -Wno-deprecated-declarations  compare.c  -lcrypt -lcs50 -lm -o compare