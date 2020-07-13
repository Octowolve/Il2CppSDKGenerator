#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIDragResize
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIDragResize"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& pivot() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& minWidth() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& minHeight() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& maxWidth() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& maxHeight() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& updateAnchors() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& mPlane() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector3> T& mRayPos() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppVector3> T& mLocalPos() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& mWidth() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& mHeight() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& mDragging() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T OnDragStart() {
		return ((T (*)(UIDragResize*))(Il2CppBase() + 0x39DD008))(this);
	}
	template <typename T = void> T OnDrag(Il2CppVector2 delta) {
		return ((T (*)(UIDragResize*, Il2CppVector2))(Il2CppBase() + 0x39DD324))(this, delta);
	}
	template <typename T = void> T OnDragEnd() {
		return ((T (*)(UIDragResize*))(Il2CppBase() + 0x39DD6F8))(this);
	}

};

}
