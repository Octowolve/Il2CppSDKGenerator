#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class RechareAwardInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "RechareAwardInfo"));
	}

	template <typename T = uint32_t> T& _itemId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _itemNum() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _duration() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint32_t> T get_itemId() {
		return ((T (*)(RechareAwardInfo*))(Il2CppBase() + 0x5070698))(this);
	}
	template <typename T = void> T set_itemId(uint32_t value) {
		return ((T (*)(RechareAwardInfo*, uint32_t))(Il2CppBase() + 0x50706A0))(this, value);
	}
	template <typename T = uint32_t> T get_itemNum() {
		return ((T (*)(RechareAwardInfo*))(Il2CppBase() + 0x50706A8))(this);
	}
	template <typename T = void> T set_itemNum(uint32_t value) {
		return ((T (*)(RechareAwardInfo*, uint32_t))(Il2CppBase() + 0x50706B0))(this, value);
	}
	template <typename T = int32_t> T get_duration() {
		return ((T (*)(RechareAwardInfo*))(Il2CppBase() + 0x50706B8))(this);
	}
	template <typename T = void> T set_duration(int32_t value) {
		return ((T (*)(RechareAwardInfo*, int32_t))(Il2CppBase() + 0x50706C0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(RechareAwardInfo*, bool))(Il2CppBase() + 0x50706C8))(this, createIfMissing);
	}

};

}
