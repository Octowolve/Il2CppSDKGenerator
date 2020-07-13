#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSMatchMakingStartReadyNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSMatchMakingStartReadyNtf"));
	}

	template <typename T = uint64_t> T& _multi_team_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _team_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _players() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = uint64_t> T get_multi_team_id() {
		return ((T (*)(CSMatchMakingStartReadyNtf*))(Il2CppBase() + 0x51F08C0))(this);
	}
	template <typename T = void> T set_multi_team_id(uint64_t value) {
		return ((T (*)(CSMatchMakingStartReadyNtf*, uint64_t))(Il2CppBase() + 0x51F08C8))(this, value);
	}
	template <typename T = uint64_t> T get_team_id() {
		return ((T (*)(CSMatchMakingStartReadyNtf*))(Il2CppBase() + 0x51F08D8))(this);
	}
	template <typename T = void> T set_team_id(uint64_t value) {
		return ((T (*)(CSMatchMakingStartReadyNtf*, uint64_t))(Il2CppBase() + 0x51F08E0))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_players() {
		return ((T (*)(CSMatchMakingStartReadyNtf*))(Il2CppBase() + 0x51F08F0))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSMatchMakingStartReadyNtf*, bool))(Il2CppBase() + 0x51F08F8))(this, createIfMissing);
	}

};

}
