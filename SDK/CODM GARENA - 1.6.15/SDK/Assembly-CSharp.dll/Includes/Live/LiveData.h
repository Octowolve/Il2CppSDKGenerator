#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Live {

class LiveData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Live", "LiveData"));
	}

	template <typename T = Il2CppString*> T& StreamLink() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& StartTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& EndTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& StartTimestamp() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint32_t> T& EndTimestamp() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& ShowReddot() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& ShowReddotStartTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& ShowReddotEndTime() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uint32_t> T& ShowReddotStartTimestamp() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uint32_t> T& ShowReddotEndTimestamp() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uint32_t> T& RegionId() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& HasClick() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> T get_StreamLink() {
		return ((T (*)(LiveData*))(Il2CppBase() + 0x493EEB0))(this);
	}
	template <typename T = void> T set_StreamLink(Il2CppString* value) {
		return ((T (*)(LiveData*, Il2CppString*))(Il2CppBase() + 0x493EE18))(this, value);
	}
	template <typename T = uintptr_t> T get_StartTime() {
		return ((T (*)(LiveData*))(Il2CppBase() + 0x493EEB8))(this);
	}
	template <typename T = void> T set_StartTime(uintptr_t value) {
		return ((T (*)(LiveData*, uintptr_t))(Il2CppBase() + 0x493EE20))(this, value);
	}
	template <typename T = uintptr_t> T get_EndTime() {
		return ((T (*)(LiveData*))(Il2CppBase() + 0x493EEC8))(this);
	}
	template <typename T = void> T set_EndTime(uintptr_t value) {
		return ((T (*)(LiveData*, uintptr_t))(Il2CppBase() + 0x493EE38))(this, value);
	}
	template <typename T = uint32_t> T get_StartTimestamp() {
		return ((T (*)(LiveData*))(Il2CppBase() + 0x493EED8))(this);
	}
	template <typename T = void> T set_StartTimestamp(uint32_t value) {
		return ((T (*)(LiveData*, uint32_t))(Il2CppBase() + 0x493EE80))(this, value);
	}
	template <typename T = uint32_t> T get_EndTimestamp() {
		return ((T (*)(LiveData*))(Il2CppBase() + 0x493EEE0))(this);
	}
	template <typename T = void> T set_EndTimestamp(uint32_t value) {
		return ((T (*)(LiveData*, uint32_t))(Il2CppBase() + 0x493EE88))(this, value);
	}
	template <typename T = bool> T get_ShowReddot() {
		return ((T (*)(LiveData*))(Il2CppBase() + 0x493EEE8))(this);
	}
	template <typename T = void> T set_ShowReddot(bool value) {
		return ((T (*)(LiveData*, bool))(Il2CppBase() + 0x493EE90))(this, value);
	}
	template <typename T = uintptr_t> T get_ShowReddotStartTime() {
		return ((T (*)(LiveData*))(Il2CppBase() + 0x493EEF0))(this);
	}
	template <typename T = void> T set_ShowReddotStartTime(uintptr_t value) {
		return ((T (*)(LiveData*, uintptr_t))(Il2CppBase() + 0x493EE50))(this, value);
	}
	template <typename T = uintptr_t> T get_ShowReddotEndTime() {
		return ((T (*)(LiveData*))(Il2CppBase() + 0x493EF00))(this);
	}
	template <typename T = void> T set_ShowReddotEndTime(uintptr_t value) {
		return ((T (*)(LiveData*, uintptr_t))(Il2CppBase() + 0x493EE68))(this, value);
	}
	template <typename T = uint32_t> T get_ShowReddotStartTimestamp() {
		return ((T (*)(LiveData*))(Il2CppBase() + 0x493EF10))(this);
	}
	template <typename T = void> T set_ShowReddotStartTimestamp(uint32_t value) {
		return ((T (*)(LiveData*, uint32_t))(Il2CppBase() + 0x493EE98))(this, value);
	}
	template <typename T = uint32_t> T get_ShowReddotEndTimestamp() {
		return ((T (*)(LiveData*))(Il2CppBase() + 0x493EF18))(this);
	}
	template <typename T = void> T set_ShowReddotEndTimestamp(uint32_t value) {
		return ((T (*)(LiveData*, uint32_t))(Il2CppBase() + 0x493EEA0))(this, value);
	}
	template <typename T = uint32_t> T get_RegionId() {
		return ((T (*)(LiveData*))(Il2CppBase() + 0x493EF20))(this);
	}
	template <typename T = void> T set_RegionId(uint32_t value) {
		return ((T (*)(LiveData*, uint32_t))(Il2CppBase() + 0x493EEA8))(this, value);
	}
	template <typename T = bool> T get_HasClick() {
		return ((T (*)(LiveData*))(Il2CppBase() + 0x493EF28))(this);
	}
	template <typename T = void> T set_HasClick(bool value) {
		return ((T (*)(LiveData*, bool))(Il2CppBase() + 0x493EF30))(this, value);
	}

};

}
