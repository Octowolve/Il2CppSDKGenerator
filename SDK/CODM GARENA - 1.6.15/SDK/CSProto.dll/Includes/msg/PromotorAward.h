#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PromotorAward
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PromotorAward"));
	}

	template <typename T = uintptr_t> T& _prop() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _award_limit() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& _status() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uintptr_t> T get_prop() {
		return ((T (*)(PromotorAward*))(Il2CppBase() + 0x506E784))(this);
	}
	template <typename T = void> T set_prop(uintptr_t value) {
		return ((T (*)(PromotorAward*, uintptr_t))(Il2CppBase() + 0x506E78C))(this, value);
	}
	template <typename T = int32_t> T get_award_limit() {
		return ((T (*)(PromotorAward*))(Il2CppBase() + 0x506E794))(this);
	}
	template <typename T = void> T set_award_limit(int32_t value) {
		return ((T (*)(PromotorAward*, int32_t))(Il2CppBase() + 0x506E79C))(this, value);
	}
	template <typename T = bool> T get_status() {
		return ((T (*)(PromotorAward*))(Il2CppBase() + 0x506E7A4))(this);
	}
	template <typename T = void> T set_status(bool value) {
		return ((T (*)(PromotorAward*, bool))(Il2CppBase() + 0x506E7AC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PromotorAward*, bool))(Il2CppBase() + 0x506E7B4))(this, createIfMissing);
	}

};

}
