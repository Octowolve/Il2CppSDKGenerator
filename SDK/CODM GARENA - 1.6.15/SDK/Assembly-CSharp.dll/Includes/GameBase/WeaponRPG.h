#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponRPG
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponRPG"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsUseWeaponCheckFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareInputParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostOpenAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayUnequipAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = bool> T IsUseWeaponCheckFire() {
		return ((T (*)(WeaponRPG*))(Il2CppBase() + 0x3A7B038))(this);
	}
	template <typename T = void> T PrepareInputParam(uintptr_t param) {
		return ((T (*)(WeaponRPG*, uintptr_t))(Il2CppBase() + 0x3A7B0D8))(this, param);
	}
	template <typename T = void> T OpenAim() {
		return ((T (*)(WeaponRPG*))(Il2CppBase() + 0x3A7B270))(this);
	}
	template <typename T = void> T PostOpenAim() {
		return ((T (*)(WeaponRPG*))(Il2CppBase() + 0x3A7B40C))(this);
	}
	template <typename T = void> T CloseAim() {
		return ((T (*)(WeaponRPG*))(Il2CppBase() + 0x3A7B628))(this);
	}
	template <typename T = void> T PlayUnequipAnim() {
		return ((T (*)(WeaponRPG*))(Il2CppBase() + 0x3A7B890))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsUseWeaponCheckFire() {
		return ((T (*)(WeaponRPG*))(Il2CppBase() + 0x3A7BAEC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PrepareInputParam(uintptr_t P0) {
		return ((T (*)(WeaponRPG*, uintptr_t))(Il2CppBase() + 0x3A7BAF4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OpenAim() {
		return ((T (*)(WeaponRPG*))(Il2CppBase() + 0x3A7BAFC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PostOpenAim() {
		return ((T (*)(WeaponRPG*))(Il2CppBase() + 0x3A7BB04))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CloseAim() {
		return ((T (*)(WeaponRPG*))(Il2CppBase() + 0x3A7BB0C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayUnequipAnim() {
		return ((T (*)(WeaponRPG*))(Il2CppBase() + 0x3A7BB14))(this);
	}

};

}
