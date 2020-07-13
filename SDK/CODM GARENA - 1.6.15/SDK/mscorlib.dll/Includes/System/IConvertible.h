#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class IConvertible
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "IConvertible"));
	}


	template <typename T = uintptr_t> T GetTypeCode() {
		return ((T (*)(IConvertible*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T ToBoolean(uintptr_t provider) {
		return ((T (*)(IConvertible*, uintptr_t))(Il2CppBase() + 0x0))(this, provider);
	}
	template <typename T = unsigned char> T ToByte(uintptr_t provider) {
		return ((T (*)(IConvertible*, uintptr_t))(Il2CppBase() + 0x0))(this, provider);
	}
	template <typename T = char> T ToChar(uintptr_t provider) {
		return ((T (*)(IConvertible*, uintptr_t))(Il2CppBase() + 0x0))(this, provider);
	}
	template <typename T = uintptr_t> T ToDateTime(uintptr_t provider) {
		return ((T (*)(IConvertible*, uintptr_t))(Il2CppBase() + 0x0))(this, provider);
	}
	template <typename T = uintptr_t> T ToDecimal(uintptr_t provider) {
		return ((T (*)(IConvertible*, uintptr_t))(Il2CppBase() + 0x0))(this, provider);
	}
	template <typename T = double> T ToDouble(uintptr_t provider) {
		return ((T (*)(IConvertible*, uintptr_t))(Il2CppBase() + 0x0))(this, provider);
	}
	template <typename T = int16_t> T ToInt16(uintptr_t provider) {
		return ((T (*)(IConvertible*, uintptr_t))(Il2CppBase() + 0x0))(this, provider);
	}
	template <typename T = int32_t> T ToInt32(uintptr_t provider) {
		return ((T (*)(IConvertible*, uintptr_t))(Il2CppBase() + 0x0))(this, provider);
	}
	template <typename T = int64_t> T ToInt64(uintptr_t provider) {
		return ((T (*)(IConvertible*, uintptr_t))(Il2CppBase() + 0x0))(this, provider);
	}
	template <typename T = signed char> T ToSByte(uintptr_t provider) {
		return ((T (*)(IConvertible*, uintptr_t))(Il2CppBase() + 0x0))(this, provider);
	}
	template <typename T = float> T ToSingle(uintptr_t provider) {
		return ((T (*)(IConvertible*, uintptr_t))(Il2CppBase() + 0x0))(this, provider);
	}
	template <typename T = Il2CppString*> T ToString(uintptr_t provider) {
		return ((T (*)(IConvertible*, uintptr_t))(Il2CppBase() + 0x0))(this, provider);
	}
	template <typename T = uintptr_t> T ToType(uintptr_t conversionType, uintptr_t provider) {
		return ((T (*)(IConvertible*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, conversionType, provider);
	}
	template <typename T = uint16_t> T ToUInt16(uintptr_t provider) {
		return ((T (*)(IConvertible*, uintptr_t))(Il2CppBase() + 0x0))(this, provider);
	}
	template <typename T = uint32_t> T ToUInt32(uintptr_t provider) {
		return ((T (*)(IConvertible*, uintptr_t))(Il2CppBase() + 0x0))(this, provider);
	}
	template <typename T = uint64_t> T ToUInt64(uintptr_t provider) {
		return ((T (*)(IConvertible*, uintptr_t))(Il2CppBase() + 0x0))(this, provider);
	}

};

}
