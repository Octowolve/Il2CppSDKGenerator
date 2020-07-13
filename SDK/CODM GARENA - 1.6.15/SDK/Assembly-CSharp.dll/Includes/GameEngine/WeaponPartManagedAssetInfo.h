#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponPartManagedAssetInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponPartManagedAssetInfo"));
	}

	template <typename T = int32_t> T& WeaponActorID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& WeaponAssetID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& PendingUse() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& optimizedModel() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& cacheComposePart() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<void*>*> T& AllManagedAsset() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
