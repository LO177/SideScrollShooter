// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SideScrollShooter/WeaponBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponBase() {}
// Cross Module References
	SIDESCROLLSHOOTER_API UClass* Z_Construct_UClass_AWeaponBase_NoRegister();
	SIDESCROLLSHOOTER_API UClass* Z_Construct_UClass_AWeaponBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SideScrollShooter();
	SIDESCROLLSHOOTER_API UFunction* Z_Construct_UFunction_AWeaponBase_FireWeapon();
	SIDESCROLLSHOOTER_API UFunction* Z_Construct_UFunction_AWeaponBase_OnWeaponFired();
// End Cross Module References
	static FName NAME_AWeaponBase_OnWeaponFired = FName(TEXT("OnWeaponFired"));
	void AWeaponBase::OnWeaponFired()
	{
		ProcessEvent(FindFunctionChecked(NAME_AWeaponBase_OnWeaponFired),NULL);
	}
	void AWeaponBase::StaticRegisterNativesAWeaponBase()
	{
		UClass* Class = AWeaponBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FireWeapon", &AWeaponBase::execFireWeapon },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWeaponBase_FireWeapon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponBase_FireWeapon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "WeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_FireWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, "FireWeapon", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponBase_FireWeapon_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_FireWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponBase_FireWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponBase_FireWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponBase_OnWeaponFired_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponBase_OnWeaponFired_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_OnWeaponFired_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, "OnWeaponFired", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponBase_OnWeaponFired_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_OnWeaponFired_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponBase_OnWeaponFired()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponBase_OnWeaponFired_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWeaponBase_NoRegister()
	{
		return AWeaponBase::StaticClass();
	}
	struct Z_Construct_UClass_AWeaponBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ammoAttribute_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ammoAttribute;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeaponBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SideScrollShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWeaponBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWeaponBase_FireWeapon, "FireWeapon" }, // 224243180
		{ &Z_Construct_UFunction_AWeaponBase_OnWeaponFired, "OnWeaponFired" }, // 976542741
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WeaponBase.h" },
		{ "ModuleRelativePath", "WeaponBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::NewProp_ammoAttribute_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "WeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_ammoAttribute = { UE4CodeGen_Private::EPropertyClass::Int, "ammoAttribute", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010005, 1, nullptr, STRUCT_OFFSET(AWeaponBase, ammoAttribute), METADATA_PARAMS(Z_Construct_UClass_AWeaponBase_Statics::NewProp_ammoAttribute_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::NewProp_ammoAttribute_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeaponBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_ammoAttribute,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeaponBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeaponBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWeaponBase_Statics::ClassParams = {
		&AWeaponBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AWeaponBase_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AWeaponBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeaponBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWeaponBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWeaponBase, 124199449);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeaponBase(Z_Construct_UClass_AWeaponBase, &AWeaponBase::StaticClass, TEXT("/Script/SideScrollShooter"), TEXT("AWeaponBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
