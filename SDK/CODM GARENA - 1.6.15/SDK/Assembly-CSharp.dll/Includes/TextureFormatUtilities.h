#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TextureFormatUtilities
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TextureFormatUtilities"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> static T& s_FormatMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUncompressedRenderTextureFormat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> static T GetUncompressedRenderTextureFormat(uintptr_t texture) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4657628))(0, texture);
	}

};

}
