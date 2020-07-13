#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRKillInfoHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRKillInfoHUD"));
	}

	template <typename T = uintptr_t> T& KillInfo() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& KillNum() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& KillInfoBackgroundSprite() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& KillNumBackgroundSprite() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& killIcon() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& AlphaTween() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& Widget() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = float> T& ShowTime() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& IsStartCoutTime() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppString*>*> T& DamageLocid() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Start() {
		return ((T (*)(BRKillInfoHUD*))(Il2CppBase() + 0x1949008))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(BRKillInfoHUD*))(Il2CppBase() + 0x19490F0))(this);
	}
	template <typename T = void> T SetInfo(uintptr_t killInfo) {
		return ((T (*)(BRKillInfoHUD*, uintptr_t))(Il2CppBase() + 0x1936108))(this, killInfo);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(BRKillInfoHUD*))(Il2CppBase() + 0x1949218))(this);
	}

};

}
