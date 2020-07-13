#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameLogin {

class DelAccLoginPopView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameLogin", "DelAccLoginPopView"));
	}

	template <typename T = uintptr_t> T& sureBtn() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& closeBtn() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& titleLabel() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& sureBtnLabel() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& contentLabel() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& lastTime() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UIInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetContentLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T UIInit() {
		return ((T (*)(DelAccLoginPopView*))(Il2CppBase() + 0x33D2A2C))(this);
	}
	template <typename T = void> T SetContentLabel() {
		return ((T (*)(DelAccLoginPopView*))(Il2CppBase() + 0x33D34B8))(this);
	}

};

}
