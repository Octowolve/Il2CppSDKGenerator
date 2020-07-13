#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GLaunchMissile
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GLaunchMissile"));
	}

	template <typename T = uintptr_t> T& startPos() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& endPos() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& fSpeed() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& missilePrefab() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& explosionPrefab() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& missileObj() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& explosionObj() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& fAccelerate() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& fSpeedCur() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& fTimeStart() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& fTimeCur() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& fMaxTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppVector3> T& posCur() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppVector3> T& posEnd() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppVector3> T& direction() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& bFired() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Fire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Start() {
		return ((T (*)(GLaunchMissile*))(Il2CppBase() + 0x3E04F64))(this);
	}
	template <typename T = void> T Fire() {
		return ((T (*)(GLaunchMissile*))(Il2CppBase() + 0x3E04FFC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GLaunchMissile*))(Il2CppBase() + 0x3E053BC))(this);
	}

};

}
