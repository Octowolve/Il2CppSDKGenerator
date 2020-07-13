#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SquadTeamEffectObjectController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SquadTeamEffectObjectController"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& ObjectHideWhenFocus() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& background1() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& background1_blur() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& background1_Mat() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& background2() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& background2_blur() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& background2_Mat() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FocusOn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FocusBlur() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetBlur() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Start() {
		return ((T (*)(SquadTeamEffectObjectController*))(Il2CppBase() + 0x394CA84))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(SquadTeamEffectObjectController*))(Il2CppBase() + 0x394CB1C))(this);
	}
	template <typename T = void> T FocusOn() {
		return ((T (*)(SquadTeamEffectObjectController*))(Il2CppBase() + 0x394B060))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(SquadTeamEffectObjectController*))(Il2CppBase() + 0x394A8E4))(this);
	}
	template <typename T = void> T FocusBlur() {
		return ((T (*)(SquadTeamEffectObjectController*))(Il2CppBase() + 0x394B890))(this);
	}
	template <typename T = void> T ResetBlur() {
		return ((T (*)(SquadTeamEffectObjectController*))(Il2CppBase() + 0x394BB98))(this);
	}

};

}
