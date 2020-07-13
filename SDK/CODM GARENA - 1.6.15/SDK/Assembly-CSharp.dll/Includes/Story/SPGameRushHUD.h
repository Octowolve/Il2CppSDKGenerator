#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Story {

class SPGameRushHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Story", "SPGameRushHUD"));
	}

	template <typename T = uintptr_t> T& Widget() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& TimeLabel() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& TargetProgressLabel() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& TargetTotalLabel() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& m_RushGameInfo() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeforeLoadLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SPGameRushHUD*))(Il2CppBase() + 0x3F15344))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(SPGameRushHUD*))(Il2CppBase() + 0x3F1547C))(this);
	}
	template <typename T = void> T BeforeLoadLevel(uintptr_t msg) {
		return ((T (*)(SPGameRushHUD*, uintptr_t))(Il2CppBase() + 0x3F1575C))(this, msg);
	}
	template <typename T = void> T ResetData() {
		return ((T (*)(SPGameRushHUD*))(Il2CppBase() + 0x3F15808))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(SPGameRushHUD*))(Il2CppBase() + 0x3F15924))(this);
	}

};

}
