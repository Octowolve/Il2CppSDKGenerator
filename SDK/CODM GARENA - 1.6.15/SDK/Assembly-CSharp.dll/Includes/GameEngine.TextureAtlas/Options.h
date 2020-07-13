#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine.TextureAtlas {

class Options
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine.TextureAtlas", "Options"));
	}

	template <typename T = bool> T& SplitMesh() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& CombineMesh() {
		return *(T*)((uintptr_t)this + 0x9);
	}
	template <typename T = bool> T& DestroyLOD() {
		return *(T*)((uintptr_t)this + 0xA);
	}
	template <typename T = bool> T& RestrictShaderProps() {
		return *(T*)((uintptr_t)this + 0xB);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
