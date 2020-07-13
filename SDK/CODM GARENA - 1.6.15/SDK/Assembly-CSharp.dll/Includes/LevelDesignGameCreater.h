#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LevelDesignGameCreater
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LevelDesignGameCreater"));
	}

	template <typename T = Il2CppVector3> T& StartPosition() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& StartRotVect() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppQuaternion> T& StartRot() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& MapID() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& freeViewMode() {
		return *(T*)((uintptr_t)this + 0x38);
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
	template <typename T = uintptr_t> static T& __Hotfix0_IsLevelDesignMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLevelDesignMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Start() {
		return ((T (*)(LevelDesignGameCreater*))(Il2CppBase() + 0x49325B0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(LevelDesignGameCreater*))(Il2CppBase() + 0x4932648))(this);
	}
	template <typename T = bool> static T IsLevelDesignMode() {
		return ((T (*)(void *))(Il2CppBase() + 0x4932870))(0);
	}
	template <typename T = void> static T SetLevelDesignMode(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x4932908))(0, value);
	}

};

}
