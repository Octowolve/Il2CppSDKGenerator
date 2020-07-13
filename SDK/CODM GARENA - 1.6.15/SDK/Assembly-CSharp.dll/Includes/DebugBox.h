#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DebugBox
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DebugBox"));
	}

	template <typename T = Il2CppVector3> T& localFrontTopLeft() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppVector3> T& localFrontTopRight() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& localFrontBottomLeft() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector3> T& localFrontBottomRight() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& origin() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RotatePointAroundPivot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Rotate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = Il2CppVector3> T get_localFrontTopLeft() {
		return ((T (*)(DebugBox*))(Il2CppBase() + 0x4173208))(this);
	}
	template <typename T = void> T set_localFrontTopLeft(Il2CppVector3 value) {
		return ((T (*)(DebugBox*, Il2CppVector3))(Il2CppBase() + 0x417321C))(this, value);
	}
	template <typename T = Il2CppVector3> T get_localFrontTopRight() {
		return ((T (*)(DebugBox*))(Il2CppBase() + 0x4173228))(this);
	}
	template <typename T = void> T set_localFrontTopRight(Il2CppVector3 value) {
		return ((T (*)(DebugBox*, Il2CppVector3))(Il2CppBase() + 0x417323C))(this, value);
	}
	template <typename T = Il2CppVector3> T get_localFrontBottomLeft() {
		return ((T (*)(DebugBox*))(Il2CppBase() + 0x4173248))(this);
	}
	template <typename T = void> T set_localFrontBottomLeft(Il2CppVector3 value) {
		return ((T (*)(DebugBox*, Il2CppVector3))(Il2CppBase() + 0x417325C))(this, value);
	}
	template <typename T = Il2CppVector3> T get_localFrontBottomRight() {
		return ((T (*)(DebugBox*))(Il2CppBase() + 0x4173268))(this);
	}
	template <typename T = void> T set_localFrontBottomRight(Il2CppVector3 value) {
		return ((T (*)(DebugBox*, Il2CppVector3))(Il2CppBase() + 0x417327C))(this, value);
	}
	template <typename T = Il2CppVector3> T get_localBackTopLeft() {
		return ((T (*)(DebugBox*))(Il2CppBase() + 0x4173288))(this);
	}
	template <typename T = Il2CppVector3> T get_localBackTopRight() {
		return ((T (*)(DebugBox*))(Il2CppBase() + 0x41732B8))(this);
	}
	template <typename T = Il2CppVector3> T get_localBackBottomLeft() {
		return ((T (*)(DebugBox*))(Il2CppBase() + 0x41732E8))(this);
	}
	template <typename T = Il2CppVector3> T get_localBackBottomRight() {
		return ((T (*)(DebugBox*))(Il2CppBase() + 0x4173318))(this);
	}
	template <typename T = Il2CppVector3> T get_frontTopLeft() {
		return ((T (*)(DebugBox*))(Il2CppBase() + 0x4173348))(this);
	}
	template <typename T = Il2CppVector3> T get_frontTopRight() {
		return ((T (*)(DebugBox*))(Il2CppBase() + 0x417338C))(this);
	}
	template <typename T = Il2CppVector3> T get_frontBottomLeft() {
		return ((T (*)(DebugBox*))(Il2CppBase() + 0x41733D0))(this);
	}
	template <typename T = Il2CppVector3> T get_frontBottomRight() {
		return ((T (*)(DebugBox*))(Il2CppBase() + 0x4173414))(this);
	}
	template <typename T = Il2CppVector3> T get_backTopLeft() {
		return ((T (*)(DebugBox*))(Il2CppBase() + 0x41734B4))(this);
	}
	template <typename T = Il2CppVector3> T get_backTopRight() {
		return ((T (*)(DebugBox*))(Il2CppBase() + 0x4173528))(this);
	}
	template <typename T = Il2CppVector3> T get_backBottomLeft() {
		return ((T (*)(DebugBox*))(Il2CppBase() + 0x417359C))(this);
	}
	template <typename T = Il2CppVector3> T get_backBottomRight() {
		return ((T (*)(DebugBox*))(Il2CppBase() + 0x417360C))(this);
	}
	template <typename T = Il2CppVector3> T get_origin() {
		return ((T (*)(DebugBox*))(Il2CppBase() + 0x4173620))(this);
	}
	template <typename T = void> T set_origin(Il2CppVector3 value) {
		return ((T (*)(DebugBox*, Il2CppVector3))(Il2CppBase() + 0x4173634))(this, value);
	}
	template <typename T = Il2CppVector3> T RotatePointAroundPivot(Il2CppVector3 point, Il2CppVector3 pivot, Il2CppQuaternion rotation) {
		return ((T (*)(DebugBox*, Il2CppVector3, Il2CppVector3, Il2CppQuaternion))(Il2CppBase() + 0x41738D8))(this, point, pivot, rotation);
	}
	template <typename T = void> T Rotate(Il2CppQuaternion orientation) {
		return ((T (*)(DebugBox*, Il2CppQuaternion))(Il2CppBase() + 0x4173930))(this, orientation);
	}

};

}
