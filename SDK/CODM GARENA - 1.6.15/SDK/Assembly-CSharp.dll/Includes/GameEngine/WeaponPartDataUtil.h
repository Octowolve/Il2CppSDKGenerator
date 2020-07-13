#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponPartDataUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponPartDataUtil"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponPartData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetWeaponPartData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAttachmentAssetIDUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> static T GetWeaponPartData(int32_t weaponPartID, uintptr_t weaponName) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x2422BE8))(0, weaponPartID, weaponName);
	}
	template <typename T = uintptr_t> static T GetWeaponPartData_1(Il2CppString* iniPath, uintptr_t weaponName) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x2420EDC))(0, iniPath, weaponName);
	}
	template <typename T = void> static T GetAttachmentAssetIDUI(uintptr_t weaponName, uint64_t attachmentID, uintptr_t assetID, uintptr_t socketName, uintptr_t showSocket, uintptr_t hideSocket) {
		return ((T (*)(void *, uintptr_t, uint64_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2422DA0))(0, weaponName, attachmentID, assetID, socketName, showSocket, hideSocket);
	}

};

}
