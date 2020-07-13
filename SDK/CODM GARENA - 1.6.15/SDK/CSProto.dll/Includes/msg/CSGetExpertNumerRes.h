#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetExpertNumerRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetExpertNumerRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _expert_numers() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGetExpertNumerRes*))(Il2CppBase() + 0x52162B8))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGetExpertNumerRes*, int32_t))(Il2CppBase() + 0x52162C0))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_expert_numers() {
		return ((T (*)(CSGetExpertNumerRes*))(Il2CppBase() + 0x52162C8))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetExpertNumerRes*, bool))(Il2CppBase() + 0x52162D0))(this, createIfMissing);
	}

};

}
