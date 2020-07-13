#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRReviveImgHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRReviveImgHelper"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_GetDropImgName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPickUpImgName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUsingImgName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTeamHudUsingImgName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDropObjAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = Il2CppString*> static T GetDropImgName(int32_t seatIdx) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1B1BA4C))(0, seatIdx);
	}
	template <typename T = Il2CppString*> static T GetPickUpImgName(int32_t seatIdx) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1B1BB80))(0, seatIdx);
	}
	template <typename T = Il2CppString*> static T GetUsingImgName(int32_t seatIdx) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1B1BCB4))(0, seatIdx);
	}
	template <typename T = Il2CppString*> static T GetTeamHudUsingImgName(int32_t seatIdx) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1B1BDE8))(0, seatIdx);
	}
	template <typename T = int32_t> static T GetDropObjAssetId(int32_t seatIdx) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1B1BF1C))(0, seatIdx);
	}

};

}
