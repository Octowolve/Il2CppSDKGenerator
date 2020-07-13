#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CacheItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CacheItem"));
	}

	template <typename T = uintptr_t> static T& glyph() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& FontStyle() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& FinalSize() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& FontInstanceId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& Baseline() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& GlyphMap() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateBaseline() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = void> T UpdateBaseline(uintptr_t font, int32_t finalSize, uintptr_t fontStyle) {
		return ((T (*)(CacheItem*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x3ECD248))(this, font, finalSize, fontStyle);
	}

};

}
