#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SPGameBulletInfoHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SPGameBulletInfoHUD"));
	}

	template <typename T = uintptr_t> T& Background() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& BulletInfo() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> static T& c_RemainTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& c_FadeoutTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& c_BackgroundAlphaRegular() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& m_LastAmmoCount() {
		return *(T*)((uintptr_t)this + 0x84);
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
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBulletInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BackgroundTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Fadeout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Start() {
		return ((T (*)(SPGameBulletInfoHUD*))(Il2CppBase() + 0x391490C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(SPGameBulletInfoHUD*))(Il2CppBase() + 0x39149E0))(this);
	}
	template <typename T = void> T Show(int32_t bulletCount) {
		return ((T (*)(SPGameBulletInfoHUD*, int32_t))(Il2CppBase() + 0x3914C28))(this, bulletCount);
	}
	template <typename T = void> T SetBulletInfo(int32_t bulletCount) {
		return ((T (*)(SPGameBulletInfoHUD*, int32_t))(Il2CppBase() + 0x3914CE0))(this, bulletCount);
	}
	template <typename T = void> T BackgroundTrigger() {
		return ((T (*)(SPGameBulletInfoHUD*))(Il2CppBase() + 0x3914E6C))(this);
	}
	template <typename T = uintptr_t> T Fadeout() {
		return ((T (*)(SPGameBulletInfoHUD*))(Il2CppBase() + 0x3914F2C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(SPGameBulletInfoHUD*))(Il2CppBase() + 0x3915014))(this);
	}

};

}
