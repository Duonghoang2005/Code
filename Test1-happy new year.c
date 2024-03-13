#include <stdio.h>
#include <time.h>
int main() {
time_t now = time(NULL);
struct tm* local = localtime(&now);
printf("Chuc mung nam moi", local->tm_year + 1900);
return 0;
}
