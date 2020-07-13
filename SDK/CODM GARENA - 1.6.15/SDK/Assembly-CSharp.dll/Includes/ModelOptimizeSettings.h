#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ModelOptimizeSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ModelOptimizeSettings"));
	}

	template <typename T = bool> T& UVForWeight() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& NeedGPUSkinGlobal() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = bool> T& CacheOptimizedMesh() {
		return *(T*)((uintptr_t)this + 0xE);
	}
	template <typename T = bool> T& UseNativeGPUSkin() {
		return *(T*)((uintptr_t)this + 0xF);
	}
	template <typename T = bool> T& UseNativeRebuild() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& UseNativeBuildSimpleBoneWeight() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& MeshOptimizeConfigs() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& OptimizeConfigs() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& NowCombineTestType() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& TestCloseCacheMesh() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ModelOptimizeSettings*))(Il2CppBase() + 0x3301990))(this);
	}
	template <typename T = void> T InitConfig() {
		return ((T (*)(ModelOptimizeSettings*))(Il2CppBase() + 0x3301A34))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ModelOptimizeSettings*))(Il2CppBase() + 0x3301B70))(this);
	}

};

}
