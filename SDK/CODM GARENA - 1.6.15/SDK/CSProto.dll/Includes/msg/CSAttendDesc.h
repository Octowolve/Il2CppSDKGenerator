#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSAttendDesc
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSAttendDesc"));
	}

	template <typename T = int32_t> T& _actvId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _actvType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _startDate() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _endDate() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _dailyAttend() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _retroactiveCost() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& _attendTimes() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& _retroactiveTimes() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& _notAttendTimes() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& _popUpFlag() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& _newPlayerFlag() {
		return *(T*)((uintptr_t)this + 0x2D);
	}
	template <typename T = uint64_t> T& _first_attend_time() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = int32_t> T get_actvId() {
		return ((T (*)(CSAttendDesc*))(Il2CppBase() + 0x51E4A28))(this);
	}
	template <typename T = void> T set_actvId(int32_t value) {
		return ((T (*)(CSAttendDesc*, int32_t))(Il2CppBase() + 0x51E4A30))(this, value);
	}
	template <typename T = int32_t> T get_actvType() {
		return ((T (*)(CSAttendDesc*))(Il2CppBase() + 0x51E4A38))(this);
	}
	template <typename T = void> T set_actvType(int32_t value) {
		return ((T (*)(CSAttendDesc*, int32_t))(Il2CppBase() + 0x51E4A40))(this, value);
	}
	template <typename T = int32_t> T get_startDate() {
		return ((T (*)(CSAttendDesc*))(Il2CppBase() + 0x51E4A48))(this);
	}
	template <typename T = void> T set_startDate(int32_t value) {
		return ((T (*)(CSAttendDesc*, int32_t))(Il2CppBase() + 0x51E4A50))(this, value);
	}
	template <typename T = int32_t> T get_endDate() {
		return ((T (*)(CSAttendDesc*))(Il2CppBase() + 0x51E4A58))(this);
	}
	template <typename T = void> T set_endDate(int32_t value) {
		return ((T (*)(CSAttendDesc*, int32_t))(Il2CppBase() + 0x51E4A60))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_dailyAttend() {
		return ((T (*)(CSAttendDesc*))(Il2CppBase() + 0x51E4A68))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_retroactiveCost() {
		return ((T (*)(CSAttendDesc*))(Il2CppBase() + 0x51E4A70))(this);
	}
	template <typename T = uint32_t> T get_attendTimes() {
		return ((T (*)(CSAttendDesc*))(Il2CppBase() + 0x51E4A78))(this);
	}
	template <typename T = void> T set_attendTimes(uint32_t value) {
		return ((T (*)(CSAttendDesc*, uint32_t))(Il2CppBase() + 0x51E4A80))(this, value);
	}
	template <typename T = uint32_t> T get_retroactiveTimes() {
		return ((T (*)(CSAttendDesc*))(Il2CppBase() + 0x51E4A88))(this);
	}
	template <typename T = void> T set_retroactiveTimes(uint32_t value) {
		return ((T (*)(CSAttendDesc*, uint32_t))(Il2CppBase() + 0x51E4A90))(this, value);
	}
	template <typename T = uint32_t> T get_notAttendTimes() {
		return ((T (*)(CSAttendDesc*))(Il2CppBase() + 0x51E4A98))(this);
	}
	template <typename T = void> T set_notAttendTimes(uint32_t value) {
		return ((T (*)(CSAttendDesc*, uint32_t))(Il2CppBase() + 0x51E4AA0))(this, value);
	}
	template <typename T = bool> T get_popUpFlag() {
		return ((T (*)(CSAttendDesc*))(Il2CppBase() + 0x51E4AA8))(this);
	}
	template <typename T = void> T set_popUpFlag(bool value) {
		return ((T (*)(CSAttendDesc*, bool))(Il2CppBase() + 0x51E4AB0))(this, value);
	}
	template <typename T = bool> T get_newPlayerFlag() {
		return ((T (*)(CSAttendDesc*))(Il2CppBase() + 0x51E4AB8))(this);
	}
	template <typename T = void> T set_newPlayerFlag(bool value) {
		return ((T (*)(CSAttendDesc*, bool))(Il2CppBase() + 0x51E4AC0))(this, value);
	}
	template <typename T = uint64_t> T get_first_attend_time() {
		return ((T (*)(CSAttendDesc*))(Il2CppBase() + 0x51E4AC8))(this);
	}
	template <typename T = void> T set_first_attend_time(uint64_t value) {
		return ((T (*)(CSAttendDesc*, uint64_t))(Il2CppBase() + 0x51E4AD0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSAttendDesc*, bool))(Il2CppBase() + 0x51E4AE0))(this, createIfMissing);
	}

};

}
