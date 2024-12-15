// Game-Db Source/Server/game/src/packet.h

// Ara - Search

typedef struct packet_update_char

// Kod blogunun içinde bul - Find in code block

	short	sAlignment;

// Altina ekle - add under

	DWORD	dwLevel;

// Game-Db Source/Server/game/src/char.cpp

// Ara - Search

void CHARACTER::UpdatePacket()

// Kod blogunun içinde bul - Find in code block

	pack.sAlignment	= m_iAlignment / 10;

// Altina ekle - add under

	pack.dwLevel	= GetLevel();

// Client Source/source/UserInterface/Packet.h

// Ara - Search

typedef struct packet_update_char

// Kod blogunun içinde bul - Find in code block

	short		sAlignment;

// Altina ekle - add under

	DWORD		dwLevel;

// Client Source/source/UserInterface/PythonNetworkStreamPhaseGameActor.cpp
// Ara - Search

bool CPythonNetworkStream::RecvCharacterUpdatePacket()

// Kod blogunun içinde bul - Find in code block

	kNetUpdateActorData.m_sAlignment=chrUpdatePacket.sAlignment;

// Altina ekle - add under

	kNetUpdateActorData.m_dwLevel=chrUpdatePacket.dwLevel;

// Client Source/source/UserInterface/NetworkActorManager.cpp

// Ara - Search

void CNetworkActorManager::UpdateActor(const SNetworkUpdateActorData& c_rkNetUpdateActorData)

// Kod blogunun içinde bul - Find in code block

		pkInstFind->SetAlignment(c_rkNetUpdateActorData.m_sAlignment);

// Altina ekle - add under

		pkInstFind->SetLevel(c_rkNetUpdateActorData.m_dwLevel);

// Client Source/source/UserInterface/NetworkActorManager.h

// Ara - Search

struct SNetworkUpdateActorData

// Kod blogunun içinde bul - Find in code block

	short m_sAlignment;

// Altina ekle - add under

	DWORD m_dwLevel;

// Client Source/source/UserInterface/InstanceBase.cpp

// Ara - Search

void CInstanceBase::SetAlignment(short sAlignment)
{
	m_sAlignment = sAlignment;
	RefreshTextTailTitle();
}

// Altina ekle - add under

void CInstanceBase::SetLevel(DWORD level)
{
	m_dwLevel = level;
	UpdateTextTailLevel(m_dwLevel);
}

// Client Source/source/UserInterface/InstanceBaseEffect.cpp

// Ara - Search

void CInstanceBase::UpdateTextTailLevel(DWORD level)
{
	//static D3DXCOLOR s_kLevelColor = D3DXCOLOR(119.0f/255.0f, 246.0f/255.0f, 168.0f/255.0f, 1.0f);
	static D3DXCOLOR s_kLevelColor = D3DXCOLOR(152.0f/255.0f, 255.0f/255.0f, 51.0f/255.0f, 1.0f);

	char szText[256];
	sprintf(szText, "Lv %d", level);
	CPythonTextTail::Instance().AttachLevel(GetVirtualID(), szText, s_kLevelColor);
}

// Degistir - replace

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

// Client Source/source/UserInterface/InstanceBase.h

// Ara - Search

		void					SetAlignment(short sAlignment);

// Altina ekle - add under

		void					SetLevel(DWORD level);
		


/*
	Iletisim - Contct https://forum.oynaylim.com/ - Contct https://forum.oynaylim.com/
