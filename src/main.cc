
#define PROJ_INSTANCE(use, name, argc, argv)  \
    do {                                      \
        if( (use) == false ) break;           \
        extern int main_##name(int, char*[]); \
        return main_##name(argc, argv);       \
    } while(false)

int main(int argc, char *argv[]) {
    PROJ_INSTANCE(true, 1_1, argc, argv);

    return 0;
}