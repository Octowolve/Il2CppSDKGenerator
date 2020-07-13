#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ClanMailInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ClanMailInfo"));
	}

	template <typename T = uint64_t> T& _clan_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _msg_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint64_t> T get_clan_id() {
		return ((T (*)(ClanMailInfo*))(Il2CppBase() + 0x516E858))(this);
	}
	template <typename T = void> T set_clan_id(uint64_t value) {
		return ((T (*)(ClanMailInfo*, uint64_t))(Il2CppBase() + 0x516E860))(this, value);
	}
	template <typename T = uint64_t> T get_msg_id() {
		return ((T (*)(ClanMailInfo*))(Il2CppBase() + 0x516E870))(this);
	}
	template <typename T = void> T set_msg_id(uint64_t value) {
		return ((T (*)(ClanMailInfo*, uint64_t))(Il2CppBase() + 0x516E878))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ClanMailInfo*, bool))(Il2CppBase() + 0x516E888))(this, createIfMissing);
	}

};

}
