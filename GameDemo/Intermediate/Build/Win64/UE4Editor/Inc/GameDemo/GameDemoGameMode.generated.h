// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEDEMO_GameDemoGameMode_generated_h
#error "GameDemoGameMode.generated.h already included, missing '#pragma once' in GameDemoGameMode.h"
#endif
#define GAMEDEMO_GameDemoGameMode_generated_h

#define GameDemo_Source_GameDemo_GameDemoGameMode_h_12_SPARSE_DATA
#define GameDemo_Source_GameDemo_GameDemoGameMode_h_12_RPC_WRAPPERS
#define GameDemo_Source_GameDemo_GameDemoGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define GameDemo_Source_GameDemo_GameDemoGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameDemoGameMode(); \
	friend struct Z_Construct_UClass_AGameDemoGameMode_Statics; \
public: \
	DECLARE_CLASS(AGameDemoGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameDemo"), GAMEDEMO_API) \
	DECLARE_SERIALIZER(AGameDemoGameMode)


#define GameDemo_Source_GameDemo_GameDemoGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAGameDemoGameMode(); \
	friend struct Z_Construct_UClass_AGameDemoGameMode_Statics; \
public: \
	DECLARE_CLASS(AGameDemoGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameDemo"), GAMEDEMO_API) \
	DECLARE_SERIALIZER(AGameDemoGameMode)


#define GameDemo_Source_GameDemo_GameDemoGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEDEMO_API AGameDemoGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameDemoGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEDEMO_API, AGameDemoGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameDemoGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GAMEDEMO_API AGameDemoGameMode(AGameDemoGameMode&&); \
	GAMEDEMO_API AGameDemoGameMode(const AGameDemoGameMode&); \
public:


#define GameDemo_Source_GameDemo_GameDemoGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GAMEDEMO_API AGameDemoGameMode(AGameDemoGameMode&&); \
	GAMEDEMO_API AGameDemoGameMode(const AGameDemoGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEDEMO_API, AGameDemoGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameDemoGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGameDemoGameMode)


#define GameDemo_Source_GameDemo_GameDemoGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define GameDemo_Source_GameDemo_GameDemoGameMode_h_9_PROLOG
#define GameDemo_Source_GameDemo_GameDemoGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GameDemo_Source_GameDemo_GameDemoGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	GameDemo_Source_GameDemo_GameDemoGameMode_h_12_SPARSE_DATA \
	GameDemo_Source_GameDemo_GameDemoGameMode_h_12_RPC_WRAPPERS \
	GameDemo_Source_GameDemo_GameDemoGameMode_h_12_INCLASS \
	GameDemo_Source_GameDemo_GameDemoGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GameDemo_Source_GameDemo_GameDemoGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GameDemo_Source_GameDemo_GameDemoGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	GameDemo_Source_GameDemo_GameDemoGameMode_h_12_SPARSE_DATA \
	GameDemo_Source_GameDemo_GameDemoGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	GameDemo_Source_GameDemo_GameDemoGameMode_h_12_INCLASS_NO_PURE_DECLS \
	GameDemo_Source_GameDemo_GameDemoGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEDEMO_API UClass* StaticClass<class AGameDemoGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GameDemo_Source_GameDemo_GameDemoGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
