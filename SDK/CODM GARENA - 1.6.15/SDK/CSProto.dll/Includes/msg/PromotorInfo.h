#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PromotorInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PromotorInfo"));
	}

	template <typename T = int32_t> T& _id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _success_invited_playerid() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _award_prop() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _actv_expire_time() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _timeout_time() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = int32_t> T get_id() {
		return ((T (*)(PromotorInfo*))(Il2CppBase() + 0x506E8A8))(this);
	}
	template <typename T = void> T set_id(int32_t value) {
		return ((T (*)(PromotorInfo*, int32_t))(Il2CppBase() + 0x506E8B0))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_success_invited_playerid() {
		return ((T (*)(PromotorInfo*))(Il2CppBase() + 0x506E8B8))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_award_prop() {
		return ((T (*)(PromotorInfo*))(Il2CppBase() + 0x506E8C0))(this);
	}
	template <typename T = uint32_t> T get_actv_expire_time() {
		return ((T (*)(PromotorInfo*))(Il2CppBase() + 0x506E8C8))(this);
	}
	template <typename T = void> T set_actv_expire_time(uint32_t value) {
		return ((T (*)(PromotorInfo*, uint32_t))(Il2CppBase() + 0x506E8D0))(this, value);
	}
	template <typename T = uint32_t> T get_timeout_time() {
		return ((T (*)(PromotorInfo*))(Il2CppBase() + 0x506E8D8))(this);
	}
	template <typename T = void> T set_timeout_time(uint32_t value) {
		return ((T (*)(PromotorInfo*, uint32_t))(Il2CppBase() + 0x506E8E0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PromotorInfo*, bool))(Il2CppBase() + 0x506E8E8))(this, createIfMissing);
	}

};

}
