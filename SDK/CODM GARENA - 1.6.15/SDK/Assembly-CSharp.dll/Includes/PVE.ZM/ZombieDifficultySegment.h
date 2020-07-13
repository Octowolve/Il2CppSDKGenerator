#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.ZM {

class ZombieDifficultySegment
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.ZM", "ZombieDifficultySegment"));
	}

	template <typename T = uintptr_t> T& Title() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& NrBG() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& HgBG() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& LockIcon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& mLock() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& mSelected() {
		return *(T*)((uintptr_t)this + 0x1D);
	}
	template <typename T = uintptr_t> T& mDifficulty() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& ClickDel() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClickSegment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T set_Lock(bool value) {
		return ((T (*)(ZombieDifficultySegment*, bool))(Il2CppBase() + 0x4065E24))(this, value);
	}
	template <typename T = bool> T get_Lock() {
		return ((T (*)(ZombieDifficultySegment*))(Il2CppBase() + 0x4065F44))(this);
	}
	template <typename T = void> T set_Selected(bool value) {
		return ((T (*)(ZombieDifficultySegment*, bool))(Il2CppBase() + 0x4065F4C))(this, value);
	}
	template <typename T = void> T set_Difficulty(uintptr_t value) {
		return ((T (*)(ZombieDifficultySegment*, uintptr_t))(Il2CppBase() + 0x4066070))(this, value);
	}
	template <typename T = uintptr_t> T get_Difficulty() {
		return ((T (*)(ZombieDifficultySegment*))(Il2CppBase() + 0x40661F8))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ZombieDifficultySegment*))(Il2CppBase() + 0x4066200))(this);
	}
	template <typename T = void> T ClickSegment(uintptr_t go) {
		return ((T (*)(ZombieDifficultySegment*, uintptr_t))(Il2CppBase() + 0x4066314))(this, go);
	}

};

}
