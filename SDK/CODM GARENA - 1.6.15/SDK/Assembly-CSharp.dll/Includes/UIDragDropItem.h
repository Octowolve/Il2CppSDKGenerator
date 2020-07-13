#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIDragDropItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIDragDropItem"));
	}

	template <typename T = uintptr_t> T& restriction() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& cloneOnDrag() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& pressAndHoldDelay() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& interactable() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& targetObjTransform() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& mTrans() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& mParent() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& mCollider() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& mButton() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& mRoot() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& mGrid() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& mTable() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& mDragStartTime() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mDragScrollView() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& mPressed() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& mDragging() {
		return *(T*)((uintptr_t)this + 0x45);
	}
	template <typename T = uintptr_t> T& mTouch() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& CloneObject() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& draggedItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartDragging() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopDragging() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragDropStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragDropMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragDropRelease() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragDropEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableDragScrollView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApplicationFocus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIDragDropItem*))(Il2CppBase() + 0x39D6328))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UIDragDropItem*))(Il2CppBase() + 0x39D64B0))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIDragDropItem*))(Il2CppBase() + 0x39D6578))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UIDragDropItem*))(Il2CppBase() + 0x39D6798))(this);
	}
	template <typename T = void> T OnPress(bool isPressed) {
		return ((T (*)(UIDragDropItem*, bool))(Il2CppBase() + 0x39D68A8))(this, isPressed);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIDragDropItem*))(Il2CppBase() + 0x39D6AF0))(this);
	}
	template <typename T = void> T OnDragStart() {
		return ((T (*)(UIDragDropItem*))(Il2CppBase() + 0x39D6C28))(this);
	}
	template <typename T = void> T StartDragging() {
		return ((T (*)(UIDragDropItem*))(Il2CppBase() + 0x39D6E8C))(this);
	}
	template <typename T = void> T OnClone(uintptr_t original) {
		return ((T (*)(UIDragDropItem*, uintptr_t))(Il2CppBase() + 0x39D7528))(this, original);
	}
	template <typename T = void> T OnDrag(Il2CppVector2 delta) {
		return ((T (*)(UIDragDropItem*, Il2CppVector2))(Il2CppBase() + 0x39D75F8))(this, delta);
	}
	template <typename T = void> T OnDragEnd() {
		return ((T (*)(UIDragDropItem*))(Il2CppBase() + 0x39D7864))(this);
	}
	template <typename T = void> T StopDragging(uintptr_t go) {
		return ((T (*)(UIDragDropItem*, uintptr_t))(Il2CppBase() + 0x39D6698))(this, go);
	}
	template <typename T = void> T OnDragDropStart() {
		return ((T (*)(UIDragDropItem*))(Il2CppBase() + 0x39D79E0))(this);
	}
	template <typename T = void> T OnDragDropMove(Il2CppVector3 delta) {
		return ((T (*)(UIDragDropItem*, Il2CppVector3))(Il2CppBase() + 0x39D80BC))(this, delta);
	}
	template <typename T = void> T OnDragDropRelease(uintptr_t surface) {
		return ((T (*)(UIDragDropItem*, uintptr_t))(Il2CppBase() + 0x39D8240))(this, surface);
	}
	template <typename T = void> T OnDragDropEnd() {
		return ((T (*)(UIDragDropItem*))(Il2CppBase() + 0x39D8914))(this);
	}
	template <typename T = void> T EnableDragScrollView() {
		return ((T (*)(UIDragDropItem*))(Il2CppBase() + 0x39D8A54))(this);
	}
	template <typename T = void> T OnApplicationFocus(bool focus) {
		return ((T (*)(UIDragDropItem*, bool))(Il2CppBase() + 0x39D8B9C))(this, focus);
	}

};

}
