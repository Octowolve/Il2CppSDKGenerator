#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class DiamondRechargeStat
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "DiamondRechargeStat"));
	}

	template <typename T = int32_t> T& _recharge_count() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _times() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_recharge_count() {
		return ((T (*)(DiamondRechargeStat*))(Il2CppBase() + 0x52266E0))(this);
	}
	template <typename T = void> T set_recharge_count(int32_t value) {
		return ((T (*)(DiamondRechargeStat*, int32_t))(Il2CppBase() + 0x52266E8))(this, value);
	}
	template <typename T = int32_t> T get_times() {
		return ((T (*)(DiamondRechargeStat*))(Il2CppBase() + 0x52266F0))(this);
	}
	template <typename T = void> T set_times(int32_t value) {
		return ((T (*)(DiamondRechargeStat*, int32_t))(Il2CppBase() + 0x52266F8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(DiamondRechargeStat*, bool))(Il2CppBase() + 0x5226700))(this, createIfMissing);
	}

};

}
