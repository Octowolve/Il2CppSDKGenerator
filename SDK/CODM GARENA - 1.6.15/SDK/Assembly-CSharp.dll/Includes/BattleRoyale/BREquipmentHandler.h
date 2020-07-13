#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BREquipmentHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BREquipmentHandler"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySoundHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_PlaySound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> static T PlaySoundHandler(int32_t itemId, bool add, bool equip, bool isLocalPlayer) {
		return ((T (*)(void *, int32_t, bool, bool, bool))(Il2CppBase() + 0x18D521C))(0, itemId, add, equip, isLocalPlayer);
	}
	template <typename T = void> static T PlaySound(Il2CppString* typeName, bool isLocalPlayer) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x18E39EC))(0, typeName, isLocalPlayer);
	}
	template <typename T = void> static T PlaySound_1(uintptr_t type, bool isLocalPlayer) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x18E3888))(0, type, isLocalPlayer);
	}

};

}
