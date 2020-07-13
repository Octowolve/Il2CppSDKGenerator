#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class CommonAvatarResetBones
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "CommonAvatarResetBones"));
	}

	template <typename T = uintptr_t> T& RoleRoot() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& WingsuitRoot() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& WingsuitAnim() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& RoleAnim() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mRoleSMRList() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& mRoleSkinInfo() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetMeshRenderer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWingsuitManagedAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWingsuitTailEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Init() {
		return ((T (*)(CommonAvatarResetBones*))(Il2CppBase() + 0x3DEEF9C))(this);
	}
	template <typename T = void> T ResetMeshRenderer() {
		return ((T (*)(CommonAvatarResetBones*))(Il2CppBase() + 0x3DEF184))(this);
	}
	template <typename T = uintptr_t> T GetWingsuitManagedAsset() {
		return ((T (*)(CommonAvatarResetBones*))(Il2CppBase() + 0x3DEF21C))(this);
	}
	template <typename T = void> T SetWingsuitTailEffect(uint32_t skinId) {
		return ((T (*)(CommonAvatarResetBones*, uint32_t))(Il2CppBase() + 0x3DEF3A0))(this, skinId);
	}
	template <typename T = void> T SyncAnimation() {
		return ((T (*)(CommonAvatarResetBones*))(Il2CppBase() + 0x3DEF5E0))(this);
	}

};

}
