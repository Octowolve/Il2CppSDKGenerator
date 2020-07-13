#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponPartOrnament
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponPart_Ornament"));
	}

	template <typename T = uintptr_t> T& m_PhysicsComponent() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupWeaponPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deactivate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T SetupWeaponPart() {
		return ((T (*)(WeaponPartOrnament*))(Il2CppBase() + 0x241BC78))(this);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(WeaponPartOrnament*))(Il2CppBase() + 0x241BE28))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetupWeaponPart() {
		return ((T (*)(WeaponPartOrnament*))(Il2CppBase() + 0x241BED4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Deactivate() {
		return ((T (*)(WeaponPartOrnament*))(Il2CppBase() + 0x241BED8))(this);
	}

};

}
