// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
struct FCharacterEvent;
struct FKeyEvent;
struct FVector2D;
class UMaterialInterface;
class UBluEye;
#ifdef BLU_BluEye_generated_h
#error "BluEye.generated.h already included, missing '#pragma once' in BluEye.h"
#endif
#define BLU_BluEye_generated_h

#define EasyVTest426_Plugins_BLUI_Source_Blu_Public_BluEye_h_12_SPARSE_DATA
#define EasyVTest426_Plugins_BLUI_Source_Blu_Public_BluEye_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetShouldTickEventLoop); \
	DECLARE_FUNCTION(execResizeBrowser); \
	DECLARE_FUNCTION(execNavForward); \
	DECLARE_FUNCTION(execNavBack); \
	DECLARE_FUNCTION(execReloadBrowser); \
	DECLARE_FUNCTION(execIsBrowserLoading); \
	DECLARE_FUNCTION(execCloseBrowser); \
	DECLARE_FUNCTION(execSpecialKeyPress); \
	DECLARE_FUNCTION(execRawCharKeyPress); \
	DECLARE_FUNCTION(execCharKeyDownUp); \
	DECLARE_FUNCTION(execCharKeyInput); \
	DECLARE_FUNCTION(execKeyPress); \
	DECLARE_FUNCTION(execKeyUp); \
	DECLARE_FUNCTION(execKeyDown); \
	DECLARE_FUNCTION(execTriggerMouseWheel); \
	DECLARE_FUNCTION(execTriggerMouseMove); \
	DECLARE_FUNCTION(execTriggerRightMouseUp); \
	DECLARE_FUNCTION(execTriggerLeftMouseUp); \
	DECLARE_FUNCTION(execTriggerRightMouseDown); \
	DECLARE_FUNCTION(execTriggerLeftMouseDown); \
	DECLARE_FUNCTION(execTriggerRightClick); \
	DECLARE_FUNCTION(execTriggerLeftClick); \
	DECLARE_FUNCTION(execDownloadFile); \
	DECLARE_FUNCTION(execGetZoom); \
	DECLARE_FUNCTION(execSetZoom); \
	DECLARE_FUNCTION(execGetCurrentURL); \
	DECLARE_FUNCTION(execLoadURL); \
	DECLARE_FUNCTION(execExecuteJSMethodWithParams); \
	DECLARE_FUNCTION(execExecuteJS); \
	DECLARE_FUNCTION(execGetTexture); \
	DECLARE_FUNCTION(execSetProperties); \
	DECLARE_FUNCTION(execInit);


#define EasyVTest426_Plugins_BLUI_Source_Blu_Public_BluEye_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetShouldTickEventLoop); \
	DECLARE_FUNCTION(execResizeBrowser); \
	DECLARE_FUNCTION(execNavForward); \
	DECLARE_FUNCTION(execNavBack); \
	DECLARE_FUNCTION(execReloadBrowser); \
	DECLARE_FUNCTION(execIsBrowserLoading); \
	DECLARE_FUNCTION(execCloseBrowser); \
	DECLARE_FUNCTION(execSpecialKeyPress); \
	DECLARE_FUNCTION(execRawCharKeyPress); \
	DECLARE_FUNCTION(execCharKeyDownUp); \
	DECLARE_FUNCTION(execCharKeyInput); \
	DECLARE_FUNCTION(execKeyPress); \
	DECLARE_FUNCTION(execKeyUp); \
	DECLARE_FUNCTION(execKeyDown); \
	DECLARE_FUNCTION(execTriggerMouseWheel); \
	DECLARE_FUNCTION(execTriggerMouseMove); \
	DECLARE_FUNCTION(execTriggerRightMouseUp); \
	DECLARE_FUNCTION(execTriggerLeftMouseUp); \
	DECLARE_FUNCTION(execTriggerRightMouseDown); \
	DECLARE_FUNCTION(execTriggerLeftMouseDown); \
	DECLARE_FUNCTION(execTriggerRightClick); \
	DECLARE_FUNCTION(execTriggerLeftClick); \
	DECLARE_FUNCTION(execDownloadFile); \
	DECLARE_FUNCTION(execGetZoom); \
	DECLARE_FUNCTION(execSetZoom); \
	DECLARE_FUNCTION(execGetCurrentURL); \
	DECLARE_FUNCTION(execLoadURL); \
	DECLARE_FUNCTION(execExecuteJSMethodWithParams); \
	DECLARE_FUNCTION(execExecuteJS); \
	DECLARE_FUNCTION(execGetTexture); \
	DECLARE_FUNCTION(execSetProperties); \
	DECLARE_FUNCTION(execInit);


#define EasyVTest426_Plugins_BLUI_Source_Blu_Public_BluEye_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBluEye(); \
	friend struct Z_Construct_UClass_UBluEye_Statics; \
public: \
	DECLARE_CLASS(UBluEye, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Blu"), NO_API) \
	DECLARE_SERIALIZER(UBluEye)


#define EasyVTest426_Plugins_BLUI_Source_Blu_Public_BluEye_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUBluEye(); \
	friend struct Z_Construct_UClass_UBluEye_Statics; \
public: \
	DECLARE_CLASS(UBluEye, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Blu"), NO_API) \
	DECLARE_SERIALIZER(UBluEye)


#define EasyVTest426_Plugins_BLUI_Source_Blu_Public_BluEye_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBluEye(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBluEye) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBluEye); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBluEye); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBluEye(UBluEye&&); \
	NO_API UBluEye(const UBluEye&); \
public:


#define EasyVTest426_Plugins_BLUI_Source_Blu_Public_BluEye_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBluEye(UBluEye&&); \
	NO_API UBluEye(const UBluEye&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBluEye); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBluEye); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBluEye)


#define EasyVTest426_Plugins_BLUI_Source_Blu_Public_BluEye_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Texture() { return STRUCT_OFFSET(UBluEye, Texture); }


#define EasyVTest426_Plugins_BLUI_Source_Blu_Public_BluEye_h_9_PROLOG
#define EasyVTest426_Plugins_BLUI_Source_Blu_Public_BluEye_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EasyVTest426_Plugins_BLUI_Source_Blu_Public_BluEye_h_12_PRIVATE_PROPERTY_OFFSET \
	EasyVTest426_Plugins_BLUI_Source_Blu_Public_BluEye_h_12_SPARSE_DATA \
	EasyVTest426_Plugins_BLUI_Source_Blu_Public_BluEye_h_12_RPC_WRAPPERS \
	EasyVTest426_Plugins_BLUI_Source_Blu_Public_BluEye_h_12_INCLASS \
	EasyVTest426_Plugins_BLUI_Source_Blu_Public_BluEye_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EasyVTest426_Plugins_BLUI_Source_Blu_Public_BluEye_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EasyVTest426_Plugins_BLUI_Source_Blu_Public_BluEye_h_12_PRIVATE_PROPERTY_OFFSET \
	EasyVTest426_Plugins_BLUI_Source_Blu_Public_BluEye_h_12_SPARSE_DATA \
	EasyVTest426_Plugins_BLUI_Source_Blu_Public_BluEye_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	EasyVTest426_Plugins_BLUI_Source_Blu_Public_BluEye_h_12_INCLASS_NO_PURE_DECLS \
	EasyVTest426_Plugins_BLUI_Source_Blu_Public_BluEye_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLU_API UClass* StaticClass<class UBluEye>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EasyVTest426_Plugins_BLUI_Source_Blu_Public_BluEye_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
