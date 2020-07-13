#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameDataStore.Career {

class HigherAchievement
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameDataStore.Career", "HigherAchievement"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& Lv() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Progress() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& IconSpriteName() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& AchievementName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& AchievementDesc() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
