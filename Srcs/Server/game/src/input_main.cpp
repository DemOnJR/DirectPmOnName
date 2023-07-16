// Search 
int len = snprintf(chatbuf, sizeof(chatbuf), "%s : %s", ch->GetName(), buf);

// Change it like this
int len = snprintf(chatbuf, sizeof(chatbuf), "|Hmsg:%s|h%s|h|r : %s", ch->GetName(), ch->GetName(), buf);

// What you need to change is this:
"|Hmsg:%s|h%s|h|r", ch->GetName(), ch->GetName()