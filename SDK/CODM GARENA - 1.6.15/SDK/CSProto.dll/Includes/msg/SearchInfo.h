#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class SearchInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "SearchInfo"));
	}

	template <typename T = uintptr_t> T& _friend_info() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _battle_info() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_friend_info() {
		return ((T (*)(SearchInfo*))(Il2CppBase() + 0x5072634))(this);
	}
	template <typename T = void> T set_friend_info(uintptr_t value) {
		return ((T (*)(SearchInfo*, uintptr_t))(Il2CppBase() + 0x507263C))(this, value);
	}
	template <typename T = uintptr_t> T get_battle_info() {
		return ((T (*)(SearchInfo*))(Il2CppBase() + 0x5072644))(this);
	}
	template <typename T = void> T set_battle_info(uintptr_t value) {
		return ((T (*)(SearchInfo*, uintptr_t))(Il2CppBase() + 0x507264C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(SearchInfo*, bool))(Il2CppBase() + 0x5072654))(this, createIfMissing);
	}

};

}
