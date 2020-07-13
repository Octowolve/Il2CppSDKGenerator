#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ZMBossCommingTipsHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ZMBossCommingTipsHUD"));
	}

	template <typename T = uintptr_t> T& Root() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& AllTween() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayTweens() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHideHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ZMBossCommingTipsHUD*))(Il2CppBase() + 0x2A42778))(this);
	}
	template <typename T = void> T ShowTips(float duration) {
		return ((T (*)(ZMBossCommingTipsHUD*, float))(Il2CppBase() + 0x2A428A0))(this, duration);
	}
	template <typename T = void> T PlayTweens(Il2CppArray<uintptr_t>* alltween) {
		return ((T (*)(ZMBossCommingTipsHUD*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2A42A24))(this, alltween);
	}
	template <typename T = void> T OnHideHUD() {
		return ((T (*)(ZMBossCommingTipsHUD*))(Il2CppBase() + 0x2A42B2C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(ZMBossCommingTipsHUD*))(Il2CppBase() + 0x2A42C7C))(this);
	}

};

}
