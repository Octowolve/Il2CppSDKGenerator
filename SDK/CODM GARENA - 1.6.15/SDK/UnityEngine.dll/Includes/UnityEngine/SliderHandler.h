#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class SliderHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "SliderHandler"));
	}

	template <typename T = Il2CppRect> T& position() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& currentValue() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& size() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& start() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& end() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& slider() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& thumb() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& horiz() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& id() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = float> T Handle() {
		return ((T (*)(SliderHandler*))(Il2CppBase() + 0x4E83F44))(this);
	}
	template <typename T = float> T OnMouseDown() {
		return ((T (*)(SliderHandler*))(Il2CppBase() + 0x4E8464C))(this);
	}
	template <typename T = float> T OnMouseDrag() {
		return ((T (*)(SliderHandler*))(Il2CppBase() + 0x4E84818))(this);
	}
	template <typename T = float> T OnMouseUp() {
		return ((T (*)(SliderHandler*))(Il2CppBase() + 0x4E84820))(this);
	}
	template <typename T = float> T OnRepaint() {
		return ((T (*)(SliderHandler*))(Il2CppBase() + 0x4E84874))(this);
	}
	template <typename T = uintptr_t> T CurrentEventType() {
		return ((T (*)(SliderHandler*))(Il2CppBase() + 0x4E8487C))(this);
	}
	template <typename T = int32_t> T CurrentScrollTroughSide() {
		return ((T (*)(SliderHandler*))(Il2CppBase() + 0x4E84884))(this);
	}
	template <typename T = bool> T IsEmptySlider() {
		return ((T (*)(SliderHandler*))(Il2CppBase() + 0x4E8488C))(this);
	}
	template <typename T = bool> T SupportsPageMovements() {
		return ((T (*)(SliderHandler*))(Il2CppBase() + 0x4E848A8))(this);
	}
	template <typename T = float> T PageMovementValue() {
		return ((T (*)(SliderHandler*))(Il2CppBase() + 0x4E84978))(this);
	}
	template <typename T = float> T PageUpMovementBound() {
		return ((T (*)(SliderHandler*))(Il2CppBase() + 0x4E84980))(this);
	}
	template <typename T = uintptr_t> T CurrentEvent() {
		return ((T (*)(SliderHandler*))(Il2CppBase() + 0x4E84988))(this);
	}
	template <typename T = float> T ValueForCurrentMousePosition() {
		return ((T (*)(SliderHandler*))(Il2CppBase() + 0x4E84994))(this);
	}
	template <typename T = float> T Clamp(float value) {
		return ((T (*)(SliderHandler*, float))(Il2CppBase() + 0x4E84B24))(this, value);
	}
	template <typename T = Il2CppRect> T ThumbSelectionRect() {
		return ((T (*)(SliderHandler*))(Il2CppBase() + 0x4E84B2C))(this);
	}
	template <typename T = void> T StartDraggingWithValue(float dragStartValue) {
		return ((T (*)(SliderHandler*, float))(Il2CppBase() + 0x4E84B64))(this, dragStartValue);
	}
	template <typename T = uintptr_t> T SliderState() {
		return ((T (*)(SliderHandler*))(Il2CppBase() + 0x4E84B6C))(this);
	}
	template <typename T = Il2CppRect> T ThumbRect() {
		return ((T (*)(SliderHandler*))(Il2CppBase() + 0x4E851B4))(this);
	}
	template <typename T = Il2CppRect> T VerticalThumbRect() {
		return ((T (*)(SliderHandler*))(Il2CppBase() + 0x4E8529C))(this);
	}
	template <typename T = Il2CppRect> T HorizontalThumbRect() {
		return ((T (*)(SliderHandler*))(Il2CppBase() + 0x4E852B0))(this);
	}
	template <typename T = float> T ClampedCurrentValue() {
		return ((T (*)(SliderHandler*))(Il2CppBase() + 0x4E852C4))(this);
	}
	template <typename T = float> T MousePosition() {
		return ((T (*)(SliderHandler*))(Il2CppBase() + 0x4E852D0))(this);
	}
	template <typename T = float> T ValuesPerPixel() {
		return ((T (*)(SliderHandler*))(Il2CppBase() + 0x4E852D8))(this);
	}
	template <typename T = float> T ThumbSize() {
		return ((T (*)(SliderHandler*))(Il2CppBase() + 0x4E852E0))(this);
	}
	template <typename T = float> T MaxValue() {
		return ((T (*)(SliderHandler*))(Il2CppBase() + 0x4E852E8))(this);
	}
	template <typename T = float> T MinValue() {
		return ((T (*)(SliderHandler*))(Il2CppBase() + 0x4E852F0))(this);
	}

};

}
