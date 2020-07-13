#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponSocketManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponSocketManager"));
	}

	template <typename T = uintptr_t> T& m_SocketDataStore() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreLoadData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustWeaponPartTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Init() {
		return ((T (*)(WeaponSocketManager*))(Il2CppBase() + 0x33B7A14))(this);
	}
	template <typename T = void> T PreLoadData() {
		return ((T (*)(WeaponSocketManager*))(Il2CppBase() + 0x33B7AB8))(this);
	}
	template <typename T = void> T AdjustWeaponPartTransform(int32_t weaponAssetID, int32_t partAssetID, Il2CppString* partSocket, uintptr_t partTransform, uintptr_t* weaponPosOffset) {
		return ((T (*)(WeaponSocketManager*, int32_t, int32_t, Il2CppString*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x33B7B70))(this, weaponAssetID, partAssetID, partSocket, partTransform, weaponPosOffset);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(WeaponSocketManager*))(Il2CppBase() + 0x33B8638))(this);
	}

};

}
