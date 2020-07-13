#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpawnPoolStatItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpawnPoolStatItem"));
	}

	template <typename T = int32_t> T& instanceId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& assetId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& spawnCount() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& despawnCount() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& activateCount() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& deactivateCount() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& cacheCountAverage() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& cacheCountMax() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& createCount() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& prewarmCount() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& transformCount() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& componentCount() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& rendererCount() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& particleSystemCount() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& animatorCount() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}


};

}
