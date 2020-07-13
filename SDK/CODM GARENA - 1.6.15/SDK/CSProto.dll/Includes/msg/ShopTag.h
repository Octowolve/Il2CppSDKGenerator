#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ShopTag
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ShopTag"));
	}

	template <typename T = uint32_t> T& _TagID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& _Open() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _Priority() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& _EnableSubTag() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& _RejectSubTag() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _RejectSubTags() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _TagType() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = uint32_t> T get_TagID() {
		return ((T (*)(ShopTag*))(Il2CppBase() + 0x5073244))(this);
	}
	template <typename T = void> T set_TagID(uint32_t value) {
		return ((T (*)(ShopTag*, uint32_t))(Il2CppBase() + 0x507324C))(this, value);
	}
	template <typename T = bool> T get_Open() {
		return ((T (*)(ShopTag*))(Il2CppBase() + 0x5073254))(this);
	}
	template <typename T = void> T set_Open(bool value) {
		return ((T (*)(ShopTag*, bool))(Il2CppBase() + 0x507325C))(this, value);
	}
	template <typename T = int32_t> T get_Priority() {
		return ((T (*)(ShopTag*))(Il2CppBase() + 0x5073264))(this);
	}
	template <typename T = void> T set_Priority(int32_t value) {
		return ((T (*)(ShopTag*, int32_t))(Il2CppBase() + 0x507326C))(this, value);
	}
	template <typename T = bool> T get_EnableSubTag() {
		return ((T (*)(ShopTag*))(Il2CppBase() + 0x5073274))(this);
	}
	template <typename T = void> T set_EnableSubTag(bool value) {
		return ((T (*)(ShopTag*, bool))(Il2CppBase() + 0x507327C))(this, value);
	}
	template <typename T = Il2CppString*> T get_RejectSubTag() {
		return ((T (*)(ShopTag*))(Il2CppBase() + 0x5073284))(this);
	}
	template <typename T = void> T set_RejectSubTag(Il2CppString* value) {
		return ((T (*)(ShopTag*, Il2CppString*))(Il2CppBase() + 0x507328C))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_RejectSubTags() {
		return ((T (*)(ShopTag*))(Il2CppBase() + 0x5073294))(this);
	}
	template <typename T = int32_t> T get_TagType() {
		return ((T (*)(ShopTag*))(Il2CppBase() + 0x507329C))(this);
	}
	template <typename T = void> T set_TagType(int32_t value) {
		return ((T (*)(ShopTag*, int32_t))(Il2CppBase() + 0x50732A4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ShopTag*, bool))(Il2CppBase() + 0x50732AC))(this, createIfMissing);
	}

};

}
