#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LagPosition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LagPosition"));
	}

	template <typename T = int32_t> T& updateOrder() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& speed() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& ignoreTimeScale() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& mTrans() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& mRelative() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& mAbsolute() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(LagPosition*))(Il2CppBase() + 0x4928CCC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(LagPosition*))(Il2CppBase() + 0x4928DE0))(this);
	}

};

}
