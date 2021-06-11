#pragma once

#include "CoreMinimal.h"
#include "BluTypes.generated.h"

struct FTickEventLoopData
{
	FDelegateHandle DelegateHandle;
	int32 EyeCount;
	bool bShouldTickEventLoop;

	FTickEventLoopData()
	{
		DelegateHandle = FDelegateHandle();
		EyeCount = 0;
		bShouldTickEventLoop = true;
	}
};

struct FBluTextureParams
{
	// Pointer to our Texture's resource
	FTexture2DResource* Texture2DResource;
};

struct FUpdateTextureRegionsData
{
	FTexture2DResource* Texture2DResource;
	uint32 NumRegions;
	FUpdateTextureRegion2D* Regions;
	uint32 SrcPitch;
	uint32 SrcBpp;
	TArray<uint8> SrcData;
};

UENUM(BlueprintType)
enum EBluSpecialKeys
{
	backspacekey = 8 UMETA(DisplayName = "Backspace"),
	tabkey = 9 UMETA(DisplayName = "Tab"),
	enterkey = 13 UMETA(DisplayName = "Enter"),
	pausekey = 19 UMETA(DisplayName = "Pause"),
	escapekey = 27 UMETA(DisplayName = "Escape"),
	pageupkey = 33 UMETA(DisplayName = "Page Up"),
	pagedownkey = 34 UMETA(DisplayName = "Page Down"),
	endkey = 35 UMETA(DisplayName = "End"),
	homekey = 36 UMETA(DisplayName = "Home"),
	leftarrowkey = 37 UMETA(DisplayName = "Left Arrow"),
	rightarrowkey = 39 UMETA(DisplayName = "Right Arrow"),
	downarrowkey = 40 UMETA(DisplayName = "Down Arrow"),
	uparrowkey = 38 UMETA(DisplayName = "Up Arrow"),
	insertkey = 45 UMETA(DisplayName = "Insert"),
	deletekey = 46 UMETA(DisplayName = "Delete"),
	numlockkey = 144 UMETA(DisplayName = "Num Lock"),
	scrolllockkey = 145 UMETA(DisplayName = "Scroll Lock"),
	unknownkey = 0,
};


USTRUCT(BlueprintType)
struct FBluEyeSettings
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BluSettings")
	float FrameRate;

	/** Should this be rendered in game to be transparent? */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Blu")
	bool bIsTransparent;

	/** Width of the view resolution */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Blu")
	int32 Width;

	/** Height of the view resolution */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Blu")
	int32 Height;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Blu")
	bool bEnableWebGL;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Blu")
	bool bAudioMuted;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Blu")
	bool bAutoPlayEnabled;

	FBluEyeSettings();
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FScriptEvent, const FString&, EventName, const FString&, EventMessage);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLogEvent, const FString&, LogText);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDownloadCompleteSignature, FString, url);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDownloadUpdatedSignature, FString, url, float, percentage);
//DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDownloadComplete);