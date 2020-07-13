#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSActvGetAwardReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSActvGetAwardReq"));
	}

	template <typename T = uint64_t> T& _actv_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _activity_type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _award_layer() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint64_t> T& _item_id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _sub_type() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = uint64_t> T get_actv_id() {
		return ((T (*)(CSActvGetAwardReq*))(Il2CppBase() + 0x51E32F8))(this);
	}
	template <typename T = void> T set_actv_id(uint64_t value) {
		return ((T (*)(CSActvGetAwardReq*, uint64_t))(Il2CppBase() + 0x51E3300))(this, value);
	}
	template <typename T = uintptr_t> T get_activity_type() {
		return ((T (*)(CSActvGetAwardReq*))(Il2CppBase() + 0x51E3310))(this);
	}
	template <typename T = void> T set_activity_type(uintptr_t value) {
		return ((T (*)(CSActvGetAwardReq*, uintptr_t))(Il2CppBase() + 0x51E3318))(this, value);
	}
	template <typename T = int32_t> T get_award_layer() {
		return ((T (*)(CSActvGetAwardReq*))(Il2CppBase() + 0x51E3320))(this);
	}
	template <typename T = void> T set_award_layer(int32_t value) {
		return ((T (*)(CSActvGetAwardReq*, int32_t))(Il2CppBase() + 0x51E3328))(this, value);
	}
	template <typename T = uint64_t> T get_item_id() {
		return ((T (*)(CSActvGetAwardReq*))(Il2CppBase() + 0x51E3330))(this);
	}
	template <typename T = void> T set_item_id(uint64_t value) {
		return ((T (*)(CSActvGetAwardReq*, uint64_t))(Il2CppBase() + 0x51E3338))(this, value);
	}
	template <typename T = int32_t> T get_sub_type() {
		return ((T (*)(CSActvGetAwardReq*))(Il2CppBase() + 0x51E3348))(this);
	}
	template <typename T = void> T set_sub_type(int32_t value) {
		return ((T (*)(CSActvGetAwardReq*, int32_t))(Il2CppBase() + 0x51E3350))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSActvGetAwardReq*, bool))(Il2CppBase() + 0x51E3358))(this, createIfMissing);
	}

};

}
