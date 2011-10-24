#pragma once
#include "Utilities\IniInterface.h"

enum NetplayMode : int
{
	ConnectMode,
	HostMode,
	ObserveMode
};

struct NetplaySettings
{
	wxString Username;
	uint LocalPort;
	NetplayMode Mode;
	uint HostPort;
	wxString HostAddress;
	bool SaveReplay;
	bool ReadonlyMemcard;
	bool FinetuneDelay;
	
	NetplaySettings();
	void LoadSave( IniInterface& conf );
	void SanityCheck();
};