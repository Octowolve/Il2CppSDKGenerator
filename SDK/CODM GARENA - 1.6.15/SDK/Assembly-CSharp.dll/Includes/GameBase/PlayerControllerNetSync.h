#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class PlayerControllerNetSync
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "PlayerControllerNetSync"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBagSelected() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNtfObtainKillStreakSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T PreInit() {
		return ((T (*)(PlayerControllerNetSync*))(Il2CppBase() + 0x16E06FC))(this);
	}
	template <typename T = void> T OnNotifyBagSelected(uintptr_t Msg) {
		return ((T (*)(PlayerControllerNetSync*, uintptr_t))(Il2CppBase() + 0x16E084C))(this, Msg);
	}
	template <typename T = void> T OnNtfObtainKillStreakSkill(uintptr_t msg) {
		return ((T (*)(PlayerControllerNetSync*, uintptr_t))(Il2CppBase() + 0x16E0EC4))(this, msg);
	}
	template <typename T = void> T xLuaBaseProxy_PreInit() {
		return ((T (*)(PlayerControllerNetSync*))(Il2CppBase() + 0x16E1104))(this);
	}

};

}
