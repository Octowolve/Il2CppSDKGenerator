#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PlayerSquadInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PlayerSquadInfo"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _type_squads() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _squads() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _records() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _defends() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_type_squads() {
		return ((T (*)(PlayerSquadInfo*))(Il2CppBase() + 0x4EA98AC))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_squads() {
		return ((T (*)(PlayerSquadInfo*))(Il2CppBase() + 0x4EA98B4))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_records() {
		return ((T (*)(PlayerSquadInfo*))(Il2CppBase() + 0x4EA98BC))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_defends() {
		return ((T (*)(PlayerSquadInfo*))(Il2CppBase() + 0x4EA98C4))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PlayerSquadInfo*, bool))(Il2CppBase() + 0x4EA98CC))(this, createIfMissing);
	}

};

}
