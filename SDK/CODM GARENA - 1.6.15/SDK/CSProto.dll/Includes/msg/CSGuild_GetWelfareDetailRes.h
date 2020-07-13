#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGuildGetWelfareDetailRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGuild_GetWelfareDetailRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _welfare() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGuildGetWelfareDetailRes*))(Il2CppBase() + 0x51DB4DC))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGuildGetWelfareDetailRes*, int32_t))(Il2CppBase() + 0x51DB4E4))(this, value);
	}
	template <typename T = uintptr_t> T get_welfare() {
		return ((T (*)(CSGuildGetWelfareDetailRes*))(Il2CppBase() + 0x51DB4EC))(this);
	}
	template <typename T = void> T set_welfare(uintptr_t value) {
		return ((T (*)(CSGuildGetWelfareDetailRes*, uintptr_t))(Il2CppBase() + 0x51DB4F4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGuildGetWelfareDetailRes*, bool))(Il2CppBase() + 0x51DB4FC))(this, createIfMissing);
	}

};

}
