#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class PerkTextureSet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "PerkTextureSet"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& PerkTextures() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T GetTexture(Il2CppString* TextureName, uint32_t itemId) {
		return ((T (*)(PerkTextureSet*, Il2CppString*, uint32_t))(Il2CppBase() + 0x38416F0))(this, TextureName, itemId);
	}

};

}
