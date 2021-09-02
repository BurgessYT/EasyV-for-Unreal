#pragma once

#include "CEFInclude.h"

class BLU_API BluManager : public CefApp
{
public:

	BluManager();

	static void DoBluMessageLoop();
	static CefSettings Settings;
	static CefMainArgs MainArgs;
	static bool CPURenderSettings;
	static bool AutoPlay;

	virtual void OnBeforeCommandLineProcessing(const CefString& ProcessType,
			CefRefPtr< CefCommandLine > CommandLine) override;

	IMPLEMENT_REFCOUNTING(BluManager);
};

