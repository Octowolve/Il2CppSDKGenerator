#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CustomDragDropCloneCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CustomDragDropCloneCallback"));
	}

	template <typename T = uintptr_t> T& TargetView() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& CloneTargetView() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Callback() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& CallbackEx() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IDragAndDropCallback_OnDragDropStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IDragAndDropCallback_OnDragDropMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IDragAndDropCallback_OnDragDropRelease() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragDropStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragDropMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragDropRelease() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T IDragAndDropCallback_OnDragDropStart() {
		return ((T (*)(CustomDragDropCloneCallback*))(Il2CppBase() + 0x415CEE4))(this);
	}
	template <typename T = void> T IDragAndDropCallback_OnDragDropMove(Il2CppVector3 delta) {
		return ((T (*)(CustomDragDropCloneCallback*, Il2CppVector3))(Il2CppBase() + 0x415D008))(this, delta);
	}
	template <typename T = void> T IDragAndDropCallback_OnDragDropRelease(uintptr_t surface) {
		return ((T (*)(CustomDragDropCloneCallback*, uintptr_t))(Il2CppBase() + 0x415D160))(this, surface);
	}
	template <typename T = void> T OnDragDropStart(uintptr_t dropView) {
		return ((T (*)(CustomDragDropCloneCallback*, uintptr_t))(Il2CppBase() + 0x415D528))(this, dropView);
	}
	template <typename T = void> T OnDragDropMove(uintptr_t dropView, Il2CppVector3 delta) {
		return ((T (*)(CustomDragDropCloneCallback*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x415D65C))(this, dropView, delta);
	}
	template <typename T = void> T OnDragDropRelease(uintptr_t dropView, uintptr_t surface) {
		return ((T (*)(CustomDragDropCloneCallback*, uintptr_t, uintptr_t))(Il2CppBase() + 0x415D7C4))(this, dropView, surface);
	}

};

}
