#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ZombieAssetInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ZombieAssetInfo"));
	}

	template <typename T = uintptr_t> T& MeshID() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& Mesh2ID() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& ExtraAssets() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& PlayMakerTemplateId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& AnimatorLoaderInfoID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T& PreloadCountDic() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(ZombieAssetInfo*))(Il2CppBase() + 0x395F594))(this);
	}

};

}
