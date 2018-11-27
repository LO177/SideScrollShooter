// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIDESCROLLSHOOTER_WeaponBase_generated_h
#error "WeaponBase.generated.h already included, missing '#pragma once' in WeaponBase.h"
#endif
#define SIDESCROLLSHOOTER_WeaponBase_generated_h

#define SideScrollShooter_Source_SideScrollShooter_WeaponBase_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFireWeapon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FireWeapon(); \
		P_NATIVE_END; \
	}


#define SideScrollShooter_Source_SideScrollShooter_WeaponBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFireWeapon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FireWeapon(); \
		P_NATIVE_END; \
	}


#define SideScrollShooter_Source_SideScrollShooter_WeaponBase_h_14_EVENT_PARMS
#define SideScrollShooter_Source_SideScrollShooter_WeaponBase_h_14_CALLBACK_WRAPPERS
#define SideScrollShooter_Source_SideScrollShooter_WeaponBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeaponBase(); \
	friend struct Z_Construct_UClass_AWeaponBase_Statics; \
public: \
	DECLARE_CLASS(AWeaponBase, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SideScrollShooter"), NO_API) \
	DECLARE_SERIALIZER(AWeaponBase)


#define SideScrollShooter_Source_SideScrollShooter_WeaponBase_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAWeaponBase(); \
	friend struct Z_Construct_UClass_AWeaponBase_Statics; \
public: \
	DECLARE_CLASS(AWeaponBase, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SideScrollShooter"), NO_API) \
	DECLARE_SERIALIZER(AWeaponBase)


#define SideScrollShooter_Source_SideScrollShooter_WeaponBase_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeaponBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeaponBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponBase(AWeaponBase&&); \
	NO_API AWeaponBase(const AWeaponBase&); \
public:


#define SideScrollShooter_Source_SideScrollShooter_WeaponBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponBase(AWeaponBase&&); \
	NO_API AWeaponBase(const AWeaponBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeaponBase)


#define SideScrollShooter_Source_SideScrollShooter_WeaponBase_h_14_PRIVATE_PROPERTY_OFFSET
#define SideScrollShooter_Source_SideScrollShooter_WeaponBase_h_11_PROLOG \
	SideScrollShooter_Source_SideScrollShooter_WeaponBase_h_14_EVENT_PARMS


#define SideScrollShooter_Source_SideScrollShooter_WeaponBase_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideScrollShooter_Source_SideScrollShooter_WeaponBase_h_14_PRIVATE_PROPERTY_OFFSET \
	SideScrollShooter_Source_SideScrollShooter_WeaponBase_h_14_RPC_WRAPPERS \
	SideScrollShooter_Source_SideScrollShooter_WeaponBase_h_14_CALLBACK_WRAPPERS \
	SideScrollShooter_Source_SideScrollShooter_WeaponBase_h_14_INCLASS \
	SideScrollShooter_Source_SideScrollShooter_WeaponBase_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SideScrollShooter_Source_SideScrollShooter_WeaponBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideScrollShooter_Source_SideScrollShooter_WeaponBase_h_14_PRIVATE_PROPERTY_OFFSET \
	SideScrollShooter_Source_SideScrollShooter_WeaponBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	SideScrollShooter_Source_SideScrollShooter_WeaponBase_h_14_CALLBACK_WRAPPERS \
	SideScrollShooter_Source_SideScrollShooter_WeaponBase_h_14_INCLASS_NO_PURE_DECLS \
	SideScrollShooter_Source_SideScrollShooter_WeaponBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SideScrollShooter_Source_SideScrollShooter_WeaponBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
