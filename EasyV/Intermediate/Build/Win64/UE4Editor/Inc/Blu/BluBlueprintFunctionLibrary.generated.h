// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FKey;
struct FCharacterEvent;
class UBluJsonObj;
class UObject;
class UBluEye;
#ifdef BLU_BluBlueprintFunctionLibrary_generated_h
#error "BluBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in BluBlueprintFunctionLibrary.h"
#endif
#define BLU_BluBlueprintFunctionLibrary_generated_h

#define EasyVTest426_Plugins_BLUI_Source_Blu_Public_BluBlueprintFunctionLibrary_h_13_SPARSE_DATA
#define EasyVTest426_Plugins_BLUI_Source_Blu_Public_BluBlueprintFunctionLibrary_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHasSubstring); \
	DECLARE_FUNCTION(execGameRootDirectory); \
	DECLARE_FUNCTION(execToKeyEvent); \
	DECLARE_FUNCTION(execJSONToString); \
	DECLARE_FUNCTION(execParseJSON); \
	DECLARE_FUNCTION(execRunBluEventLoop); \
	DECLARE_FUNCTION(execNewBluJSONObj); \
	DECLARE_FUNCTION(execNewEasyVCore);


#define EasyVTest426_Plugins_BLUI_Source_Blu_Public_BluBlueprintFunctionLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHasSubstring); \
	DECLARE_FUNCTION(execGameRootDirectory); \
	DECLARE_FUNCTION(execToKeyEvent); \
	DECLARE_FUNCTION(execJSONToString); \
	DECLARE_FUNCTION(execParseJSON); \
	DECLARE_FUNCTION(execRunBluEventLoop); \
	DECLARE_FUNCTION(execNewBluJSONObj); \
	DECLARE_FUNCTION(execNewEasyVCore);


#define EasyVTest426_Plugins_BLUI_Source_Blu_Public_BluBlueprintFunctionLibrary_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBluBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UBluBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UBluBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Blu"), NO_API) \
	DECLARE_SERIALIZER(UBluBlueprintFunctionLibrary)


#define EasyVTest426_Plugins_BLUI_Source_Blu_Public_BluBlueprintFunctionLibrary_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUBluBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UBluBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UBluBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Blu"), NO_API) \
	DECLARE_SERIALIZER(UBluBlueprintFunctionLibrary)


#define EasyVTest426_Plugins_BLUI_Source_Blu_Public_BluBlueprintFunctionLibrary_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBluBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBluBlueprintFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBluBlueprintFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBluBlueprintFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBluBlueprintFunctionLibrary(UBluBlueprintFunctionLibrary&&); \
	NO_API UBluBlueprintFunctionLibrary(const UBluBlueprintFunctionLibrary&); \
public:


#define EasyVTest426_Plugins_BLUI_Source_Blu_Public_BluBlueprintFunctionLibrary_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBluBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBluBlueprintFunctionLibrary(UBluBlueprintFunctionLibrary&&); \
	NO_API UBluBlueprintFunctionLibrary(const UBluBlueprintFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBluBlueprintFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBluBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBluBlueprintFunctionLibrary)


#define EasyVTest426_Plugins_BLUI_Source_Blu_Public_BluBlueprintFunctionLibrary_h_13_PRIVATE_PROPERTY_OFFSET
#define EasyVTest426_Plugins_BLUI_Source_Blu_Public_BluBlueprintFunctionLibrary_h_9_PROLOG
#define EasyVTest426_Plugins_BLUI_Source_Blu_Public_BluBlueprintFunctionLibrary_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EasyVTest426_Plugins_BLUI_Source_Blu_Public_BluBlueprintFunctionLibrary_h_13_PRIVATE_PROPERTY_OFFSET \
	EasyVTest426_Plugins_BLUI_Source_Blu_Public_BluBlueprintFunctionLibrary_h_13_SPARSE_DATA \
	EasyVTest426_Plugins_BLUI_Source_Blu_Public_BluBlueprintFunctionLibrary_h_13_RPC_WRAPPERS \
	EasyVTest426_Plugins_BLUI_Source_Blu_Public_BluBlueprintFunctionLibrary_h_13_INCLASS \
	EasyVTest426_Plugins_BLUI_Source_Blu_Public_BluBlueprintFunctionLibrary_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EasyVTest426_Plugins_BLUI_Source_Blu_Public_BluBlueprintFunctionLibrary_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EasyVTest426_Plugins_BLUI_Source_Blu_Public_BluBlueprintFunctionLibrary_h_13_PRIVATE_PROPERTY_OFFSET \
	EasyVTest426_Plugins_BLUI_Source_Blu_Public_BluBlueprintFunctionLibrary_h_13_SPARSE_DATA \
	EasyVTest426_Plugins_BLUI_Source_Blu_Public_BluBlueprintFunctionLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	EasyVTest426_Plugins_BLUI_Source_Blu_Public_BluBlueprintFunctionLibrary_h_13_INCLASS_NO_PURE_DECLS \
	EasyVTest426_Plugins_BLUI_Source_Blu_Public_BluBlueprintFunctionLibrary_h_13_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BluBlueprintFunctionLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLU_API UClass* StaticClass<class UBluBlueprintFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EasyVTest426_Plugins_BLUI_Source_Blu_Public_BluBlueprintFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
