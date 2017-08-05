// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USerial;
#ifdef UE4DUINO_Serial_generated_h
#error "Serial.generated.h already included, missing '#pragma once' in Serial.h"
#endif
#define UE4DUINO_Serial_generated_h

#define UE4DuinoDev_Plugins_UE4Duino_Source_UE4Duino_Private_Serial_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBaud) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetBaud(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPort) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetPort(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsOpened) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsOpened(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFlush) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Flush(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWriteBytes) \
	{ \
		P_GET_TARRAY(uint8,Z_Param_Buffer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->WriteBytes(Z_Param_Buffer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWriteByte) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->WriteByte(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWriteInt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->WriteInt(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWriteFloat) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->WriteFloat(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPrintln) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_String); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->Println(Z_Param_String); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPrint) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_String); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->Print(Z_Param_String); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadBytes) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Limit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<uint8>*)Z_Param__Result=this->ReadBytes(Z_Param_Limit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadByte) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=this->ReadByte(Z_Param_Out_bSuccess); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadInt) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->ReadInt(Z_Param_Out_bSuccess); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadFloat) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->ReadFloat(Z_Param_Out_bSuccess); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadln) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->Readln(Z_Param_Out_bSuccess); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadString) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->ReadString(Z_Param_Out_bSuccess); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClose) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Close(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpen) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Port); \
		P_GET_PROPERTY(UIntProperty,Z_Param_BaudRate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->Open(Z_Param_Port,Z_Param_BaudRate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenComPort) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_bOpened); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Port); \
		P_GET_PROPERTY(UIntProperty,Z_Param_BaudRate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USerial**)Z_Param__Result=USerial::OpenComPort(Z_Param_Out_bOpened,Z_Param_Port,Z_Param_BaudRate); \
		P_NATIVE_END; \
	}


#define UE4DuinoDev_Plugins_UE4Duino_Source_UE4Duino_Private_Serial_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBaud) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetBaud(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPort) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetPort(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsOpened) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsOpened(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFlush) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Flush(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWriteBytes) \
	{ \
		P_GET_TARRAY(uint8,Z_Param_Buffer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->WriteBytes(Z_Param_Buffer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWriteByte) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->WriteByte(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWriteInt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->WriteInt(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWriteFloat) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->WriteFloat(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPrintln) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_String); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->Println(Z_Param_String); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPrint) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_String); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->Print(Z_Param_String); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadBytes) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Limit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<uint8>*)Z_Param__Result=this->ReadBytes(Z_Param_Limit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadByte) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=this->ReadByte(Z_Param_Out_bSuccess); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadInt) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->ReadInt(Z_Param_Out_bSuccess); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadFloat) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->ReadFloat(Z_Param_Out_bSuccess); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadln) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->Readln(Z_Param_Out_bSuccess); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadString) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->ReadString(Z_Param_Out_bSuccess); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClose) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Close(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpen) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Port); \
		P_GET_PROPERTY(UIntProperty,Z_Param_BaudRate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->Open(Z_Param_Port,Z_Param_BaudRate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenComPort) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_bOpened); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Port); \
		P_GET_PROPERTY(UIntProperty,Z_Param_BaudRate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USerial**)Z_Param__Result=USerial::OpenComPort(Z_Param_Out_bOpened,Z_Param_Port,Z_Param_BaudRate); \
		P_NATIVE_END; \
	}


#define UE4DuinoDev_Plugins_UE4Duino_Source_UE4Duino_Private_Serial_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSerial(); \
	friend UE4DUINO_API class UClass* Z_Construct_UClass_USerial(); \
public: \
	DECLARE_CLASS(USerial, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UE4Duino"), NO_API) \
	DECLARE_SERIALIZER(USerial) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define UE4DuinoDev_Plugins_UE4Duino_Source_UE4Duino_Private_Serial_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUSerial(); \
	friend UE4DUINO_API class UClass* Z_Construct_UClass_USerial(); \
public: \
	DECLARE_CLASS(USerial, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UE4Duino"), NO_API) \
	DECLARE_SERIALIZER(USerial) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define UE4DuinoDev_Plugins_UE4Duino_Source_UE4Duino_Private_Serial_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USerial(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USerial) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USerial); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USerial); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USerial(USerial&&); \
	NO_API USerial(const USerial&); \
public:


#define UE4DuinoDev_Plugins_UE4Duino_Source_UE4Duino_Private_Serial_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USerial(USerial&&); \
	NO_API USerial(const USerial&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USerial); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USerial); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USerial)


#define UE4DuinoDev_Plugins_UE4Duino_Source_UE4Duino_Private_Serial_h_22_PRIVATE_PROPERTY_OFFSET
#define UE4DuinoDev_Plugins_UE4Duino_Source_UE4Duino_Private_Serial_h_19_PROLOG
#define UE4DuinoDev_Plugins_UE4Duino_Source_UE4Duino_Private_Serial_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4DuinoDev_Plugins_UE4Duino_Source_UE4Duino_Private_Serial_h_22_PRIVATE_PROPERTY_OFFSET \
	UE4DuinoDev_Plugins_UE4Duino_Source_UE4Duino_Private_Serial_h_22_RPC_WRAPPERS \
	UE4DuinoDev_Plugins_UE4Duino_Source_UE4Duino_Private_Serial_h_22_INCLASS \
	UE4DuinoDev_Plugins_UE4Duino_Source_UE4Duino_Private_Serial_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4DuinoDev_Plugins_UE4Duino_Source_UE4Duino_Private_Serial_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4DuinoDev_Plugins_UE4Duino_Source_UE4Duino_Private_Serial_h_22_PRIVATE_PROPERTY_OFFSET \
	UE4DuinoDev_Plugins_UE4Duino_Source_UE4Duino_Private_Serial_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4DuinoDev_Plugins_UE4Duino_Source_UE4Duino_Private_Serial_h_22_INCLASS_NO_PURE_DECLS \
	UE4DuinoDev_Plugins_UE4Duino_Source_UE4Duino_Private_Serial_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4DuinoDev_Plugins_UE4Duino_Source_UE4Duino_Private_Serial_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
