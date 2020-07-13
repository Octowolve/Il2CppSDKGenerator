#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class AvatarViewCameraAdapter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "AvatarViewCameraAdapter"));
	}

	template <typename T = uintptr_t> T& mCamera() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& mDefaultFov() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCameraFov() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(AvatarViewCameraAdapter*))(Il2CppBase() + 0x28F80A0))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(AvatarViewCameraAdapter*))(Il2CppBase() + 0x28F824C))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(AvatarViewCameraAdapter*))(Il2CppBase() + 0x28F85B0))(this);
	}
	template <typename T = void> T CheckCameraFov() {
		return ((T (*)(AvatarViewCameraAdapter*))(Il2CppBase() + 0x28F82F0))(this);
	}

};

}
