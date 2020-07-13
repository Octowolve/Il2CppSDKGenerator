#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSActvShareLuckyBagNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSActvShareLuckyBagNtf"));
	}

	template <typename T = Il2CppString*> T& _share_url() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppString*> T get_share_url() {
		return ((T (*)(CSActvShareLuckyBagNtf*))(Il2CppBase() + 0x51E3E2C))(this);
	}
	template <typename T = void> T set_share_url(Il2CppString* value) {
		return ((T (*)(CSActvShareLuckyBagNtf*, Il2CppString*))(Il2CppBase() + 0x51E3E34))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSActvShareLuckyBagNtf*, bool))(Il2CppBase() + 0x51E3E3C))(this, createIfMissing);
	}

};

}
