#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class BRDroppedPickUpConfigMgr
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "BRDroppedPickUpConfigMgr"));
	}

	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> static T& s_BRDroppedPickUpConfigDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Get() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Contains() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponPropertysWithAttachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetWeaponPropertysWithAttachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetColorSpriteName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> static T Clear() {
		return ((T (*)(void *))(Il2CppBase() + 0x2D46A7C))(0);
	}
	template <typename T = uintptr_t> static T Get(int32_t ID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2D46B80))(0, ID);
	}
	template <typename T = bool> static T Contains(int32_t ID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2D47768))(0, ID);
	}
	template <typename T = void> static T CheckDic() {
		return ((T (*)(void *))(Il2CppBase() + 0x2D46D30))(0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetWeaponPropertysWithAttachment(int32_t weaponId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2D47910))(0, weaponId);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetWeaponPropertysWithAttachment_1(int32_t weaponID, int32_t attachID) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x2D47AE0))(0, weaponID, attachID);
	}
	template <typename T = Il2CppString*> static T GetColorSpriteName(int32_t color, Il2CppString* defaultSpriteName) {
		return ((T (*)(void *, int32_t, Il2CppString*))(Il2CppBase() + 0x2D47D5C))(0, color, defaultSpriteName);
	}

};

}
