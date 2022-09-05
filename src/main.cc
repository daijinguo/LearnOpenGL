
#define PROJ_INSTANCE(use, name, argc, argv)                                                                           \
	do {                                                                                                               \
		if ((use) == false)                                                                                            \
			break;                                                                                                     \
		extern int main_##name(int, char *[]);                                                                         \
		return main_##name(argc, argv);                                                                                \
	} while (false)

int main(int argc, char *argv[])
{
	PROJ_INSTANCE(false, 1_1, argc, argv);
	PROJ_INSTANCE(false, 2_1, argc, argv);
	PROJ_INSTANCE(true, 2_2, argc, argv);

	return 0;
}
