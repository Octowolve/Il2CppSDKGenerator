#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSPromotorGetListRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSPromotorGetListRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _friends() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _success_invite_playerid() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _awards() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _model_id() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _notify_level() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSPromotorGetListRes*))(Il2CppBase() + 0x51F1B20))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSPromotorGetListRes*, int32_t))(Il2CppBase() + 0x51F1B28))(this, value);
	}
	template <typename T = int32_t> T get_id() {
		return ((T (*)(CSPromotorGetListRes*))(Il2CppBase() + 0x51F1B30))(this);
	}
	template <typename T = void> T set_id(int32_t value) {
		return ((T (*)(CSPromotorGetListRes*, int32_t))(Il2CppBase() + 0x51F1B38))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_friends() {
		return ((T (*)(CSPromotorGetListRes*))(Il2CppBase() + 0x51F1B40))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_success_invite_playerid() {
		return ((T (*)(CSPromotorGetListRes*))(Il2CppBase() + 0x51F1B48))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_awards() {
		return ((T (*)(CSPromotorGetListRes*))(Il2CppBase() + 0x51F1B50))(this);
	}
	template <typename T = int32_t> T get_model_id() {
		return ((T (*)(CSPromotorGetListRes*))(Il2CppBase() + 0x51F1B58))(this);
	}
	template <typename T = void> T set_model_id(int32_t value) {
		return ((T (*)(CSPromotorGetListRes*, int32_t))(Il2CppBase() + 0x51F1B60))(this, value);
	}
	template <typename T = int32_t> T get_notify_level() {
		return ((T (*)(CSPromotorGetListRes*))(Il2CppBase() + 0x51F1B68))(this);
	}
	template <typename T = void> T set_notify_level(int32_t value) {
		return ((T (*)(CSPromotorGetListRes*, int32_t))(Il2CppBase() + 0x51F1B70))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSPromotorGetListRes*, bool))(Il2CppBase() + 0x51F1B78))(this, createIfMissing);
	}

};

}
