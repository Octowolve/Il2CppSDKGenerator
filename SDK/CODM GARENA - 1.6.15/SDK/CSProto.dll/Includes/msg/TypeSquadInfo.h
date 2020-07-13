#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class TypeSquadInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "TypeSquadInfo"));
	}

	template <typename T = int32_t> T& _game_type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _attack_squads() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _defend_squads() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_game_type() {
		return ((T (*)(TypeSquadInfo*))(Il2CppBase() + 0x51AA834))(this);
	}
	template <typename T = void> T set_game_type(int32_t value) {
		return ((T (*)(TypeSquadInfo*, int32_t))(Il2CppBase() + 0x51AA83C))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_attack_squads() {
		return ((T (*)(TypeSquadInfo*))(Il2CppBase() + 0x51AA844))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_defend_squads() {
		return ((T (*)(TypeSquadInfo*))(Il2CppBase() + 0x51AA84C))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(TypeSquadInfo*, bool))(Il2CppBase() + 0x51AA854))(this, createIfMissing);
	}

};

}
