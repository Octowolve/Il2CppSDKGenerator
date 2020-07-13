#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CameraEventProxy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CameraEventProxy"));
	}

	template <typename T = uintptr_t> T& PreRender() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& PostRender() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& mCam() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Toggle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPreRender() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPostRender() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> static T Toggle(uintptr_t cam, bool open, uintptr_t preRender, uintptr_t postRender) {
		return ((T (*)(void *, uintptr_t, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x3A339E0))(0, cam, open, preRender, postRender);
	}
	template <typename T = void> T OnPreRender() {
		return ((T (*)(CameraEventProxy*))(Il2CppBase() + 0x3A4203C))(this);
	}
	template <typename T = void> T OnPostRender() {
		return ((T (*)(CameraEventProxy*))(Il2CppBase() + 0x3A420F0))(this);
	}

};

}
