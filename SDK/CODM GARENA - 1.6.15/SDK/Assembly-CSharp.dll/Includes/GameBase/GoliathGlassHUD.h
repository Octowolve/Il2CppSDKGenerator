#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class GoliathGlassHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "GoliathGlassHUD"));
	}

	template <typename T = uintptr_t> T& Root() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& tweenRotation() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& SpriteNormal() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& SpriteIpx() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& SpriteIpad() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = bool> T& m_bActiveRootNormal() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& m_bActiveRootIpx() {
		return *(T*)((uintptr_t)this + 0x91);
	}
	template <typename T = bool> T& m_bActiveRootIpad() {
		return *(T*)((uintptr_t)this + 0x92);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdapterDevice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uint64_t> T get_ActiveGameHudState() {
		return ((T (*)(GoliathGlassHUD*))(Il2CppBase() + 0x1ECC610))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GoliathGlassHUD*))(Il2CppBase() + 0x1ECC61C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(GoliathGlassHUD*))(Il2CppBase() + 0x1ECD038))(this);
	}
	template <typename T = void> T ShowUI(bool bShow) {
		return ((T (*)(GoliathGlassHUD*, bool))(Il2CppBase() + 0x1ECCA0C))(this, bShow);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GoliathGlassHUD*))(Il2CppBase() + 0x1ECD380))(this);
	}
	template <typename T = void> T AdapterDevice() {
		return ((T (*)(GoliathGlassHUD*))(Il2CppBase() + 0x1ECCF18))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(GoliathGlassHUD*))(Il2CppBase() + 0x1ECD79C))(this);
	}

};

}
