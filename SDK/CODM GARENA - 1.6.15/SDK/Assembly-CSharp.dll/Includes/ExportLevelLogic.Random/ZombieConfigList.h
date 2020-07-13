#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ExportLevelLogic.Random {

class ZombieConfigList
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ExportLevelLogic.Random", "ZombieConfigList"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& UniqueID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& SpawnInterval() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& ZombieTotalPower() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& TotalMonterPromotion() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& ConfigList() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
