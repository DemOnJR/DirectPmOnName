// Search 
int len = snprintf(chatbuf, sizeof(chatbuf), "%s : %s", ch->GetName(), buf);

// Change it like this
int len = snprintf(chatbuf, sizeof(chatbuf), "|Hmsg:%s|h%s|h|r : %s", ch->GetName(), ch->GetName(), buf);

// To understand what i changed/added here it is:
"|Hmsg:%s|h%s|h|r", ch->GetName(), ch->GetName()
