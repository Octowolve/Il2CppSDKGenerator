#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class TextGenerationSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "TextGenerationSettings"));
	}

	template <typename T = uintptr_t> T& font() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& color() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& fontSize() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& lineSpacing() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& richText() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& scaleFactor() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& fontStyle() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& textAnchor() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& alignByGeometry() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& resizeTextForBestFit() {
		return *(T*)((uintptr_t)this + 0x2D);
	}
	template <typename T = int32_t> T& resizeTextMinSize() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& resizeTextMaxSize() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& updateBounds() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& verticalOverflow() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& horizontalOverflow() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppVector2> T& generationExtents() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppVector2> T& pivot() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& generateOutOfBounds() {
		return *(T*)((uintptr_t)this + 0x54);
	}

	template <typename T = bool> T CompareColors(uintptr_t left, uintptr_t right) {
		return ((T (*)(TextGenerationSettings*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D2ED78))(this, left, right);
	}
	template <typename T = bool> T CompareVector2(Il2CppVector2 left, Il2CppVector2 right) {
		return ((T (*)(TextGenerationSettings*, Il2CppVector2, Il2CppVector2))(Il2CppBase() + 0x4D2EEC4))(this, left, right);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(TextGenerationSettings*, uintptr_t))(Il2CppBase() + 0x4D2F20C))(this, other);
	}

};

}
