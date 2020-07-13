#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class CommonAvatarDefine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "CommonAvatarDefine"));
	}

	template <typename T = uintptr_t> static T& CommonNoneParameter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppVector3> static T& ROLE_DEFAULT_EULERANGLE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = Il2CppVector3> static T& ROLE_BAG_EULERANGLE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = float> static T& ROLE_ACTION_INTERVAL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = Il2CppVector3> static T& BATTLE_PASS_DISABLE_POSITION() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRoleAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsRoleFemale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryToShowAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}

	template <typename T = uintptr_t> static T GetItemAssetID(uint32_t weaponID, uint32_t skinID, bool useInventoryAsset) {
		return ((T (*)(void *, uint32_t, uint32_t, bool))(Il2CppBase() + 0x2926134))(0, weaponID, skinID, useInventoryAsset);
	}
	template <typename T = uintptr_t> static T GetRoleAssetID(uint64_t roleID, bool bBR) {
		return ((T (*)(void *, uint64_t, bool))(Il2CppBase() + 0x292634C))(0, roleID, bBR);
	}
	template <typename T = bool> static T IsRoleFemale(uint64_t modelId) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x28D844C))(0, modelId);
	}
	template <typename T = bool> static T TryToShowAvatar(int32_t itemId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x29264F8))(0, itemId);
	}

};

}
