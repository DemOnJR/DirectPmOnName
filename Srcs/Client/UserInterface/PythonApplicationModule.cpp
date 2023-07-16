// Search
#ifdef ENABLE_COSTUME_SYSTEM
	PyModule_AddIntConstant(poModule, "ENABLE_COSTUME_SYSTEM", 1);
#else
	PyModule_AddIntConstant(poModule, "ENABLE_COSTUME_SYSTEM", 0);
#endif

// Add this bellow
#if defined(ENABLE_PM_ON_NAME)
	PyModule_AddIntConstant(poModule, "ENABLE_PM_ON_NAME", true);
#else
	PyModule_AddIntConstant(poModule, "ENABLE_PM_ON_NAME", false);
#endif