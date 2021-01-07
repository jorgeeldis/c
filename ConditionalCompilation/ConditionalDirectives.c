#define LEVEL 4

int main()
{
#if LEVEL > 6
    printf("6\n")
#elif LEVEL > 5
        printf("5\n")
#elif LEVEL > 4
         printf("4\n")
#else
         printf("idk\n");
#endif

return 0;
}