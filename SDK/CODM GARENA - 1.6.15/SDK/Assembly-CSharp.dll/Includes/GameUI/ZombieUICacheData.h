#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ZombieUICacheData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ZombieUICacheData"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& AutoFireTipsShowMapId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& GrapFaceTipsShowMapId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& PickUpItemTipsShowMapId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& UseUltSkillTipsShowMapId() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}


};

}
