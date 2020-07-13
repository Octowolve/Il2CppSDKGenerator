#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MatineeCameraIgnore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MatineeCameraIgnore"));
	}

	template <typename T = int32_t> static T& kMatineeIgnoreLayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& m_CachedLayer() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnterMatinee() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ExitMatinee() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(MatineeCameraIgnore*))(Il2CppBase() + 0x41CCB98))(this);
	}
	template <typename T = void> T EnterMatinee() {
		return ((T (*)(MatineeCameraIgnore*))(Il2CppBase() + 0x41CCC60))(this);
	}
	template <typename T = void> T ExitMatinee() {
		return ((T (*)(MatineeCameraIgnore*))(Il2CppBase() + 0x41CCD30))(this);
	}
	template <typename T = void> static T SetLayer(uintptr_t tran) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x41CCE00))(0, tran);
	}

};

}
