#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class DisplayWeapon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "DisplayWeapon"));
	}

	template <typename T = uint64_t> T& _prop_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint64_t> T get_prop_id() {
		return ((T (*)(DisplayWeapon*))(Il2CppBase() + 0x5226758))(this);
	}
	template <typename T = void> T set_prop_id(uint64_t value) {
		return ((T (*)(DisplayWeapon*, uint64_t))(Il2CppBase() + 0x5226760))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(DisplayWeapon*, bool))(Il2CppBase() + 0x5226770))(this, createIfMissing);
	}

};

}
