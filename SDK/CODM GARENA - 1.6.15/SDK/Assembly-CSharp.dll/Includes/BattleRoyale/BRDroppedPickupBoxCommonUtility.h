#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRDroppedPickupBoxCommonUtility
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRDroppedPickupBoxCommonUtility"));
	}

	template <typename T = Il2CppString*> static T& TARGET_VOLUME_POINT_SOCKET() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitBoxAreaState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBoxAreaState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowTargetSignBoard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateBillborad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> static T InitBoxAreaState(uintptr_t root, int32_t actorID, bool isOpen) {
		return ((T (*)(void *, uintptr_t, int32_t, bool))(Il2CppBase() + 0x18B6E5C))(0, root, actorID, isOpen);
	}
	template <typename T = void> static T SetBoxAreaState(uintptr_t root, uintptr_t status, bool isOpen) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x18B92A0))(0, root, status, isOpen);
	}
	template <typename T = void> static T ShowTargetSignBoard(uintptr_t root, bool bShow) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x18B8F4C))(0, root, bShow);
	}
	template <typename T = void> static T UpdateBillborad(uintptr_t transform) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x18B80B0))(0, transform);
	}

};

}
