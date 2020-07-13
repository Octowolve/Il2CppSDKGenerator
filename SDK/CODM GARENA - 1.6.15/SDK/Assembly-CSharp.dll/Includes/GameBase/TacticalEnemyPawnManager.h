#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalEnemyPawnManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalEnemyPawnManager"));
	}

	template <typename T = int32_t> T& usedSpriteNum() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateEnemySpriteList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePlayerSpriteInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Init() {
		return ((T (*)(TacticalEnemyPawnManager*))(Il2CppBase() + 0x30CAB9C))(this);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(TacticalEnemyPawnManager*))(Il2CppBase() + 0x30BA7D4))(this);
	}
	template <typename T = void> T UpdateEnemySpriteList(Il2CppList<uintptr_t>* inPawnList, Il2CppList<uintptr_t>* inPawnSpriteList) {
		return ((T (*)(TacticalEnemyPawnManager*, Il2CppList<uintptr_t>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x30CAE74))(this, inPawnList, inPawnSpriteList);
	}
	template <typename T = bool> T UpdatePlayerSpriteInfo(uintptr_t inPawnSprite, uintptr_t inPawn) {
		return ((T (*)(TacticalEnemyPawnManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x30CB2A4))(this, inPawnSprite, inPawn);
	}
	template <typename T = bool> static T UpdateViewm__0(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x30CB4AC))(0, x);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(TacticalEnemyPawnManager*))(Il2CppBase() + 0x30CB558))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateView() {
		return ((T (*)(TacticalEnemyPawnManager*))(Il2CppBase() + 0x30CB560))(this);
	}

};

}
