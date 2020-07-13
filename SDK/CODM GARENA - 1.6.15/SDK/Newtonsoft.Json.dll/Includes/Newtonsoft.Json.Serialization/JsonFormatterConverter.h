#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Serialization {

class JsonFormatterConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Serialization", "JsonFormatterConverter"));
	}

	template <typename T = uintptr_t> T& _reader() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _contract() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _member() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T GetTokenValue(uintptr_t value) {
		return ((T (*)(JsonFormatterConverter*, uintptr_t))(Il2CppBase() + 0x335BD08))(this, value);
	}
	template <typename T = uintptr_t> T Convert(uintptr_t value, uintptr_t type) {
		return ((T (*)(JsonFormatterConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x398B320))(this, value, type);
	}
	template <typename T = bool> T ToBoolean(uintptr_t value) {
		return ((T (*)(JsonFormatterConverter*, uintptr_t))(Il2CppBase() + 0x398B570))(this, value);
	}
	template <typename T = int16_t> T ToInt16(uintptr_t value) {
		return ((T (*)(JsonFormatterConverter*, uintptr_t))(Il2CppBase() + 0x398B5FC))(this, value);
	}
	template <typename T = int32_t> T ToInt32(uintptr_t value) {
		return ((T (*)(JsonFormatterConverter*, uintptr_t))(Il2CppBase() + 0x398B688))(this, value);
	}
	template <typename T = int64_t> T ToInt64(uintptr_t value) {
		return ((T (*)(JsonFormatterConverter*, uintptr_t))(Il2CppBase() + 0x398B714))(this, value);
	}
	template <typename T = Il2CppString*> T ToString(uintptr_t value) {
		return ((T (*)(JsonFormatterConverter*, uintptr_t))(Il2CppBase() + 0x398B7A0))(this, value);
	}
	template <typename T = uint32_t> T ToUInt32(uintptr_t value) {
		return ((T (*)(JsonFormatterConverter*, uintptr_t))(Il2CppBase() + 0x398B82C))(this, value);
	}

};

}
