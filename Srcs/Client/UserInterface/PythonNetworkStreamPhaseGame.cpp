// Search
case CHAT_TYPE_WHISPER:

// Under

char * p = strchr(buf, ':');

// Add

#ifdef ENABLE_PM_ON_NAME
				if (p != NULL) {
					p = strchr(p + 1, ':');
				}
#endif

// Example

    case CHAT_TYPE_WHISPER:
			{
				char * p = strchr(buf, ':');

#ifdef ENABLE_PM_ON_NAME
				if (p != NULL) {
					p = strchr(p + 1, ':');
				}
#endif

				if (p)
					p += 2;
				else
					p = buf;

				DWORD dwEmoticon;

				if (ParseEmoticon(p, &dwEmoticon))
				{
					pkInstChatter->SetEmoticon(dwEmoticon);
					return true;
				}
				else
				{
					if (gs_bEmpireLanuageEnable)
					{
						CInstanceBase* pkInstMain=rkChrMgr.GetMainInstancePtr();
						if (pkInstMain)
							if (!pkInstMain->IsSameEmpire(*pkInstChatter))
								__ConvertEmpireText(pkInstChatter->GetEmpireID(), p);
					}

					if (m_isEnableChatInsultFilter)
					{
						if (false == pkInstChatter->IsNPC() && false == pkInstChatter->IsEnemy())
						{
							__FilterInsult(p, strlen(p));
						}
					}

					_snprintf(line, sizeof(line), "%s", p);
				}
			}
			break;