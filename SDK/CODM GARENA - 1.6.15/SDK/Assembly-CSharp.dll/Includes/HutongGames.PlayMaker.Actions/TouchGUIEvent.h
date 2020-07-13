#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class TouchGUIEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "TouchGUIEvent"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& fingerId() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& touchBegan() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& touchMoved() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& touchStationary() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& touchEnded() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& touchCanceled() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& notTouching() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& storeFingerId() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& storeHitPoint() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& normalizeHitPoint() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& storeOffset() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& relativeTo() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& normalizeOffset() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppVector3> T& touchStartPos() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& guiElement() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(TouchGUIEvent*))(Il2CppBase() + 0x4F180D0))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(TouchGUIEvent*))(Il2CppBase() + 0x4F181D8))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(TouchGUIEvent*))(Il2CppBase() + 0x4F1850C))(this);
	}
	template <typename T = void> T DoTouchGUIEvent() {
		return ((T (*)(TouchGUIEvent*))(Il2CppBase() + 0x4F18204))(this);
	}
	template <typename T = void> T DoTouch(uintptr_t touch) {
		return ((T (*)(TouchGUIEvent*, uintptr_t))(Il2CppBase() + 0x4F18510))(this, touch);
	}
	template <typename T = void> T DoTouchOffset(Il2CppVector3 touchPos) {
		return ((T (*)(TouchGUIEvent*, Il2CppVector3))(Il2CppBase() + 0x4F187B0))(this, touchPos);
	}

};

}
