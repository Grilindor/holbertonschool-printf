#ifndef print_type.h
#define print_type.h
void print_string(va_list chec_type);
void print_1_c(va_list chec_type);
void print_int(va_list chec_type);
void print_d(va_list chec_type);
nt _printf(const char *format, ...);
int _putchar(char c);
typedef struct print_type
{
        char *the_format_in_char;
        void (*Funcp)();
} array;
#endif /* print_type.h */
