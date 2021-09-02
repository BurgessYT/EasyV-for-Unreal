#pragma once

#include "BluJsonObj.generated.h"

UCLASS(ClassGroup = Blu, Blueprintable)
class BLU_API UBluJsonObj : public UObject
{

	GENERATED_UCLASS_BODY()

public:

	//// Get Values ////

	/* Gets a String Value for the key given */
	UFUNCTION(BlueprintCallable, Category = "Blu")
	FString GetStringValue(const FString &Index);

	/* Gets a Numerical Value for the key given */
	UFUNCTION(BlueprintCallable, Category = "Blu")
	float GetNumValue(const FString &Index);

	/* Gets a Boolean Value for the key given */
	UFUNCTION(BlueprintCallable, Category = "Blu")
	bool GetBooleanValue(const FString &Index);

	/* Gets a Nested JSON Object Value for the key given */
	UFUNCTION(BlueprintCallable, Category = "Blu")
	UBluJsonObj* GetNestedObject(const FString &Index);

	//// Get Array Values ////

	/* Gets an Array of floats or numbers for the key given */
	UFUNCTION(BlueprintCallable, Category = "Blu")
	TArray<float> GetNumArray(const FString &Index);

	/* Gets an Array of booleans for the key given */
	UFUNCTION(BlueprintCallable, Category = "Blu")
	TArray<bool> GetBooleanArray(const FString &Index);

	/* Gets an Array of strings for the key given */
	UFUNCTION(BlueprintCallable, Category = "Blu")
	TArray<FString> GetStringArray(const FString &Index);

	//// Set Values ////

	/* Sets or Adds a String Value to this JSON object */
	UFUNCTION(BlueprintCallable, Category = "Blu")
	void SetStringValue(const FString &Value, const FString &Index);

	/* Sets or Adds a Numerical Value to this JSON object */
	UFUNCTION(BlueprintCallable, Category = "Blu")
	void SetNumValue(const float Value, const FString &Index);

	/* Sets or Adds a Boolean Value to this JSON object */
	UFUNCTION(BlueprintCallable, Category = "Blu")
	void SetBooleanValue(const bool Value, const FString &Index);

	/* Sets or Adds a Nested JSON Object Value to this JSON object */
	UFUNCTION(BlueprintCallable, Category = "Blu")
	void SetNestedObject(UBluJsonObj *Value, const FString &Index);

	void Init(const FString &dataString);
	void SetJsonObj(TSharedPtr<FJsonObject> NewJson);
	
	TSharedPtr<FJsonObject> GetJsonObj();
	
	// CUSTOM ADDED START
	UFUNCTION(BlueprintCallable, Category = "Blu")
	void SetStringArray(const TArray<FString> &Value, const FString &Index);

	UFUNCTION(BlueprintCallable, Category = "Blu")
	void SetBooleanArray(const TArray<bool> &Value, const FString &Index);

	UFUNCTION(BlueprintCallable, Category = "Blu")
	void SetNumArray(const TArray<float> &Value, const FString &Index);

	UFUNCTION(BlueprintCallable, Category = "Blu")
	void SetObjectArray(const TArray<UBluJsonObj*> &Value, const FString &Index);
	// CUSTOM ADDED END

private:

	FString StrData;
	TSharedPtr<FJsonObject> JsonParsed;

	void DoParseJson(TSharedRef<TJsonReader<TCHAR>> JsonReader);
};