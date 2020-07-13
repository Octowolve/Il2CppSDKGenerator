#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CamMoveTest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CamMoveTest"));
	}

	template <typename T = uintptr_t> T& Intitrans() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& c1() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& c2() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& c3() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& c4() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& c5() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Ca1() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& Ca2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& Ca3() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& Ca4() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& Ca5() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& Cam0() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& Currenttras() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& targettrans() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& MoveSpeed() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& Backspeed() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& NeedMove() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& selectid() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& speed() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& state() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& cam2() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Charactors() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_movetotarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_setaniout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_setaniback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_hideother() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_displayall() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T Start() {
		return ((T (*)(CamMoveTest*))(Il2CppBase() + 0x53193DC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(CamMoveTest*))(Il2CppBase() + 0x53197B4))(this);
	}
	template <typename T = void> T movetotarget() {
		return ((T (*)(CamMoveTest*))(Il2CppBase() + 0x531A728))(this);
	}
	template <typename T = void> T setaniout(uintptr_t ani) {
		return ((T (*)(CamMoveTest*, uintptr_t))(Il2CppBase() + 0x531A3AC))(this, ani);
	}
	template <typename T = void> T setaniback(uintptr_t ani) {
		return ((T (*)(CamMoveTest*, uintptr_t))(Il2CppBase() + 0x531A610))(this, ani);
	}
	template <typename T = void> T hideother(int32_t id) {
		return ((T (*)(CamMoveTest*, int32_t))(Il2CppBase() + 0x531A4C4))(this, id);
	}
	template <typename T = void> T displayall() {
		return ((T (*)(CamMoveTest*))(Il2CppBase() + 0x531A284))(this);
	}

};

}
