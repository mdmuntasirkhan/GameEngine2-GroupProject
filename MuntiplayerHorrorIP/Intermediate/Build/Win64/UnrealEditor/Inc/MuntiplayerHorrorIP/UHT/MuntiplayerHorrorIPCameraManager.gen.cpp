// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MuntiplayerHorrorIPCameraManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMuntiplayerHorrorIPCameraManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
MUNTIPLAYERHORRORIP_API UClass* Z_Construct_UClass_AMuntiplayerHorrorIPCameraManager();
MUNTIPLAYERHORRORIP_API UClass* Z_Construct_UClass_AMuntiplayerHorrorIPCameraManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_MuntiplayerHorrorIP();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMuntiplayerHorrorIPCameraManager ****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AMuntiplayerHorrorIPCameraManager;
UClass* AMuntiplayerHorrorIPCameraManager::GetPrivateStaticClass()
{
	using TClass = AMuntiplayerHorrorIPCameraManager;
	if (!Z_Registration_Info_UClass_AMuntiplayerHorrorIPCameraManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MuntiplayerHorrorIPCameraManager"),
			Z_Registration_Info_UClass_AMuntiplayerHorrorIPCameraManager.InnerSingleton,
			StaticRegisterNativesAMuntiplayerHorrorIPCameraManager,
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
	return Z_Registration_Info_UClass_AMuntiplayerHorrorIPCameraManager.InnerSingleton;
}
UClass* Z_Construct_UClass_AMuntiplayerHorrorIPCameraManager_NoRegister()
{
	return AMuntiplayerHorrorIPCameraManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMuntiplayerHorrorIPCameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic First Person camera manager.\n *  Limits min/max look pitch.\n */" },
#endif
		{ "IncludePath", "MuntiplayerHorrorIPCameraManager.h" },
		{ "ModuleRelativePath", "MuntiplayerHorrorIPCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic First Person camera manager.\nLimits min/max look pitch." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AMuntiplayerHorrorIPCameraManager constinit property declarations ********
// ********** End Class AMuntiplayerHorrorIPCameraManager constinit property declarations **********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMuntiplayerHorrorIPCameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AMuntiplayerHorrorIPCameraManager_Statics
UObject* (*const Z_Construct_UClass_AMuntiplayerHorrorIPCameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_MuntiplayerHorrorIP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMuntiplayerHorrorIPCameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMuntiplayerHorrorIPCameraManager_Statics::ClassParams = {
	&AMuntiplayerHorrorIPCameraManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMuntiplayerHorrorIPCameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AMuntiplayerHorrorIPCameraManager_Statics::Class_MetaDataParams)
};
void AMuntiplayerHorrorIPCameraManager::StaticRegisterNativesAMuntiplayerHorrorIPCameraManager()
{
}
UClass* Z_Construct_UClass_AMuntiplayerHorrorIPCameraManager()
{
	if (!Z_Registration_Info_UClass_AMuntiplayerHorrorIPCameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMuntiplayerHorrorIPCameraManager.OuterSingleton, Z_Construct_UClass_AMuntiplayerHorrorIPCameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMuntiplayerHorrorIPCameraManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AMuntiplayerHorrorIPCameraManager);
AMuntiplayerHorrorIPCameraManager::~AMuntiplayerHorrorIPCameraManager() {}
// ********** End Class AMuntiplayerHorrorIPCameraManager ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_mdmun_Documents_GitHub_GameEngine2_GroupProject_MuntiplayerHorrorIP_Source_MuntiplayerHorrorIP_MuntiplayerHorrorIPCameraManager_h__Script_MuntiplayerHorrorIP_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMuntiplayerHorrorIPCameraManager, AMuntiplayerHorrorIPCameraManager::StaticClass, TEXT("AMuntiplayerHorrorIPCameraManager"), &Z_Registration_Info_UClass_AMuntiplayerHorrorIPCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMuntiplayerHorrorIPCameraManager), 213164488U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_mdmun_Documents_GitHub_GameEngine2_GroupProject_MuntiplayerHorrorIP_Source_MuntiplayerHorrorIP_MuntiplayerHorrorIPCameraManager_h__Script_MuntiplayerHorrorIP_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mdmun_Documents_GitHub_GameEngine2_GroupProject_MuntiplayerHorrorIP_Source_MuntiplayerHorrorIP_MuntiplayerHorrorIPCameraManager_h__Script_MuntiplayerHorrorIP_1998318727{
	TEXT("/Script/MuntiplayerHorrorIP"),
	Z_CompiledInDeferFile_FID_Users_mdmun_Documents_GitHub_GameEngine2_GroupProject_MuntiplayerHorrorIP_Source_MuntiplayerHorrorIP_MuntiplayerHorrorIPCameraManager_h__Script_MuntiplayerHorrorIP_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mdmun_Documents_GitHub_GameEngine2_GroupProject_MuntiplayerHorrorIP_Source_MuntiplayerHorrorIP_MuntiplayerHorrorIPCameraManager_h__Script_MuntiplayerHorrorIP_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
