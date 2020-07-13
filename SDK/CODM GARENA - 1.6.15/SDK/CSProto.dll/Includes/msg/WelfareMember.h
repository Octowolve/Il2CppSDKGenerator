#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class WelfareMember
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "WelfareMember"));
	}

	template <typename T = uintptr_t> T& _member() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _props() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _timestamp() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& _in_guild() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T get_member() {
		return ((T (*)(WelfareMember*))(Il2CppBase() + 0x51AB23C))(this);
	}
	template <typename T = void> T set_member(uintptr_t value) {
		return ((T (*)(WelfareMember*, uintptr_t))(Il2CppBase() + 0x51AB244))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_props() {
		return ((T (*)(WelfareMember*))(Il2CppBase() + 0x51AB24C))(this);
	}
	template <typename T = uint32_t> T get_timestamp() {
		return ((T (*)(WelfareMember*))(Il2CppBase() + 0x51AB254))(this);
	}
	template <typename T = void> T set_timestamp(uint32_t value) {
		return ((T (*)(WelfareMember*, uint32_t))(Il2CppBase() + 0x51AB25C))(this, value);
	}
	template <typename T = bool> T get_in_guild() {
		return ((T (*)(WelfareMember*))(Il2CppBase() + 0x51AB264))(this);
	}
	template <typename T = void> T set_in_guild(bool value) {
		return ((T (*)(WelfareMember*, bool))(Il2CppBase() + 0x51AB26C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(WelfareMember*, bool))(Il2CppBase() + 0x51AB274))(this, createIfMissing);
	}

};

}
