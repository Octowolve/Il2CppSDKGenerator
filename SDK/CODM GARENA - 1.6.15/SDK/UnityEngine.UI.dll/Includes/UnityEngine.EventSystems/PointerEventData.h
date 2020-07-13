#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.EventSystems {

class PointerEventData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.EventSystems", "PointerEventData"));
	}

	template <typename T = uintptr_t> T& pointerEnter() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_PointerPress() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& lastPress() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& rawPointerPress() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& pointerDrag() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& pointerCurrentRaycast() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& pointerPressRaycast() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& hovered() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = bool> T& eligibleForClick() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& pointerId() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppVector2> T& position() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppVector2> T& delta() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppVector2> T& pressPosition() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppVector3> T& worldPosition() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppVector3> T& worldNormal() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = float> T& clickTime() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = int32_t> T& clickCount() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = Il2CppVector2> T& scrollDelta() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = bool> T& useDragThreshold() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = bool> T& dragging() {
		return *(T*)((uintptr_t)this + 0xE9);
	}
	template <typename T = uintptr_t> T& button() {
		return *(T*)((uintptr_t)this + 0xEC);
	}

	template <typename T = uintptr_t> T get_pointerEnter() {
		return ((T (*)(PointerEventData*))(Il2CppBase() + 0x3CFBD28))(this);
	}
	template <typename T = void> T set_pointerEnter(uintptr_t value) {
		return ((T (*)(PointerEventData*, uintptr_t))(Il2CppBase() + 0x3CFBDE0))(this, value);
	}
	template <typename T = uintptr_t> T get_lastPress() {
		return ((T (*)(PointerEventData*))(Il2CppBase() + 0x3D02864))(this);
	}
	template <typename T = void> T set_lastPress(uintptr_t value) {
		return ((T (*)(PointerEventData*, uintptr_t))(Il2CppBase() + 0x3D0286C))(this, value);
	}
	template <typename T = void> T set_rawPointerPress(uintptr_t value) {
		return ((T (*)(PointerEventData*, uintptr_t))(Il2CppBase() + 0x3D02874))(this, value);
	}
	template <typename T = uintptr_t> T get_pointerDrag() {
		return ((T (*)(PointerEventData*))(Il2CppBase() + 0x3D0287C))(this);
	}
	template <typename T = void> T set_pointerDrag(uintptr_t value) {
		return ((T (*)(PointerEventData*, uintptr_t))(Il2CppBase() + 0x3D02884))(this, value);
	}
	template <typename T = uintptr_t> T get_pointerCurrentRaycast() {
		return ((T (*)(PointerEventData*))(Il2CppBase() + 0x3D0288C))(this);
	}
	template <typename T = void> T set_pointerCurrentRaycast(uintptr_t value) {
		return ((T (*)(PointerEventData*, uintptr_t))(Il2CppBase() + 0x3D028F8))(this, value);
	}
	template <typename T = uintptr_t> T get_pointerPressRaycast() {
		return ((T (*)(PointerEventData*))(Il2CppBase() + 0x3D02960))(this);
	}
	template <typename T = void> T set_pointerPressRaycast(uintptr_t value) {
		return ((T (*)(PointerEventData*, uintptr_t))(Il2CppBase() + 0x3D029CC))(this, value);
	}
	template <typename T = bool> T get_eligibleForClick() {
		return ((T (*)(PointerEventData*))(Il2CppBase() + 0x3D02A34))(this);
	}
	template <typename T = void> T set_eligibleForClick(bool value) {
		return ((T (*)(PointerEventData*, bool))(Il2CppBase() + 0x3D027FC))(this, value);
	}
	template <typename T = int32_t> T get_pointerId() {
		return ((T (*)(PointerEventData*))(Il2CppBase() + 0x3D02A3C))(this);
	}
	template <typename T = void> T set_pointerId(int32_t value) {
		return ((T (*)(PointerEventData*, int32_t))(Il2CppBase() + 0x3D02804))(this, value);
	}
	template <typename T = Il2CppVector2> T get_position() {
		return ((T (*)(PointerEventData*))(Il2CppBase() + 0x3D01E2C))(this);
	}
	template <typename T = void> T set_position(Il2CppVector2 value) {
		return ((T (*)(PointerEventData*, Il2CppVector2))(Il2CppBase() + 0x3D0280C))(this, value);
	}
	template <typename T = Il2CppVector2> T get_delta() {
		return ((T (*)(PointerEventData*))(Il2CppBase() + 0x3D02A44))(this);
	}
	template <typename T = void> T set_delta(Il2CppVector2 value) {
		return ((T (*)(PointerEventData*, Il2CppVector2))(Il2CppBase() + 0x3D02818))(this, value);
	}
	template <typename T = Il2CppVector2> T get_pressPosition() {
		return ((T (*)(PointerEventData*))(Il2CppBase() + 0x3D02A58))(this);
	}
	template <typename T = void> T set_pressPosition(Il2CppVector2 value) {
		return ((T (*)(PointerEventData*, Il2CppVector2))(Il2CppBase() + 0x3D02824))(this, value);
	}
	template <typename T = float> T get_clickTime() {
		return ((T (*)(PointerEventData*))(Il2CppBase() + 0x3D02A6C))(this);
	}
	template <typename T = void> T set_clickTime(float value) {
		return ((T (*)(PointerEventData*, float))(Il2CppBase() + 0x3D02830))(this, value);
	}
	template <typename T = int32_t> T get_clickCount() {
		return ((T (*)(PointerEventData*))(Il2CppBase() + 0x3D02A74))(this);
	}
	template <typename T = void> T set_clickCount(int32_t value) {
		return ((T (*)(PointerEventData*, int32_t))(Il2CppBase() + 0x3D02838))(this, value);
	}
	template <typename T = Il2CppVector2> T get_scrollDelta() {
		return ((T (*)(PointerEventData*))(Il2CppBase() + 0x3D02A7C))(this);
	}
	template <typename T = void> T set_scrollDelta(Il2CppVector2 value) {
		return ((T (*)(PointerEventData*, Il2CppVector2))(Il2CppBase() + 0x3D02840))(this, value);
	}
	template <typename T = bool> T get_useDragThreshold() {
		return ((T (*)(PointerEventData*))(Il2CppBase() + 0x3D02A90))(this);
	}
	template <typename T = void> T set_useDragThreshold(bool value) {
		return ((T (*)(PointerEventData*, bool))(Il2CppBase() + 0x3D0284C))(this, value);
	}
	template <typename T = bool> T get_dragging() {
		return ((T (*)(PointerEventData*))(Il2CppBase() + 0x3D02A98))(this);
	}
	template <typename T = void> T set_dragging(bool value) {
		return ((T (*)(PointerEventData*, bool))(Il2CppBase() + 0x3D02854))(this, value);
	}
	template <typename T = uintptr_t> T get_button() {
		return ((T (*)(PointerEventData*))(Il2CppBase() + 0x3D02AA0))(this);
	}
	template <typename T = void> T set_button(uintptr_t value) {
		return ((T (*)(PointerEventData*, uintptr_t))(Il2CppBase() + 0x3D0285C))(this, value);
	}
	template <typename T = bool> T IsPointerMoving() {
		return ((T (*)(PointerEventData*))(Il2CppBase() + 0x3D02AA8))(this);
	}
	template <typename T = uintptr_t> T get_enterEventCamera() {
		return ((T (*)(PointerEventData*))(Il2CppBase() + 0x3D02AF0))(this);
	}
	template <typename T = uintptr_t> T get_pressEventCamera() {
		return ((T (*)(PointerEventData*))(Il2CppBase() + 0x3D02BD8))(this);
	}
	template <typename T = uintptr_t> T get_pointerPress() {
		return ((T (*)(PointerEventData*))(Il2CppBase() + 0x3D02CC0))(this);
	}
	template <typename T = void> T set_pointerPress(uintptr_t value) {
		return ((T (*)(PointerEventData*, uintptr_t))(Il2CppBase() + 0x3D02CC8))(this, value);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(PointerEventData*))(Il2CppBase() + 0x3D02D8C))(this);
	}

};

}
