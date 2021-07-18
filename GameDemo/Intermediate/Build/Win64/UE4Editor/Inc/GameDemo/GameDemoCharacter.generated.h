// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEDEMO_GameDemoCharacter_generated_h
#error "GameDemoCharacter.generated.h already included, missing '#pragma once' in GameDemoCharacter.h"
#endif
#define GAMEDEMO_GameDemoCharacter_generated_h

#define GameDemo_Source_GameDemo_GameDemoCharacter_h_12_SPARSE_DATA
#define GameDemo_Source_GameDemo_GameDemoCharacter_h_12_RPC_WRAPPERS
#define GameDemo_Source_GameDemo_GameDemoCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define GameDemo_Source_GameDemo_GameDemoCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameDemoCharacter(); \
	friend struct Z_Construct_UClass_AGameDemoCharacter_Statics; \
public: \
	DECLARE_CLASS(AGameDemoCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameDemo"), NO_API) \
	DECLARE_SERIALIZER(AGameDemoCharacter)


#define GameDemo_Source_GameDemo_GameDemoCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAGameDemoCharacter(); \
	friend struct Z_Construct_UClass_AGameDemoCharacter_Statics; \
public: \
	DECLARE_CLASS(AGameDemoCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameDemo"), NO_API) \
	DECLARE_SERIALIZER(AGameDemoCharacter)


#define GameDemo_Source_GameDemo_GameDemoCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameDemoCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameDemoCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameDemoCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameDemoCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameDemoCharacter(AGameDemoCharacter&&); \
	NO_API AGameDemoCharacter(const AGameDemoCharacter&); \
public:


#define GameDemo_Source_GameDemo_GameDemoCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameDemoCharacter(AGameDemoCharacter&&); \
	NO_API AGameDemoCharacter(const AGameDemoCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameDemoCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameDemoCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGameDemoCharacter)


#define GameDemo_Source_GameDemo_GameDemoCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AGameDemoCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AGameDemoCharacter, FollowCamera); }


#define GameDemo_Source_GameDemo_GameDemoCharacter_h_9_PROLOG
#define GameDemo_Source_GameDemo_GameDemoCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GameDemo_Source_GameDemo_GameDemoCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	GameDemo_Source_GameDemo_GameDemoCharacter_h_12_SPARSE_DATA \
	GameDemo_Source_GameDemo_GameDemoCharacter_h_12_RPC_WRAPPERS \
	GameDemo_Source_GameDemo_GameDemoCharacter_h_12_INCLASS \
	GameDemo_Source_GameDemo_GameDemoCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GameDemo_Source_GameDemo_GameDemoCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GameDemo_Source_GameDemo_GameDemoCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	GameDemo_Source_GameDemo_GameDemoCharacter_h_12_SPARSE_DATA \
	GameDemo_Source_GameDemo_GameDemoCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	GameDemo_Source_GameDemo_GameDemoCharacter_h_12_INCLASS_NO_PURE_DECLS \
	GameDemo_Source_GameDemo_GameDemoCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEDEMO_API UClass* StaticClass<class AGameDemoCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GameDemo_Source_GameDemo_GameDemoCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
