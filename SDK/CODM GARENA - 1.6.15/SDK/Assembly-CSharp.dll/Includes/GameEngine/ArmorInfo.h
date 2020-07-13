#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class ArmorInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "ArmorInfo"));
	}

	template <typename T = uint64_t> T& ItemID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBulletproofVest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBulletproofHelmet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsHeavyHarmor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = bool> T IsBulletproofVest() {
		return ((T (*)(ArmorInfo*))(Il2CppBase() + 0x2B65DA8))(this);
	}
	template <typename T = bool> T IsBulletproofHelmet() {
		return ((T (*)(ArmorInfo*))(Il2CppBase() + 0x2B65EB8))(this);
	}
	template <typename T = bool> T IsHeavyHarmor() {
		return ((T (*)(ArmorInfo*))(Il2CppBase() + 0x2B65FCC))(this);
	}

};

}
