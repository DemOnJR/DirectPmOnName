# Search

self.hyperlinkItemTooltip.SetHyperlinkItem(tokens)

# Add under it

			# Direct PM on Name
			elif app.ENABLE_PM_ON_NAME and "msg" == type and str(tokens[1]) != player.GetMainCharacterName():
				self.OpenWhisperDialog(str(tokens[1]))

#Example

	def MakeHyperlinkTooltip(self, hyperlink):
		tokens = hyperlink.split(":")
		if tokens and len(tokens):
			type = tokens[0]
			if "item" == type:
				self.hyperlinkItemTooltip.SetHyperlinkItem(tokens)
			# Direct PM on Name
			elif app.ENABLE_PM_ON_NAME and "msg" == type and str(tokens[1]) != player.GetMainCharacterName():
				self.OpenWhisperDialog(str(tokens[1]))
