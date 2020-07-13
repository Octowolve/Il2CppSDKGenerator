#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NGUITextContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NGUITextContext"));
	}

	template <typename T = uintptr_t> T& bitmapFont() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& dynamicFont() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& fontSize() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& fontScale() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& pixelDensity() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& fontStyle() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& alignment() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& tint() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& rectWidth() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& rectHeight() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& regionWidth() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& regionHeight() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& maxLines() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& gradient() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& gradientBottom() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& gradientTop() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& encoding() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& spacingX() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& spacingY() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& premultiply() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& symbolStyle() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& finalSize() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& finalSpacingX() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& finalLineHeight() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& baseline() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = bool> T& useSymbols() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateContext() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateBaseline() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T UpdateContext() {
		return ((T (*)(NGUITextContext*))(Il2CppBase() + 0x43D18C8))(this);
	}
	template <typename T = void> T UpdateBaseline() {
		return ((T (*)(NGUITextContext*))(Il2CppBase() + 0x43D1A58))(this);
	}

};

}
