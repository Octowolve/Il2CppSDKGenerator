#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class FPAvatarAnimationSyncController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "FPAvatarAnimationSyncController"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& CachedTransforms() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncPose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Init() {
		return ((T (*)(FPAvatarAnimationSyncController*))(Il2CppBase() + 0x51C18F0))(this);
	}
	template <typename T = void> T SyncPose(Il2CppArray<uintptr_t>* cachedTrans) {
		return ((T (*)(FPAvatarAnimationSyncController*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51C1C14))(this, cachedTrans);
	}

};

}
