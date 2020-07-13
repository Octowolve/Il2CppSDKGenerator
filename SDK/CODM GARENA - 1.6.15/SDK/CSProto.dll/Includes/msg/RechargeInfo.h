#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class RechargeInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "RechargeInfo"));
	}

	template <typename T = uint32_t> T& _id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _pic_url() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _tag_name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _pos_info() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint32_t> T get_id() {
		return ((T (*)(RechargeInfo*))(Il2CppBase() + 0x50707AC))(this);
	}
	template <typename T = void> T set_id(uint32_t value) {
		return ((T (*)(RechargeInfo*, uint32_t))(Il2CppBase() + 0x50707B4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_pic_url() {
		return ((T (*)(RechargeInfo*))(Il2CppBase() + 0x50707BC))(this);
	}
	template <typename T = void> T set_pic_url(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(RechargeInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x50707C4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_tag_name() {
		return ((T (*)(RechargeInfo*))(Il2CppBase() + 0x50707CC))(this);
	}
	template <typename T = void> T set_tag_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(RechargeInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x50707D4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_pos_info() {
		return ((T (*)(RechargeInfo*))(Il2CppBase() + 0x50707DC))(this);
	}
	template <typename T = void> T set_pos_info(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(RechargeInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x50707E4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(RechargeInfo*, bool))(Il2CppBase() + 0x50707EC))(this, createIfMissing);
	}

};

}
