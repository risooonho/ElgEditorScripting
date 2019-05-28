// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
enum class EBPEditorOutputBranch : uint8;
#ifdef ELGEDITORSCRIPTING_ElgEditorBP_Actor_generated_h
#error "ElgEditorBP_Actor.generated.h already included, missing '#pragma once' in ElgEditorBP_Actor.h"
#endif
#define ELGEDITORSCRIPTING_ElgEditorBP_Actor_generated_h

#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Actor_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsEditorOnlyActorBranch) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_ENUM_REF(EBPEditorOutputBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_Actor::IsEditorOnlyActorBranch(Z_Param_Actor,(EBPEditorOutputBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsEditorOnlyActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UElgEditorBP_Actor::IsEditorOnlyActor(Z_Param_Actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartWithTickEnabledBranch) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_ENUM_REF(EBPEditorOutputBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_Actor::StartWithTickEnabledBranch(Z_Param_Actor,(EBPEditorOutputBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartWithTickEnabled) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UElgEditorBP_Actor::StartWithTickEnabled(Z_Param_Actor); \
		P_NATIVE_END; \
	}


#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Actor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsEditorOnlyActorBranch) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_ENUM_REF(EBPEditorOutputBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_Actor::IsEditorOnlyActorBranch(Z_Param_Actor,(EBPEditorOutputBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsEditorOnlyActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UElgEditorBP_Actor::IsEditorOnlyActor(Z_Param_Actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartWithTickEnabledBranch) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_ENUM_REF(EBPEditorOutputBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_Actor::StartWithTickEnabledBranch(Z_Param_Actor,(EBPEditorOutputBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartWithTickEnabled) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UElgEditorBP_Actor::StartWithTickEnabled(Z_Param_Actor); \
		P_NATIVE_END; \
	}


#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Actor_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUElgEditorBP_Actor(); \
	friend struct Z_Construct_UClass_UElgEditorBP_Actor_Statics; \
public: \
	DECLARE_CLASS(UElgEditorBP_Actor, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElgEditorScripting"), NO_API) \
	DECLARE_SERIALIZER(UElgEditorBP_Actor)


#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Actor_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUElgEditorBP_Actor(); \
	friend struct Z_Construct_UClass_UElgEditorBP_Actor_Statics; \
public: \
	DECLARE_CLASS(UElgEditorBP_Actor, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElgEditorScripting"), NO_API) \
	DECLARE_SERIALIZER(UElgEditorBP_Actor)


#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Actor_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UElgEditorBP_Actor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UElgEditorBP_Actor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UElgEditorBP_Actor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElgEditorBP_Actor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UElgEditorBP_Actor(UElgEditorBP_Actor&&); \
	NO_API UElgEditorBP_Actor(const UElgEditorBP_Actor&); \
public:


#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Actor_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UElgEditorBP_Actor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UElgEditorBP_Actor(UElgEditorBP_Actor&&); \
	NO_API UElgEditorBP_Actor(const UElgEditorBP_Actor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UElgEditorBP_Actor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElgEditorBP_Actor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UElgEditorBP_Actor)


#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Actor_h_17_PRIVATE_PROPERTY_OFFSET
#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Actor_h_14_PROLOG
#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Actor_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Actor_h_17_PRIVATE_PROPERTY_OFFSET \
	D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Actor_h_17_RPC_WRAPPERS \
	D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Actor_h_17_INCLASS \
	D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Actor_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Actor_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Actor_h_17_PRIVATE_PROPERTY_OFFSET \
	D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Actor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Actor_h_17_INCLASS_NO_PURE_DECLS \
	D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Actor_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELGEDITORSCRIPTING_API UClass* StaticClass<class UElgEditorBP_Actor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Actor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS