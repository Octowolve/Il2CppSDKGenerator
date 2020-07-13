#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class AvatarHideWeaponListener
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "AvatarHideWeaponListener"));
	}

	template <typename T = int32_t> T& pos() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& parentView() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint64_t> T& weaponID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& m_SocketDic() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSocketDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindSocket() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PutDownHideWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartPlay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeWeaponParent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponMountName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeLeftHandPose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckIsAssetWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T GetSocketDic() {
		return ((T (*)(AvatarHideWeaponListener*))(Il2CppBase() + 0x32EB9B0))(this);
	}
	template <typename T = uintptr_t> T FindSocket(Il2CppString* socketName, uintptr_t root) {
		return ((T (*)(AvatarHideWeaponListener*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x32EBA50))(this, socketName, root);
	}
	template <typename T = void> T PutDownHideWeapon() {
		return ((T (*)(AvatarHideWeaponListener*))(Il2CppBase() + 0x32EBC58))(this);
	}
	template <typename T = void> T StartPlay() {
		return ((T (*)(AvatarHideWeaponListener*))(Il2CppBase() + 0x32EBEC4))(this);
	}
	template <typename T = void> T ChangeWeaponParent(int32_t parm) {
		return ((T (*)(AvatarHideWeaponListener*, int32_t))(Il2CppBase() + 0x32EBFD8))(this, parm);
	}
	template <typename T = Il2CppString*> T GetWeaponMountName(uintptr_t type) {
		return ((T (*)(AvatarHideWeaponListener*, uintptr_t))(Il2CppBase() + 0x32EC590))(this, type);
	}
	template <typename T = void> T ChangeLeftHandPose(int32_t weight) {
		return ((T (*)(AvatarHideWeaponListener*, int32_t))(Il2CppBase() + 0x32EC9D4))(this, weight);
	}
	template <typename T = bool> T CheckIsAssetWeapon(uintptr_t g) {
		return ((T (*)(AvatarHideWeaponListener*, uintptr_t))(Il2CppBase() + 0x32EC760))(this, g);
	}

};

}
