#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class WeaponAttrItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "WeaponAttrItem"));
	}

	template <typename T = int32_t> T& _ID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _BeginTimestamp() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _EndTimestamp() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_ID() {
		return ((T (*)(WeaponAttrItem*))(Il2CppBase() + 0x51AAD94))(this);
	}
	template <typename T = void> T set_ID(int32_t value) {
		return ((T (*)(WeaponAttrItem*, int32_t))(Il2CppBase() + 0x51AAD9C))(this, value);
	}
	template <typename T = uint32_t> T get_BeginTimestamp() {
		return ((T (*)(WeaponAttrItem*))(Il2CppBase() + 0x51AADA4))(this);
	}
	template <typename T = void> T set_BeginTimestamp(uint32_t value) {
		return ((T (*)(WeaponAttrItem*, uint32_t))(Il2CppBase() + 0x51AADAC))(this, value);
	}
	template <typename T = uint32_t> T get_EndTimestamp() {
		return ((T (*)(WeaponAttrItem*))(Il2CppBase() + 0x51AADB4))(this);
	}
	template <typename T = void> T set_EndTimestamp(uint32_t value) {
		return ((T (*)(WeaponAttrItem*, uint32_t))(Il2CppBase() + 0x51AADBC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(WeaponAttrItem*, bool))(Il2CppBase() + 0x51AADC4))(this, createIfMissing);
	}

};

}
