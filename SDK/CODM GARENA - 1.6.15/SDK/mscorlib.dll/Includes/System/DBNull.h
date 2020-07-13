#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class DBNull
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "DBNull"));
	}

	template <typename T = uintptr_t> static T& Value() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T System_IConvertible_ToBoolean(uintptr_t provider) {
		return ((T (*)(DBNull*, uintptr_t))(Il2CppBase() + 0x36673C4))(this, provider);
	}
	template <typename T = unsigned char> T System_IConvertible_ToByte(uintptr_t provider) {
		return ((T (*)(DBNull*, uintptr_t))(Il2CppBase() + 0x3667458))(this, provider);
	}
	template <typename T = char> T System_IConvertible_ToChar(uintptr_t provider) {
		return ((T (*)(DBNull*, uintptr_t))(Il2CppBase() + 0x36674EC))(this, provider);
	}
	template <typename T = uintptr_t> T System_IConvertible_ToDateTime(uintptr_t provider) {
		return ((T (*)(DBNull*, uintptr_t))(Il2CppBase() + 0x3667580))(this, provider);
	}
	template <typename T = uintptr_t> T System_IConvertible_ToDecimal(uintptr_t provider) {
		return ((T (*)(DBNull*, uintptr_t))(Il2CppBase() + 0x3667614))(this, provider);
	}
	template <typename T = double> T System_IConvertible_ToDouble(uintptr_t provider) {
		return ((T (*)(DBNull*, uintptr_t))(Il2CppBase() + 0x36676A8))(this, provider);
	}
	template <typename T = int16_t> T System_IConvertible_ToInt16(uintptr_t provider) {
		return ((T (*)(DBNull*, uintptr_t))(Il2CppBase() + 0x366773C))(this, provider);
	}
	template <typename T = int32_t> T System_IConvertible_ToInt32(uintptr_t provider) {
		return ((T (*)(DBNull*, uintptr_t))(Il2CppBase() + 0x36677D0))(this, provider);
	}
	template <typename T = int64_t> T System_IConvertible_ToInt64(uintptr_t provider) {
		return ((T (*)(DBNull*, uintptr_t))(Il2CppBase() + 0x3667864))(this, provider);
	}
	template <typename T = signed char> T System_IConvertible_ToSByte(uintptr_t provider) {
		return ((T (*)(DBNull*, uintptr_t))(Il2CppBase() + 0x36678F8))(this, provider);
	}
	template <typename T = float> T System_IConvertible_ToSingle(uintptr_t provider) {
		return ((T (*)(DBNull*, uintptr_t))(Il2CppBase() + 0x366798C))(this, provider);
	}
	template <typename T = uintptr_t> T System_IConvertible_ToType(uintptr_t targetType, uintptr_t provider) {
		return ((T (*)(DBNull*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3667A20))(this, targetType, provider);
	}
	template <typename T = uint16_t> T System_IConvertible_ToUInt16(uintptr_t provider) {
		return ((T (*)(DBNull*, uintptr_t))(Il2CppBase() + 0x3667BE0))(this, provider);
	}
	template <typename T = uint32_t> T System_IConvertible_ToUInt32(uintptr_t provider) {
		return ((T (*)(DBNull*, uintptr_t))(Il2CppBase() + 0x3667C74))(this, provider);
	}
	template <typename T = uint64_t> T System_IConvertible_ToUInt64(uintptr_t provider) {
		return ((T (*)(DBNull*, uintptr_t))(Il2CppBase() + 0x3667D08))(this, provider);
	}
	template <typename T = void> T GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(DBNull*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3667D9C))(this, info, context);
	}
	template <typename T = uintptr_t> T GetTypeCode() {
		return ((T (*)(DBNull*))(Il2CppBase() + 0x3667DD4))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(DBNull*))(Il2CppBase() + 0x3667DDC))(this);
	}
	template <typename T = Il2CppString*> T ToString_1(uintptr_t provider) {
		return ((T (*)(DBNull*, uintptr_t))(Il2CppBase() + 0x3667E8C))(this, provider);
	}

};

}
