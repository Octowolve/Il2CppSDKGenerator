#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.UI {

class LayoutRebuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.UI", "LayoutRebuilder"));
	}

	template <typename T = uintptr_t> T& m_ToRebuild() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& m_CachedHashFromTransform() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> static T& s_Rebuilders() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = void*> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> static T& f__am$cache3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = void*> static T& f__am$cache4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Initialize(uintptr_t controller) {
		return ((T (*)(LayoutRebuilder*, uintptr_t))(Il2CppBase() + 0x3D32D04))(this, controller);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(LayoutRebuilder*))(Il2CppBase() + 0x3D32D48))(this);
	}
	template <typename T = void> static T ReapplyDrivenProperties(uintptr_t driven) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3D32D54))(0, driven);
	}
	template <typename T = uintptr_t> T get_transform() {
		return ((T (*)(LayoutRebuilder*))(Il2CppBase() + 0x3D32DF4))(this);
	}
	template <typename T = bool> T IsDestroyed() {
		return ((T (*)(LayoutRebuilder*))(Il2CppBase() + 0x3D32DFC))(this);
	}
	template <typename T = void> static T StripDisabledBehavioursFromList(Il2CppList<uintptr_t>* components) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3D32EAC))(0, components);
	}
	template <typename T = void> static T ForceRebuildLayoutImmediate(uintptr_t layoutRoot) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3D33074))(0, layoutRoot);
	}
	template <typename T = void> T Rebuild(uintptr_t executing) {
		return ((T (*)(LayoutRebuilder*, uintptr_t))(Il2CppBase() + 0x3D331C8))(this, executing);
	}
	template <typename T = void> T PerformLayoutControl(uintptr_t rect, void* action) {
		return ((T (*)(LayoutRebuilder*, uintptr_t, void*))(Il2CppBase() + 0x3D33AB0))(this, rect, action);
	}
	template <typename T = void> T PerformLayoutCalculation(uintptr_t rect, void* action) {
		return ((T (*)(LayoutRebuilder*, uintptr_t, void*))(Il2CppBase() + 0x3D33688))(this, rect, action);
	}
	template <typename T = void> static T MarkLayoutForRebuild(uintptr_t rect) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3D095F4))(0, rect);
	}
	template <typename T = bool> static T ValidLayoutGroup(uintptr_t parent, Il2CppList<uintptr_t>* comps) {
		return ((T (*)(void *, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3D33F8C))(0, parent, comps);
	}
	template <typename T = bool> static T ValidController(uintptr_t layoutRoot, Il2CppList<uintptr_t>* comps) {
		return ((T (*)(void *, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3D3414C))(0, layoutRoot, comps);
	}
	template <typename T = void> static T MarkLayoutRootForRebuild(uintptr_t controller) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3D3430C))(0, controller);
	}
	template <typename T = void> T LayoutComplete() {
		return ((T (*)(LayoutRebuilder*))(Il2CppBase() + 0x3D34524))(this);
	}
	template <typename T = void> T GraphicUpdateComplete() {
		return ((T (*)(LayoutRebuilder*))(Il2CppBase() + 0x3D34610))(this);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(LayoutRebuilder*))(Il2CppBase() + 0x3D34614))(this);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(LayoutRebuilder*, uintptr_t))(Il2CppBase() + 0x3D3461C))(this, obj);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(LayoutRebuilder*))(Il2CppBase() + 0x3D34680))(this);
	}
	template <typename T = void> static T s_Rebuildersm__0(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3D34748))(0, x);
	}
	template <typename T = bool> static T StripDisabledBehavioursFromListm__1(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3D34770))(0, e);
	}
	template <typename T = void> static T Rebuildm__2(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3D34864))(0, e);
	}
	template <typename T = void> static T Rebuildm__3(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3D34984))(0, e);
	}
	template <typename T = void> static T Rebuildm__4(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3D34AA4))(0, e);
	}
	template <typename T = void> static T Rebuildm__5(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3D34BC4))(0, e);
	}

};

}
