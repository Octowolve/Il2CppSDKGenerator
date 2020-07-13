#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class LanguagePacksItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "LanguagePacksItem"));
	}

	template <typename T = Il2CppString*> T& _key() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& _item() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppString*> T get_key() {
		return ((T (*)(LanguagePacksItem*))(Il2CppBase() + 0x4EA264C))(this);
	}
	template <typename T = void> T set_key(Il2CppString* value) {
		return ((T (*)(LanguagePacksItem*, Il2CppString*))(Il2CppBase() + 0x4EA2654))(this, value);
	}
	template <typename T = Il2CppString*> T get_item() {
		return ((T (*)(LanguagePacksItem*))(Il2CppBase() + 0x4EA265C))(this);
	}
	template <typename T = void> T set_item(Il2CppString* value) {
		return ((T (*)(LanguagePacksItem*, Il2CppString*))(Il2CppBase() + 0x4EA2664))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(LanguagePacksItem*, bool))(Il2CppBase() + 0x4EA266C))(this, createIfMissing);
	}

};

}
