// Search
char chatbuf[CHAT_MAX_LEN + 1];

// Change the bellow rows like this

#ifdef ENABLE_CHAT_COLOR_SYSTEM
	static const char* colorbuf[] = {"|cFFffa200|H|h[Staff]|h|r", "|cFFff0000|H|h[Shinsoo]|h|r", "|cFFffc700|H|h[Chunjo]|h|r", "|cFF000bff|H|h[Jinno]|h|r"};
#else
	static const char* colorbuf[] = {"[Staff]", "[Shinsoo]", "[Chunjo]", "[Jinno]"};
#endif

#ifdef ENABLE_PM_ON_NAME
	int len = snprintf(chatbuf, sizeof(chatbuf), "%s |Hmsg:%s|h%s|h|r : %s", colorbuf[ch->IsGM() ? 0 : MINMAX(0, ch->GetEmpire(), 3)], ch->GetName(), ch->GetName(), buf);
#else
	int len = snprintf(chatbuf, sizeof(chatbuf), "%s %s : %s", (ch->IsGM()?colorbuf[0]:colorbuf[MINMAX(0, ch->GetEmpire(), 3)]), ch->GetName(), buf);
#endif

// Eample

		return iExtraLen;
	}
	// @fixme133 end

	char chatbuf[CHAT_MAX_LEN + 1];

#ifdef ENABLE_CHAT_COLOR_SYSTEM
	static const char* colorbuf[] = {"|cFFffa200|H|h[Staff]|h|r", "|cFFff0000|H|h[Shinsoo]|h|r", "|cFFffc700|H|h[Chunjo]|h|r", "|cFF000bff|H|h[Jinno]|h|r"};
#else
	static const char* colorbuf[] = {"[Staff]", "[Shinsoo]", "[Chunjo]", "[Jinno]"};
#endif

#ifdef ENABLE_PM_ON_NAME
	int len = snprintf(chatbuf, sizeof(chatbuf), "%s |Hmsg:%s|h%s|h|r : %s", colorbuf[ch->IsGM() ? 0 : MINMAX(0, ch->GetEmpire(), 3)], ch->GetName(), ch->GetName(), buf);
#else
	int len = snprintf(chatbuf, sizeof(chatbuf), "%s %s : %s", (ch->IsGM()?colorbuf[0]:colorbuf[MINMAX(0, ch->GetEmpire(), 3)]), ch->GetName(), buf);
#endif

	if (CHAT_TYPE_SHOUT == pinfo->type)
	{
		LogManager::instance().ShoutLog(g_bChannel, ch->GetEmpire(), chatbuf);
	}