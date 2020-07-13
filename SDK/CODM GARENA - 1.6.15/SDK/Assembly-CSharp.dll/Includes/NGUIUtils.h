#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NGUIUtils
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NGUIUtils"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_RestrictWithinView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RestrictWithinView_WrapContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustGridToCenter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGrayScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddMissingComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToggleUILayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TogglePerspectiveUILayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToggleFirstPersonCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> static T RestrictWithinView(uintptr_t scrollView, uintptr_t target, uintptr_t inGrid) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3EDCDD4))(0, scrollView, target, inGrid);
	}
	template <typename T = void> static T RestrictWithinView_WrapContent(uintptr_t scrollView, uintptr_t target) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3EDD45C))(0, scrollView, target);
	}
	template <typename T = void> static T AdjustGridToCenter(uintptr_t inGrid, int32_t inItemCount) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x3EDDA50))(0, inGrid, inItemCount);
	}
	template <typename T = void> static T SetGrayScale(uintptr_t go, bool grayScale, bool applyToChilds) {
		return ((T (*)(void *, uintptr_t, bool, bool))(Il2CppBase() + 0x3EDDC2C))(0, go, grayScale, applyToChilds);
	}
	template <typename T = uintptr_t> static T AddMissingComponent(uintptr_t trans, uintptr_t compChild) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x335E0F4))(0, trans, compChild);
	}
	template <typename T = void> static T ToggleUILayer(Il2CppString* layer, bool toggle) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x3EDDF50))(0, layer, toggle);
	}
	template <typename T = void> static T TogglePerspectiveUILayer(bool toggle) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x3EDE138))(0, toggle);
	}
	template <typename T = void> static T ToggleFirstPersonCamera(bool toggle) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x3EDE2D4))(0, toggle);
	}
	template <typename T = Il2CppRect> static T GetRect(uintptr_t uiWidget) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3EDE430))(0, uiWidget);
	}

};

}
