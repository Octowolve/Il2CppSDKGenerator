#pragma once
#include <Il2Cpp/Il2Cpp.h>

class showBounds
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "showBounds"));
	}

	template <typename T = bool> T& m_show() {
		return *(T*)((uintptr_t)this + 0xC);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrawGizmos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Start() {
		return ((T (*)(showBounds*))(Il2CppBase() + 0x38DB8EC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(showBounds*))(Il2CppBase() + 0x38DB984))(this);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(showBounds*))(Il2CppBase() + 0x38DBA1C))(this);
	}

};

}
