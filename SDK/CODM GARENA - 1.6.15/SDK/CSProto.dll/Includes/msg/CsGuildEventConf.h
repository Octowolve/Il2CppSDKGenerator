#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CsGuildEventConf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CsGuildEventConf"));
	}

	template <typename T = int32_t> T& _type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& _locid_name() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _data() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<int32_t>*> T& _guild_exp() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<int32_t>*> T& _guild_active() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = int32_t> T get_type() {
		return ((T (*)(CsGuildEventConf*))(Il2CppBase() + 0x51DC24C))(this);
	}
	template <typename T = void> T set_type(int32_t value) {
		return ((T (*)(CsGuildEventConf*, int32_t))(Il2CppBase() + 0x51DC254))(this, value);
	}
	template <typename T = Il2CppString*> T get_locid_name() {
		return ((T (*)(CsGuildEventConf*))(Il2CppBase() + 0x51DC25C))(this);
	}
	template <typename T = void> T set_locid_name(Il2CppString* value) {
		return ((T (*)(CsGuildEventConf*, Il2CppString*))(Il2CppBase() + 0x51DC264))(this, value);
	}
	template <typename T = int32_t> T get_data() {
		return ((T (*)(CsGuildEventConf*))(Il2CppBase() + 0x51DC26C))(this);
	}
	template <typename T = void> T set_data(int32_t value) {
		return ((T (*)(CsGuildEventConf*, int32_t))(Il2CppBase() + 0x51DC274))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_guild_exp() {
		return ((T (*)(CsGuildEventConf*))(Il2CppBase() + 0x51DC27C))(this);
	}
	template <typename T = Il2CppList<int32_t>*> T get_guild_active() {
		return ((T (*)(CsGuildEventConf*))(Il2CppBase() + 0x51DC284))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CsGuildEventConf*, bool))(Il2CppBase() + 0x51DC28C))(this, createIfMissing);
	}

};

}
