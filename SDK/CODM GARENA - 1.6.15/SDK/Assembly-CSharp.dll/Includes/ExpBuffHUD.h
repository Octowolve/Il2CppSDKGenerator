#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ExpBuffHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExpBuffHUD"));
	}

	template <typename T = uintptr_t> T& PlayerIcon() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& WeaponIcon() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& RankIcon() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& BPIcon() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& PlayerBuffNumLabel() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& WeaponBuffNumLabel() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& IconXPosFor1() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& IconXPosFor2() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& IconXPosFor3() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& IconXPosFor4() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ShowIcons() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = float> T& ShowTime() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& BRShowTime() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = bool> T& bHasShowHUD() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideExpBuffHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T CheckShow() {
		return ((T (*)(ExpBuffHUD*))(Il2CppBase() + 0x4BD4B8C))(this);
	}
	template <typename T = void> T HideExpBuffHUD() {
		return ((T (*)(ExpBuffHUD*))(Il2CppBase() + 0x4BD5CC4))(this);
	}

};

}
