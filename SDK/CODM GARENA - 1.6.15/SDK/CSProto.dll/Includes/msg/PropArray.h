#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PropArray
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PropArray"));
	}

	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _prop_list() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(PropArray*))(Il2CppBase() + 0x506EAFC))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(PropArray*, uint64_t))(Il2CppBase() + 0x506EB04))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_prop_list() {
		return ((T (*)(PropArray*))(Il2CppBase() + 0x506EB14))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PropArray*, bool))(Il2CppBase() + 0x506EB1C))(this, createIfMissing);
	}

};

}
