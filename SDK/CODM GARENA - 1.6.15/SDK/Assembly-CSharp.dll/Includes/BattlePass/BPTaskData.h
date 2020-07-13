#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BPTaskData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BPTaskData"));
	}

	template <typename T = uintptr_t> T& TaskModeType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& TaskID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& TaskPoint() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& TaskState() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int64_t> T& TaskClearTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_TaskModeType() {
		return ((T (*)(BPTaskData*))(Il2CppBase() + 0x2C4F484))(this);
	}
	template <typename T = void> T set_TaskModeType(uintptr_t value) {
		return ((T (*)(BPTaskData*, uintptr_t))(Il2CppBase() + 0x2C4F454))(this, value);
	}
	template <typename T = int32_t> T get_TaskID() {
		return ((T (*)(BPTaskData*))(Il2CppBase() + 0x2C3C118))(this);
	}
	template <typename T = void> T set_TaskID(int32_t value) {
		return ((T (*)(BPTaskData*, int32_t))(Il2CppBase() + 0x2C4F45C))(this, value);
	}
	template <typename T = int32_t> T get_TaskPoint() {
		return ((T (*)(BPTaskData*))(Il2CppBase() + 0x2C43368))(this);
	}
	template <typename T = void> T set_TaskPoint(int32_t value) {
		return ((T (*)(BPTaskData*, int32_t))(Il2CppBase() + 0x2C4F464))(this, value);
	}
	template <typename T = uintptr_t> T get_TaskState() {
		return ((T (*)(BPTaskData*))(Il2CppBase() + 0x2C3DEA4))(this);
	}
	template <typename T = void> T set_TaskState(uintptr_t value) {
		return ((T (*)(BPTaskData*, uintptr_t))(Il2CppBase() + 0x2C4F46C))(this, value);
	}
	template <typename T = int64_t> T get_TaskClearTime() {
		return ((T (*)(BPTaskData*))(Il2CppBase() + 0x2C4F48C))(this);
	}
	template <typename T = void> T set_TaskClearTime(int64_t value) {
		return ((T (*)(BPTaskData*, int64_t))(Il2CppBase() + 0x2C4F474))(this, value);
	}

};

}
