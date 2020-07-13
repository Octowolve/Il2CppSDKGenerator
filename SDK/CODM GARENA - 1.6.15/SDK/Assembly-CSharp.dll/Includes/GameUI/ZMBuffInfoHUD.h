#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ZMBuffInfoHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ZMBuffInfoHUD"));
	}

	template <typename T = uintptr_t> T& PowerUpGrid() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& PowerUpSpriteTemplate() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& AllPowerup() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAddPowerUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddPowerUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeleteAllPowerup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustPowerUpGridPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ZMBuffInfoHUD*))(Il2CppBase() + 0x2A42D5C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ZMBuffInfoHUD*))(Il2CppBase() + 0x2A42E70))(this);
	}
	template <typename T = void> T OnAddPowerUp(uintptr_t msg) {
		return ((T (*)(ZMBuffInfoHUD*, uintptr_t))(Il2CppBase() + 0x2A42F2C))(this, msg);
	}
	template <typename T = void> T AddPowerUp(uintptr_t item) {
		return ((T (*)(ZMBuffInfoHUD*, uintptr_t))(Il2CppBase() + 0x2A430E0))(this, item);
	}
	template <typename T = void> T DeleteAllPowerup() {
		return ((T (*)(ZMBuffInfoHUD*))(Il2CppBase() + 0x2A43764))(this);
	}
	template <typename T = void> T AdjustPowerUpGridPosition() {
		return ((T (*)(ZMBuffInfoHUD*))(Il2CppBase() + 0x2A43644))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ZMBuffInfoHUD*))(Il2CppBase() + 0x2A43904))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ZMBuffInfoHUD*))(Il2CppBase() + 0x2A4390C))(this);
	}

};

}
