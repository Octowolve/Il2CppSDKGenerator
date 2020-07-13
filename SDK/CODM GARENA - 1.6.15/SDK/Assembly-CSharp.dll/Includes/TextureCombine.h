#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TextureCombine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TextureCombine"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_CombineBlocks() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> static T CombineBlocks(Il2CppArray<uintptr_t>* src, Il2CppArray<uintptr_t>* dst, int32_t dstx, int32_t dsty, int32_t width, int32_t block, int32_t bytes, int32_t length) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x4657040))(0, src, dst, dstx, dsty, width, block, bytes, length);
	}

};

}
