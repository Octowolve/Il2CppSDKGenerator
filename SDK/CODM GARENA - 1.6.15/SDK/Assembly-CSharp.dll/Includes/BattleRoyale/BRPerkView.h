#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRPerkView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRPerkView"));
	}

	template <typename T = uintptr_t> T& Perk() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& LevelUpEffect() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(BRPerkView*))(Il2CppBase() + 0x1AC7234))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(BRPerkView*))(Il2CppBase() + 0x1AC723C))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(BRPerkView*))(Il2CppBase() + 0x1AC724C))(this);
	}
	template <typename T = void> T RefreshView() {
		return ((T (*)(BRPerkView*))(Il2CppBase() + 0x1AC6FA4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(BRPerkView*))(Il2CppBase() + 0x1AC7344))(this);
	}

};

}
