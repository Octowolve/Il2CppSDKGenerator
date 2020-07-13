#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PlayerDataChange
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PlayerDataChange"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _resource_changes() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _prop_changes() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _guild_data() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _boxes() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_resource_changes() {
		return ((T (*)(PlayerDataChange*))(Il2CppBase() + 0x4EA68C8))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_prop_changes() {
		return ((T (*)(PlayerDataChange*))(Il2CppBase() + 0x4EA68D0))(this);
	}
	template <typename T = uintptr_t> T get_guild_data() {
		return ((T (*)(PlayerDataChange*))(Il2CppBase() + 0x4EA68D8))(this);
	}
	template <typename T = void> T set_guild_data(uintptr_t value) {
		return ((T (*)(PlayerDataChange*, uintptr_t))(Il2CppBase() + 0x4EA68E0))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_boxes() {
		return ((T (*)(PlayerDataChange*))(Il2CppBase() + 0x4EA68E8))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PlayerDataChange*, bool))(Il2CppBase() + 0x4EA68F0))(this, createIfMissing);
	}

};

}
