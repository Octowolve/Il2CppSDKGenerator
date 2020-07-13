#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ZombieDataPersistent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ZombieDataPersistent"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& Key_LastChooseZmCompaignDifficulty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveLastChooseZmCompaignDifficulty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLastChooseZmCompaignDifficulty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasLastChooseZmCompaignDifficulty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T SaveLastChooseZmCompaignDifficulty(int32_t difficultyLevelId) {
		return ((T (*)(ZombieDataPersistent*, int32_t))(Il2CppBase() + 0x4DDEFF4))(this, difficultyLevelId);
	}
	template <typename T = int32_t> T GetLastChooseZmCompaignDifficulty() {
		return ((T (*)(ZombieDataPersistent*))(Il2CppBase() + 0x4DDF194))(this);
	}
	template <typename T = bool> T HasLastChooseZmCompaignDifficulty() {
		return ((T (*)(ZombieDataPersistent*))(Il2CppBase() + 0x4DDF318))(this);
	}

};

}
