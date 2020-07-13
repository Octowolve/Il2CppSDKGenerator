#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGuildNewWelfareNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGuild_NewWelfareNtf"));
	}

	template <typename T = uint32_t> T& _id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& _can_claim() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint32_t> T get_id() {
		return ((T (*)(CSGuildNewWelfareNtf*))(Il2CppBase() + 0x51DBB9C))(this);
	}
	template <typename T = void> T set_id(uint32_t value) {
		return ((T (*)(CSGuildNewWelfareNtf*, uint32_t))(Il2CppBase() + 0x51DBBA4))(this, value);
	}
	template <typename T = bool> T get_can_claim() {
		return ((T (*)(CSGuildNewWelfareNtf*))(Il2CppBase() + 0x51DBBAC))(this);
	}
	template <typename T = void> T set_can_claim(bool value) {
		return ((T (*)(CSGuildNewWelfareNtf*, bool))(Il2CppBase() + 0x51DBBB4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGuildNewWelfareNtf*, bool))(Il2CppBase() + 0x51DBBBC))(this, createIfMissing);
	}

};

}
