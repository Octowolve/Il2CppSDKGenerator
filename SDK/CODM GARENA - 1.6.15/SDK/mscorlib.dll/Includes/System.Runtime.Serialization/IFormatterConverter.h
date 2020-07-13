#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Serialization {

class IFormatterConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Serialization", "IFormatterConverter"));
	}


	template <typename T = uintptr_t> T Convert(uintptr_t value, uintptr_t type) {
		return ((T (*)(IFormatterConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, value, type);
	}
	template <typename T = bool> T ToBoolean(uintptr_t value) {
		return ((T (*)(IFormatterConverter*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = int16_t> T ToInt16(uintptr_t value) {
		return ((T (*)(IFormatterConverter*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = int32_t> T ToInt32(uintptr_t value) {
		return ((T (*)(IFormatterConverter*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = int64_t> T ToInt64(uintptr_t value) {
		return ((T (*)(IFormatterConverter*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = Il2CppString*> T ToString(uintptr_t value) {
		return ((T (*)(IFormatterConverter*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = uint32_t> T ToUInt32(uintptr_t value) {
		return ((T (*)(IFormatterConverter*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}

};

}
