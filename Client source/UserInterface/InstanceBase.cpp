// Ara - Search 

void CInstanceBase::SetAlignment(short sAlignment)
{
	m_sAlignment = sAlignment;
	RefreshTextTailTitle();
}

// Altına Ekle - Add Under

void CInstanceBase::SetLevel(DWORD level)
{
	m_dwLevel = level;
	UpdateTextTailLevel(m_dwLevel);
}

/*
	Iletisim - Contct https://forum.oynaylim.com/