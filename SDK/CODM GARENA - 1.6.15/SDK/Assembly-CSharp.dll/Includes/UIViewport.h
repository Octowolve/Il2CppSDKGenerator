#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIViewport
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIViewport"));
	}

	template <typename T = uintptr_t> T& sourceCamera() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& topLeft() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& bottomRight() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& fullSize() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& mCam() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Start() {
		return ((T (*)(UIViewport*))(Il2CppBase() + 0x41FEA68))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(UIViewport*))(Il2CppBase() + 0x41FEB88))(this);
	}

};

}
