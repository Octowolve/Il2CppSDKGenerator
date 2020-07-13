#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ZMMPPassTaskWindowView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ZMMPPassTaskWindowView"));
	}

	template <typename T = uintptr_t> T& LabelTime() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& SpriteNewRecord() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& LabelMapName() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& LabelBossName() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& SpriteBossIcon() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMatchTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMapName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBossName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBossIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T SetMatchTime(uintptr_t res) {
		return ((T (*)(ZMMPPassTaskWindowView*, uintptr_t))(Il2CppBase() + 0x4DD9E94))(this, res);
	}
	template <typename T = void> T SetMapName(Il2CppString* mapName) {
		return ((T (*)(ZMMPPassTaskWindowView*, Il2CppString*))(Il2CppBase() + 0x4DD9C70))(this, mapName);
	}
	template <typename T = void> T SetBossName(Il2CppString* bossName) {
		return ((T (*)(ZMMPPassTaskWindowView*, Il2CppString*))(Il2CppBase() + 0x4DDA424))(this, bossName);
	}
	template <typename T = void> T SetBossIcon(Il2CppString* bossIcon) {
		return ((T (*)(ZMMPPassTaskWindowView*, Il2CppString*))(Il2CppBase() + 0x4DD9D64))(this, bossIcon);
	}

};

}
