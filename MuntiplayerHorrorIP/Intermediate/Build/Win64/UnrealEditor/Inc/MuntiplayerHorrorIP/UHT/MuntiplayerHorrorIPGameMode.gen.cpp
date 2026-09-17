// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MuntiplayerHorrorIPGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMuntiplayerHorrorIPGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
MUNTIPLAYERHORRORIP_API UClass* Z_Construct_UClass_AMuntiplayerHorrorIPGameMode();
MUNTIPLAYERHORRORIP_API UClass* Z_Construct_UClass_AMuntiplayerHorrorIPGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_MuntiplayerHorrorIP();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMuntiplayerHorrorIPGameMode *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AMuntiplayerHorrorIPGameMode;
UClass* AMuntiplayerHorrorIPGameMode::GetPrivateStaticClass()
{
	using TClass = AMuntiplayerHorrorIPGameMode;
	if (!Z_Registration_Info_UClass_AMuntiplayerHorrorIPGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MuntiplayerHorrorIPGameMode"),
			Z_Registration_Info_UClass_AMuntiplayerHorrorIPGameMode.InnerSingleton,
			StaticRegisterNativesAMuntiplayerHorrorIPGameMode,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AMuntiplayerHorrorIPGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AMuntiplayerHorrorIPGameMode_NoRegister()
{
	return AMuntiplayerHorrorIPGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMuntiplayerHorrorIPGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a first person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MuntiplayerHorrorIPGameMode.h" },
		{ "ModuleRelativePath", "MuntiplayerHorrorIPGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a first person game" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AMuntiplayerHorrorIPGameMode constinit property declarations *************
// ********** End Class AMuntiplayerHorrorIPGameMode constinit property declarations ***************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMuntiplayerHorrorIPGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AMuntiplayerHorrorIPGameMode_Statics
UObject* (*const Z_Construct_UClass_AMuntiplayerHorrorIPGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MuntiplayerHorrorIP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMuntiplayerHorrorIPGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMuntiplayerHorrorIPGameMode_Statics::ClassParams = {
	&AMuntiplayerHorrorIPGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008002ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMuntiplayerHorrorIPGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMuntiplayerHorrorIPGameMode_Statics::Class_MetaDataParams)
};
void AMuntiplayerHorrorIPGameMode::StaticRegisterNativesAMuntiplayerHorrorIPGameMode()
{
}
UClass* Z_Construct_UClass_AMuntiplayerHorrorIPGameMode()
{
	if (!Z_Registration_Info_UClass_AMuntiplayerHorrorIPGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMuntiplayerHorrorIPGameMode.OuterSingleton, Z_Construct_UClass_AMuntiplayerHorrorIPGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMuntiplayerHorrorIPGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AMuntiplayerHorrorIPGameMode);
AMuntiplayerHorrorIPGameMode::~AMuntiplayerHorrorIPGameMode() {}
// ********** End Class AMuntiplayerHorrorIPGameMode ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_mdmun_Documents_GitHub_GameEngine2_GroupProject_MuntiplayerHorrorIP_Source_MuntiplayerHorrorIP_MuntiplayerHorrorIPGameMode_h__Script_MuntiplayerHorrorIP_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMuntiplayerHorrorIPGameMode, AMuntiplayerHorrorIPGameMode::StaticClass, TEXT("AMuntiplayerHorrorIPGameMode"), &Z_Registration_Info_UClass_AMuntiplayerHorrorIPGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMuntiplayerHorrorIPGameMode), 2453710205U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_mdmun_Documents_GitHub_GameEngine2_GroupProject_MuntiplayerHorrorIP_Source_MuntiplayerHorrorIP_MuntiplayerHorrorIPGameMode_h__Script_MuntiplayerHorrorIP_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mdmun_Documents_GitHub_GameEngine2_GroupProject_MuntiplayerHorrorIP_Source_MuntiplayerHorrorIP_MuntiplayerHorrorIPGameMode_h__Script_MuntiplayerHorrorIP_3299425530{
	TEXT("/Script/MuntiplayerHorrorIP"),
	Z_CompiledInDeferFile_FID_Users_mdmun_Documents_GitHub_GameEngine2_GroupProject_MuntiplayerHorrorIP_Source_MuntiplayerHorrorIP_MuntiplayerHorrorIPGameMode_h__Script_MuntiplayerHorrorIP_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mdmun_Documents_GitHub_GameEngine2_GroupProject_MuntiplayerHorrorIP_Source_MuntiplayerHorrorIP_MuntiplayerHorrorIPGameMode_h__Script_MuntiplayerHorrorIP_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
