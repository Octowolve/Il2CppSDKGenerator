#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSMatchMakingReStartNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSMatchMakingReStartNtf"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _players() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _expire_time() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_players() {
		return ((T (*)(CSMatchMakingReStartNtf*))(Il2CppBase() + 0x51F07E8))(this);
	}
	template <typename T = uint32_t> T get_expire_time() {
		return ((T (*)(CSMatchMakingReStartNtf*))(Il2CppBase() + 0x51F07F0))(this);
	}
	template <typename T = void> T set_expire_time(uint32_t value) {
		return ((T (*)(CSMatchMakingReStartNtf*, uint32_t))(Il2CppBase() + 0x51F07F8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSMatchMakingReStartNtf*, bool))(Il2CppBase() + 0x51F0800))(this, createIfMissing);
	}

};

}
