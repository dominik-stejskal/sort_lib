#include <stdlib.h>
#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

// --- ANSI ESCAPE SEQUENCES ---
// Reset
#define RESET           "\033[0m"

// Style
#define BOLD            "\033[1m"
#define UNDERLINE       "\033[4m"
#define INVERT          "\033[7m"

// Standard text colors
#define T_RED           "\033[31m"
#define T_GREEN         "\033[32m"
#define T_YELLOW        "\033[33m"
#define T_BLUE          "\033[34m"
#define T_MAGENTA       "\033[35m"
#define T_CYAN          "\033[36m"
#define T_WHITE         "\033[37m"

// Bright text colors
#define T_B_RED         "\033[91m"
#define T_B_GREEN       "\033[92m"
#define T_B_YELLOW      "\033[93m"
#define T_B_BLUE        "\033[94m"
#define T_B_MAGENTA     "\033[95m"
#define T_B_CYAN        "\033[96m"
#define T_B_WHITE       "\033[97m"

// Standard background colors
#define B_RED           "\033[41m"
#define B_GREEN         "\033[42m"
#define B_YELLOW        "\033[43m"
#define B_BLUE          "\033[44m"
#define B_MAGENTA       "\033[45m"
#define B_CYAN          "\033[46m"
#define B_WHITE         "\033[47m"

// Bright background colors
#define B_B_RED         "\033[101m"
#define B_B_GREEN       "\033[102m"
#define B_B_YELLOW      "\033[103m"
#define B_B_BLUE        "\033[104m"
#define B_B_MAGENTA     "\033[105m"
#define B_B_CYAN        "\033[106m"
#define B_B_WHITE       "\033[107m"


void init_terminal() {
    #ifdef _WIN32
    // Windows needs to explicitly enable ANSI support
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    DWORD dwMode = 0;
    if (GetConsoleMode(hOut, &dwMode)) {
        SetConsoleMode(hOut, dwMode | ENABLE_VIRTUAL_TERMINAL_PROCESSING);
    }
    #else
    // On linux this function does nothing
    // If you use Windows, please switch to Linux and have a better day!
    #endif
}

void pause_console()
{
    printf(T_B_CYAN "Press ENTER to continue..." RESET);
    int c, i = 0;
    while ((c = getchar()) != '\n' && c != EOF)
        i = 1;
    if(i == 1)
        getchar();
}

void clrscr()
{
    #ifdef _WIN32
    system("cls");
    #else
    printf("\033[2J\033[H");
    #endif
}

int menu()
{
    printf(BOLD T_BLUE "Please enter your choice:\n" RESET);
    printf("-------------------------\n");
    printf("Selection Sort .........1\n");
    printf("Insertion Sort .........2\n");
    printf("Insertion Sort Begin ...3\n");
    printf("Insertion Sort End .....4\n");
    printf("Bubble Sort ............5\n");
    printf("Ripple Sort ............6\n");
    printf("Shaker Sort ............7\n");
    printf("Quick Sort .............8\n");
    printf("Quick Sort DNF .........9\n");
    printf("Merge Sort ............10\n");
    printf("-------------------------\n");
    printf(T_RED "End of program .........0\n" RESET);
}

int main()
{
    int choice = 1;
    while(choice > 0 && choice <= 8)
    {
        choice = menu();
    }
    return 0;
}
