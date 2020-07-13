#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EasyTouchInput
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EasyTouchInput"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& oldMousePosition() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& tapCount() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& startActionTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& deltaTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& tapeTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& bComplex() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector2> T& deltaFingerPosition() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector2> T& oldFinger2Position() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector2> T& complexCenter() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TouchCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_getTouchCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMouseTouch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSecondFingerPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPointerPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPinchTwist2Finger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetComplex2finger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = int32_t> T TouchCount() {
		return ((T (*)(EasyTouchInput*))(Il2CppBase() + 0x4BB4BB4))(this);
	}
	template <typename T = int32_t> T getTouchCount(bool realTouch) {
		return ((T (*)(EasyTouchInput*, bool))(Il2CppBase() + 0x4BBF06C))(this, realTouch);
	}
	template <typename T = uintptr_t> T GetMouseTouch(int32_t fingerIndex, uintptr_t myFinger) {
		return ((T (*)(EasyTouchInput*, int32_t, uintptr_t))(Il2CppBase() + 0x4BB86F0))(this, fingerIndex, myFinger);
	}
	template <typename T = Il2CppVector2> T GetSecondFingerPosition() {
		return ((T (*)(EasyTouchInput*))(Il2CppBase() + 0x4BBF680))(this);
	}
	template <typename T = Il2CppVector2> T GetPointerPosition(int32_t index) {
		return ((T (*)(EasyTouchInput*, int32_t))(Il2CppBase() + 0x4BBF534))(this, index);
	}
	template <typename T = Il2CppVector2> T GetPinchTwist2Finger() {
		return ((T (*)(EasyTouchInput*))(Il2CppBase() + 0x4BBFCFC))(this);
	}
	template <typename T = Il2CppVector2> T GetComplex2finger() {
		return ((T (*)(EasyTouchInput*))(Il2CppBase() + 0x4BBFB60))(this);
	}

};

}
