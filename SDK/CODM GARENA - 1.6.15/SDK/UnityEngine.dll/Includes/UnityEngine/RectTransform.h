#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class RectTransform
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "RectTransform"));
	}

	template <typename T = uintptr_t> static T& reapplyDrivenProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppRect> T get_rect() {
		return ((T (*)(RectTransform*))(Il2CppBase() + 0x4ACD148))(this);
	}
	template <typename T = void> T INTERNAL_get_rect(uintptr_t* value) {
		return ((T (*)(RectTransform*, uintptr_t*))(Il2CppBase() + 0x4ACD180))(this, value);
	}
	template <typename T = Il2CppVector2> T get_anchorMin() {
		return ((T (*)(RectTransform*))(Il2CppBase() + 0x4ACD220))(this);
	}
	template <typename T = void> T set_anchorMin(Il2CppVector2 value) {
		return ((T (*)(RectTransform*, Il2CppVector2))(Il2CppBase() + 0x4ACD2FC))(this, value);
	}
	template <typename T = void> T INTERNAL_get_anchorMin(uintptr_t* value) {
		return ((T (*)(RectTransform*, uintptr_t*))(Il2CppBase() + 0x4ACD25C))(this, value);
	}
	template <typename T = void> T INTERNAL_set_anchorMin(uintptr_t value) {
		return ((T (*)(RectTransform*, uintptr_t))(Il2CppBase() + 0x4ACD318))(this, value);
	}
	template <typename T = Il2CppVector2> T get_anchorMax() {
		return ((T (*)(RectTransform*))(Il2CppBase() + 0x4ACD3B8))(this);
	}
	template <typename T = void> T set_anchorMax(Il2CppVector2 value) {
		return ((T (*)(RectTransform*, Il2CppVector2))(Il2CppBase() + 0x4ACD494))(this, value);
	}
	template <typename T = void> T INTERNAL_get_anchorMax(uintptr_t* value) {
		return ((T (*)(RectTransform*, uintptr_t*))(Il2CppBase() + 0x4ACD3F4))(this, value);
	}
	template <typename T = void> T INTERNAL_set_anchorMax(uintptr_t value) {
		return ((T (*)(RectTransform*, uintptr_t))(Il2CppBase() + 0x4ACD4B0))(this, value);
	}
	template <typename T = Il2CppVector2> T get_anchoredPosition() {
		return ((T (*)(RectTransform*))(Il2CppBase() + 0x4ACD550))(this);
	}
	template <typename T = void> T set_anchoredPosition(Il2CppVector2 value) {
		return ((T (*)(RectTransform*, Il2CppVector2))(Il2CppBase() + 0x4ACD62C))(this, value);
	}
	template <typename T = void> T INTERNAL_get_anchoredPosition(uintptr_t* value) {
		return ((T (*)(RectTransform*, uintptr_t*))(Il2CppBase() + 0x4ACD58C))(this, value);
	}
	template <typename T = void> T INTERNAL_set_anchoredPosition(uintptr_t value) {
		return ((T (*)(RectTransform*, uintptr_t))(Il2CppBase() + 0x4ACD648))(this, value);
	}
	template <typename T = Il2CppVector2> T get_sizeDelta() {
		return ((T (*)(RectTransform*))(Il2CppBase() + 0x4ACD6E8))(this);
	}
	template <typename T = void> T set_sizeDelta(Il2CppVector2 value) {
		return ((T (*)(RectTransform*, Il2CppVector2))(Il2CppBase() + 0x4ACD7C4))(this, value);
	}
	template <typename T = void> T INTERNAL_get_sizeDelta(uintptr_t* value) {
		return ((T (*)(RectTransform*, uintptr_t*))(Il2CppBase() + 0x4ACD724))(this, value);
	}
	template <typename T = void> T INTERNAL_set_sizeDelta(uintptr_t value) {
		return ((T (*)(RectTransform*, uintptr_t))(Il2CppBase() + 0x4ACD7E0))(this, value);
	}
	template <typename T = Il2CppVector2> T get_pivot() {
		return ((T (*)(RectTransform*))(Il2CppBase() + 0x4ACD880))(this);
	}
	template <typename T = void> T set_pivot(Il2CppVector2 value) {
		return ((T (*)(RectTransform*, Il2CppVector2))(Il2CppBase() + 0x4ACD95C))(this, value);
	}
	template <typename T = void> T INTERNAL_get_pivot(uintptr_t* value) {
		return ((T (*)(RectTransform*, uintptr_t*))(Il2CppBase() + 0x4ACD8BC))(this, value);
	}
	template <typename T = void> T INTERNAL_set_pivot(uintptr_t value) {
		return ((T (*)(RectTransform*, uintptr_t))(Il2CppBase() + 0x4ACD978))(this, value);
	}
	template <typename T = void> static T add_reapplyDrivenProperties(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4ACDA18))(0, value);
	}
	template <typename T = void> static T remove_reapplyDrivenProperties(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4ACDBF8))(0, value);
	}
	template <typename T = void> static T SendReapplyDrivenProperties(uintptr_t driven) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4ACDDD8))(0, driven);
	}
	template <typename T = void> T GetLocalCorners(Il2CppArray<uintptr_t>* fourCornersArray) {
		return ((T (*)(RectTransform*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4ACDF08))(this, fourCornersArray);
	}
	template <typename T = void> T GetWorldCorners(Il2CppArray<uintptr_t>* fourCornersArray) {
		return ((T (*)(RectTransform*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4ACE160))(this, fourCornersArray);
	}
	template <typename T = void> T SetInsetAndSizeFromParentEdge(uintptr_t edge, float inset, float size) {
		return ((T (*)(RectTransform*, uintptr_t, float, float))(Il2CppBase() + 0x4ACE2E8))(this, edge, inset, size);
	}
	template <typename T = void> T SetSizeWithCurrentAnchors(uintptr_t axis, float size) {
		return ((T (*)(RectTransform*, uintptr_t, float))(Il2CppBase() + 0x4ACE54C))(this, axis, size);
	}
	template <typename T = Il2CppVector2> T GetParentSize() {
		return ((T (*)(RectTransform*))(Il2CppBase() + 0x4ACE678))(this);
	}

};

}
