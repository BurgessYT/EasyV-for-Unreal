#include "BluBlueprintFunctionLibrary.h"
#include "BluJsonObj.h"


UBluBlueprintFunctionLibrary::UBluBlueprintFunctionLibrary(const class FObjectInitializer& PCIP)
: Super(PCIP)
{

}

UBluEye* UBluBlueprintFunctionLibrary::NewBluEye(UObject* WorldContextObject)
{

	UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull);
	UBluEye* Eye = Cast<UBluEye>(StaticConstructObject_Internal(UBluEye::StaticClass()));

	return Eye;

}

UBluJsonObj* UBluBlueprintFunctionLibrary::NewBluJSONObj(UObject* WorldContextObject)
{

	UBluJsonObj* JsonObj = NewObject<UBluJsonObj>(GetTransientPackage(), UBluJsonObj::StaticClass());
	JsonObj->Init("{}");
	
	return JsonObj;

}

void UBluBlueprintFunctionLibrary::RunBluEventLoop()
{
	BluManager::DoBluMessageLoop();
}

UBluJsonObj* UBluBlueprintFunctionLibrary::ParseJSON(const FString& JSONString)
{

	UBluJsonObj* JsonObj = NewObject<UBluJsonObj>(GetTransientPackage(), UBluJsonObj::StaticClass());
	JsonObj->Init(JSONString);

	return JsonObj;

}

FString UBluBlueprintFunctionLibrary::JSONToString(UBluJsonObj *ObjectToParse)
{

	// Create the JSON reader
	FString ReturnString;
	TSharedRef<TJsonWriter<TCHAR>> writer = TJsonWriterFactory<TCHAR>::Create(&ReturnString);

	// Convert the JSON object to an FString
	FJsonSerializer::Serialize(ObjectToParse->GetJsonObj().ToSharedRef(), writer);

	return ReturnString;

}

FCharacterEvent UBluBlueprintFunctionLibrary::ToKeyEvent(FKey Key)
{
	FModifierKeysState KeyState;

	FCharacterEvent CharEvent = FCharacterEvent(Key.GetFName().ToString().ToUpper().GetCharArray()[0], KeyState, 0, 0);

	return CharEvent;
}



FString UBluBlueprintFunctionLibrary::GameRootDirectory()
{
	return FPaths::ConvertRelativePathToFull(FPaths::ProjectDir());
}


bool UBluBlueprintFunctionLibrary::HasSubstring(const FString& SearchIn, const FString& Substring, ESearchCase::Type SearchCase /*= ESearchCase::IgnoreCase*/, ESearchDir::Type SearchDir /*= ESearchDir::FromStart*/)
{
	return SearchIn.Contains(Substring, SearchCase, SearchDir);
}