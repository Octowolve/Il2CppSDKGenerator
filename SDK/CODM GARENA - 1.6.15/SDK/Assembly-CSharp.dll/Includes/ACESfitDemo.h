#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ACESfitDemo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ACESfitDemo"));
	}

	template <typename T = bool> T& drawOriginal() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& drawFit() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = bool> T& drawImportantPoint() {
		return *(T*)((uintptr_t)this + 0xE);
	}
	template <typename T = bool> T& drawDrev() {
		return *(T*)((uintptr_t)this + 0xF);
	}
	template <typename T = bool> T& debugFit() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& debugResetCurve() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = uintptr_t> T& curve() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector2> T& toe() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& shoulderAng() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& shoulderShoot() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector2> T& pWhite() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector2> T& toeCtr() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector2> T& shoulderCtr() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& gamma() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& fitWhitePoint() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& fitConfig() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& acesCurve() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& mCurve() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<double>*> T& _tmpX() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppList<double>*> T& _tmpY() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& data() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrawGizmos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Update() {
		return ((T (*)(ACESfitDemo*))(Il2CppBase() + 0x4A0EE78))(this);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(ACESfitDemo*))(Il2CppBase() + 0x4A0F7E8))(this);
	}

};

}
