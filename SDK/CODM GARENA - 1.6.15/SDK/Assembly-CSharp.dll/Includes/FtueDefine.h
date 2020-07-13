#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FtueDefine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FtueDefine"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& FORCE_TUTORIAL_INSTANCE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& FORCE_TUTORIAL_INSTANCE_FTUE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uint32_t> static T& UnlockLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = int32_t> static T get_SPVP_1() {
		return ((T (*)(void *))(Il2CppBase() + 0x3B63C0C))(0);
	}
	template <typename T = uint32_t> static T get_EquipWeaponID() {
		return ((T (*)(void *))(Il2CppBase() + 0x3B63CF0))(0);
	}
	template <typename T = uint32_t> static T get_ExpCardID() {
		return ((T (*)(void *))(Il2CppBase() + 0x3B63DD4))(0);
	}
	template <typename T = uint32_t> static T get_EquipWeaponAttachmentID() {
		return ((T (*)(void *))(Il2CppBase() + 0x3B63EB8))(0);
	}
	template <typename T = uint32_t> static T get_EquipLathelID() {
		return ((T (*)(void *))(Il2CppBase() + 0x3B63F9C))(0);
	}
	template <typename T = uint32_t> static T get_ShowPVPScoreTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x3B64080))(0);
	}
	template <typename T = uint32_t> static T get_TutorialUltTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x3B64164))(0);
	}
	template <typename T = uint32_t> static T get_TutorialHandLoopTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x3B64248))(0);
	}
	template <typename T = uint32_t> static T get_TutorialSettingTipHoldTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x3B6432C))(0);
	}
	template <typename T = int32_t> static T get_Tutorial_MP1_NewAdvanceBPExp() {
		return ((T (*)(void *))(Il2CppBase() + 0x3B64410))(0);
	}
	template <typename T = int32_t> static T get_Tutorial_MP1_OldAdvanceBPExp() {
		return ((T (*)(void *))(Il2CppBase() + 0x3B644F4))(0);
	}

};

}
