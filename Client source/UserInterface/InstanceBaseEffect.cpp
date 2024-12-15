// Ara - Search 


void CInstanceBase::UpdateTextTailLevel(DWORD level)
{
	//static D3DXCOLOR s_kLevelColor = D3DXCOLOR(119.0f/255.0f, 246.0f/255.0f, 168.0f/255.0f, 1.0f);
	static D3DXCOLOR s_kLevelColor = D3DXCOLOR(152.0f/255.0f, 255.0f/255.0f, 51.0f/255.0f, 1.0f);

	char szText[256];
	sprintf(szText, "Lv %d", level);
	CPythonTextTail::Instance().AttachLevel(GetVirtualID(), szText, s_kLevelColor);
}


// Değiştir - Replace


void CInstanceBase::UpdateTextTailLevel(DWORD level)
{
	if (IsPC())
	{
		static D3DXCOLOR s_kLevelColor = D3DXCOLOR(152.0f/255.0f, 255.0f/255.0f, 51.0f/255.0f, 1.0f);

		char szText[256];
		sprintf(szText, "Lv.%d", level);
		CPythonTextTail::Instance().AttachLevel(GetVirtualID(), szText, s_kLevelColor);
	}
}

/*
	Iletisim - Contct https://forum.oynaylim.com/