#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSStartMatchMakingNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSStartMatchMakingNtf"));
	}

	template <typename T = int32_t> T& _state() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _players() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_state() {
		return ((T (*)(CSStartMatchMakingNtf*))(Il2CppBase() + 0x51E2B5C))(this);
	}
	template <typename T = void> T set_state(int32_t value) {
		return ((T (*)(CSStartMatchMakingNtf*, int32_t))(Il2CppBase() + 0x51E2B64))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_players() {
		return ((T (*)(CSStartMatchMakingNtf*))(Il2CppBase() + 0x51E2B6C))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSStartMatchMakingNtf*, bool))(Il2CppBase() + 0x51E2B74))(this, createIfMissing);
	}

};

}
