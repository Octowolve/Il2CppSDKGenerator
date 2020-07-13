#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class GUIScrollGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "GUIScrollGroup"));
	}

	template <typename T = float> T& calcMinWidth() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& calcMaxWidth() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& calcMinHeight() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& calcMaxHeight() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& clientWidth() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& clientHeight() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& allowHorizontalScroll() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = bool> T& allowVerticalScroll() {
		return *(T*)((uintptr_t)this + 0x85);
	}
	template <typename T = bool> T& needsHorizontalScrollbar() {
		return *(T*)((uintptr_t)this + 0x86);
	}
	template <typename T = bool> T& needsVerticalScrollbar() {
		return *(T*)((uintptr_t)this + 0x87);
	}
	template <typename T = uintptr_t> T& horizontalScrollbar() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& verticalScrollbar() {
		return *(T*)((uintptr_t)this + 0x8C);
	}

	template <typename T = void> T CalcWidth() {
		return ((T (*)(GUIScrollGroup*))(Il2CppBase() + 0x479852C))(this);
	}
	template <typename T = void> T SetHorizontal(float x, float width) {
		return ((T (*)(GUIScrollGroup*, float, float))(Il2CppBase() + 0x47985BC))(this, x, width);
	}
	template <typename T = void> T CalcHeight() {
		return ((T (*)(GUIScrollGroup*))(Il2CppBase() + 0x47986E4))(this);
	}
	template <typename T = void> T SetVertical(float y, float height) {
		return ((T (*)(GUIScrollGroup*, float, float))(Il2CppBase() + 0x47987E8))(this, y, height);
	}

};

}
