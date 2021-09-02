// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLU_BluTypes_generated_h
#error "BluTypes.generated.h already included, missing '#pragma once' in BluTypes.h"
#endif
#define BLU_BluTypes_generated_h

#define EasyVTest426_Plugins_BLUI_Source_Blu_Public_BluTypes_h_63_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBluEyeSettings_Statics; \
	BLU_API static class UScriptStruct* StaticStruct();


template<> BLU_API UScriptStruct* StaticStruct<struct FBluEyeSettings>();

#define EasyVTest426_Plugins_BLUI_Source_Blu_Public_BluTypes_h_95_DELEGATE \
struct _Script_Blu_eventDownloadUpdatedSignature_Parms \
{ \
	FString url; \
	float percentage; \
}; \
static inline void FDownloadUpdatedSignature_DelegateWrapper(const FMulticastScriptDelegate& DownloadUpdatedSignature, const FString& url, float percentage) \
{ \
	_Script_Blu_eventDownloadUpdatedSignature_Parms Parms; \
	Parms.url=url; \
	Parms.percentage=percentage; \
	DownloadUpdatedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define EasyVTest426_Plugins_BLUI_Source_Blu_Public_BluTypes_h_94_DELEGATE \
struct _Script_Blu_eventDownloadCompleteSignature_Parms \
{ \
	FString url; \
}; \
static inline void FDownloadCompleteSignature_DelegateWrapper(const FMulticastScriptDelegate& DownloadCompleteSignature, const FString& url) \
{ \
	_Script_Blu_eventDownloadCompleteSignature_Parms Parms; \
	Parms.url=url; \
	DownloadCompleteSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define EasyVTest426_Plugins_BLUI_Source_Blu_Public_BluTypes_h_93_DELEGATE \
struct _Script_Blu_eventLogEvent_Parms \
{ \
	FString LogText; \
}; \
static inline void FLogEvent_DelegateWrapper(const FMulticastScriptDelegate& LogEvent, const FString& LogText) \
{ \
	_Script_Blu_eventLogEvent_Parms Parms; \
	Parms.LogText=LogText; \
	LogEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define EasyVTest426_Plugins_BLUI_Source_Blu_Public_BluTypes_h_92_DELEGATE \
struct _Script_Blu_eventScriptEvent_Parms \
{ \
	FString EventName; \
	FString EventMessage; \
}; \
static inline void FScriptEvent_DelegateWrapper(const FMulticastScriptDelegate& ScriptEvent, const FString& EventName, const FString& EventMessage) \
{ \
	_Script_Blu_eventScriptEvent_Parms Parms; \
	Parms.EventName=EventName; \
	Parms.EventMessage=EventMessage; \
	ScriptEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EasyVTest426_Plugins_BLUI_Source_Blu_Public_BluTypes_h


#define FOREACH_ENUM_EBLUSPECIALKEYS(op) \
	op(backspacekey) \
	op(tabkey) \
	op(enterkey) \
	op(pausekey) \
	op(escapekey) \
	op(pageupkey) \
	op(pagedownkey) \
	op(endkey) \
	op(homekey) \
	op(leftarrowkey) \
	op(rightarrowkey) \
	op(downarrowkey) \
	op(uparrowkey) \
	op(insertkey) \
	op(deletekey) \
	op(numlockkey) \
	op(scrolllockkey) \
	op(unknownkey) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
