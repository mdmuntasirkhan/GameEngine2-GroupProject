// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMuntiplayerHorrorIP_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	MUNTIPLAYERHORRORIP_API UFunction* Z_Construct_UDelegateFunction_MuntiplayerHorrorIP_BulletCountUpdatedDelegate__DelegateSignature();
	MUNTIPLAYERHORRORIP_API UFunction* Z_Construct_UDelegateFunction_MuntiplayerHorrorIP_DamagedDelegate__DelegateSignature();
	MUNTIPLAYERHORRORIP_API UFunction* Z_Construct_UDelegateFunction_MuntiplayerHorrorIP_PawnDeathDelegate__DelegateSignature();
	MUNTIPLAYERHORRORIP_API UFunction* Z_Construct_UDelegateFunction_MuntiplayerHorrorIP_SprintStateChangedDelegate__DelegateSignature();
	MUNTIPLAYERHORRORIP_API UFunction* Z_Construct_UDelegateFunction_MuntiplayerHorrorIP_UpdateSprintMeterDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MuntiplayerHorrorIP;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MuntiplayerHorrorIP()
	{
		if (!Z_Registration_Info_UPackage__Script_MuntiplayerHorrorIP.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_MuntiplayerHorrorIP_BulletCountUpdatedDelegate__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_MuntiplayerHorrorIP_DamagedDelegate__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_MuntiplayerHorrorIP_PawnDeathDelegate__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_MuntiplayerHorrorIP_SprintStateChangedDelegate__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_MuntiplayerHorrorIP_UpdateSprintMeterDelegate__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/MuntiplayerHorrorIP",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0x9C63EB9B,
			0xD931F836,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MuntiplayerHorrorIP.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_MuntiplayerHorrorIP.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MuntiplayerHorrorIP(Z_Construct_UPackage__Script_MuntiplayerHorrorIP, TEXT("/Script/MuntiplayerHorrorIP"), Z_Registration_Info_UPackage__Script_MuntiplayerHorrorIP, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x9C63EB9B, 0xD931F836));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
