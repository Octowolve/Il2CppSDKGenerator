#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ZMLoadingItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ZMLoadingItemView"));
	}

	template <typename T = uintptr_t> T& iconSprite() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& maleSprite() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& femaleSprite() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& levelLabel() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& playerName() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& selfOverlay() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& ReviveCoinCount() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& BuffIconTemplate() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& BuffIconTable() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& playerRoot() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& emptyPlayerRoot() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLocalPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGender() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEmpty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBuffsAndCoin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T SetLocalPlayer(bool isLocal) {
		return ((T (*)(ZMLoadingItemView*, bool))(Il2CppBase() + 0x2A57DE0))(this, isLocal);
	}
	template <typename T = void> T SetGender(bool male) {
		return ((T (*)(ZMLoadingItemView*, bool))(Il2CppBase() + 0x2A57EB8))(this, male);
	}
	template <typename T = void> T SetLevel(Il2CppString* levelDesc) {
		return ((T (*)(ZMLoadingItemView*, Il2CppString*))(Il2CppBase() + 0x2A57FC0))(this, levelDesc);
	}
	template <typename T = void> T SetEmpty(bool empty) {
		return ((T (*)(ZMLoadingItemView*, bool))(Il2CppBase() + 0x2A58088))(this, empty);
	}
	template <typename T = void> T SetBuffsAndCoin(Il2CppList<uintptr_t>* buffs) {
		return ((T (*)(ZMLoadingItemView*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2A58168))(this, buffs);
	}

};

}
