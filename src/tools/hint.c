// hint.c

#include "tools/hint.h"
#include "tools/color.h"
#include <stdio.h>

// all kinds of visual hints
// 栈空间很小，这些字符串以后也会经常用到，所以选择放在静态区
// 这些字符串只在本模块内发挥作用，外部模块只需要调用本模块头文件提供的接口*****Message
//上述设计其实目的只有一个，加强模块的抽象程度与封装程度。外部模块除非调用本模块对外声明好
// 的接口这一种途径以外，不应当有任何其他途径来实用本模块内定义的内容。
static const char* BANNER = "\
\t__          ___           _          __  __            _        _       _\n\
\t\\ \\        / / |         | |        |  \\/  |          | |      | |     | |\n\
\t \\ \\  /\\  / /| |__   __ _| | ___    | \\  / | __ _ _ __| | _____| |_    | |\n\
\t  \\ \\/  \\/ / | '_ \\ / _` | |/ _ \\   | |\\/| |/ _` | '__| |/ / _ \\ __|   | |\n\
\t   \\  /\\  /  | | | | (_| | |  __/   | |  | | (_| | |  |   <  __/ |_    |_|\n\
\t    \\/  \\/   |_| |_|\\__,_|_|\\___|   |_|  |_|\\__,_|_|  |_|\\_\\___|\\__|   (_)\n\
";

static const char* SUCCESS = "\t\t*** Operation Successful! ***";
static const char* FAILURE = "\t\t*** Operation Failed! ***";
static const char* ILLEGAL = "\t\t*** Illegal Input! ***";
static const char* LOADING = "\t\t*** Loading ... ***";
static const char* EXITING = "\t\t*** Exiting ... ***";

static const char* INVALID = "\
\t  _____                           _   _       _   _\n\
\t |_   _|                         | | (_)     | | | |\n\
\t   | |    _ __   __   __   __ _  | |  _    __| | | |\n\
\t   | |   | '_ \\  \\ \\ / /  / _` | | | | |  / _` | | |\n\
\t  _| |_  | | | |  \\ V /  | (_| | | | | | | (_| | |_|\n\
\t |_____| |_| |_|   \\_/    \\__,_| |_| |_|  \\__,_| (_)\n\
";

void welcomeMessage() {
    printf("\n%s%sWelcome to%s\n", BOLD, FRONT_RED, RESET);
    printf("%s%s%s%s\n", FRONT_BLUE, BOLD, BANNER, RESET);
    printf("%sThis is WinterCode Project for C-Beginners.%s\n\n", FRONT_PURPLR, RESET);
}

void successMessage() { printf("\n%s%s%s\n\n", FRONT_GREEN, SUCCESS, RESET); }
void failureMessage() { printf("\n%s%s%s\a\n\n", FRONT_RED, FAILURE, RESET); }
void illegalMessage() { printf("\n%s%s%s\a\n\n", FRONT_RED, ILLEGAL, RESET); }
void loadingMessage() { printf("\n%s%s%s\n\n", FRONT_BLUE, LOADING, RESET); }
void exitingMessage() { printf("\n%s%s%s\n\n", FRONT_RED, EXITING, RESET); }
void invalidMessage() { 
    printf("\n%s%s%s\n\n", FRONT_RED, INVALID, RESET);
    printf("\n%s%sThis Function is Waiting For you to Implement ...%s\n\n", \
FRONT_RED, BOLD, RESET);
}
