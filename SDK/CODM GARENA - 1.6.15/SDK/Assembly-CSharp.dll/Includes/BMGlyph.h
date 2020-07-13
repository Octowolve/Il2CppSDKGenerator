#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BMGlyph
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BMGlyph"));
	}

	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& x() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& y() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& width() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& height() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& offsetX() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& offsetY() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& advance() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& channel() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<int32_t>*> T& kerning() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetKerning() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetKerning() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Trim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = int32_t> T GetKerning(int32_t previousChar) {
		return ((T (*)(BMGlyph*, int32_t))(Il2CppBase() + 0x35BEF60))(this, previousChar);
	}
	template <typename T = void> T SetKerning(int32_t previousChar, int32_t amount) {
		return ((T (*)(BMGlyph*, int32_t, int32_t))(Il2CppBase() + 0x35BF0CC))(this, previousChar, amount);
	}
	template <typename T = void> T Trim(int32_t xMin, int32_t yMin, int32_t xMax, int32_t yMax) {
		return ((T (*)(BMGlyph*, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x35BEE18))(this, xMin, yMin, xMax, yMax);
	}

};

}
