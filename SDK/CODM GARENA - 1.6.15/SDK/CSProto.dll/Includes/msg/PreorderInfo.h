#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PreorderInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PreorderInfo"));
	}

	template <typename T = int32_t> T& _preorder_season_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _preorder_level() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& _is_charge() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_preorder_season_id() {
		return ((T (*)(PreorderInfo*))(Il2CppBase() + 0x506DE88))(this);
	}
	template <typename T = void> T set_preorder_season_id(int32_t value) {
		return ((T (*)(PreorderInfo*, int32_t))(Il2CppBase() + 0x506DE90))(this, value);
	}
	template <typename T = int32_t> T get_preorder_level() {
		return ((T (*)(PreorderInfo*))(Il2CppBase() + 0x506DE98))(this);
	}
	template <typename T = void> T set_preorder_level(int32_t value) {
		return ((T (*)(PreorderInfo*, int32_t))(Il2CppBase() + 0x506DEA0))(this, value);
	}
	template <typename T = bool> T get_is_charge() {
		return ((T (*)(PreorderInfo*))(Il2CppBase() + 0x506DEA8))(this);
	}
	template <typename T = void> T set_is_charge(bool value) {
		return ((T (*)(PreorderInfo*, bool))(Il2CppBase() + 0x506DEB0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PreorderInfo*, bool))(Il2CppBase() + 0x506DEB8))(this, createIfMissing);
	}

};

}
