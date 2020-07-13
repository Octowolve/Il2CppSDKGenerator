#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine.TextureAtlas {

class AtlasUVTrans
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine.TextureAtlas", "AtlasUVTrans"));
	}

	template <typename T = Il2CppString*> T& propName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& startIndex() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& packedData() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
