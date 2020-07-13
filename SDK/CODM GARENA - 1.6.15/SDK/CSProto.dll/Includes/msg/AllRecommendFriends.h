#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class AllRecommendFriends
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "AllRecommendFriends"));
	}

	template <typename T = uintptr_t> T& _recommend() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _battle_info() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_recommend() {
		return ((T (*)(AllRecommendFriends*))(Il2CppBase() + 0x510B6E0))(this);
	}
	template <typename T = void> T set_recommend(uintptr_t value) {
		return ((T (*)(AllRecommendFriends*, uintptr_t))(Il2CppBase() + 0x510B6E8))(this, value);
	}
	template <typename T = uintptr_t> T get_battle_info() {
		return ((T (*)(AllRecommendFriends*))(Il2CppBase() + 0x510B6F0))(this);
	}
	template <typename T = void> T set_battle_info(uintptr_t value) {
		return ((T (*)(AllRecommendFriends*, uintptr_t))(Il2CppBase() + 0x510B6F8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(AllRecommendFriends*, bool))(Il2CppBase() + 0x510B700))(this, createIfMissing);
	}

};

}
