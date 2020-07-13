#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class QuickLoginHelperMsdk
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "QuickLoginHelperMsdk"));
	}

	template <typename T = uintptr_t> static T& WakeUpLoginSource() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& WakeUpPlatform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppString*> static T& WakeUpOpenId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = bool> static T& m_IsPopupSwitchLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = bool> static T& m_IsValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD);
	}
	template <typename T = int32_t> static T& AutoLoginNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = int32_t> static T& Max_Auto_Login_Num() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uint32_t> static T& Invite_Room_Id() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uint32_t> static T& Invite_RoomSvrAddress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = Il2CppString*> static T& Invite_Room_Password() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = bool> static T& Invite_Valid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoQuickTeamInvite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = bool> static T get_IsValid() {
		return ((T (*)(void *))(Il2CppBase() + 0x2DD6CF4))(0);
	}
	template <typename T = bool> static T get_IsPopupSwitchLogin() {
		return ((T (*)(void *))(Il2CppBase() + 0x2DD6EB4))(0);
	}
	template <typename T = void> static T DoQuickTeamInvite(Il2CppArray<uintptr_t>* strQuickInviteParam) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2DD7000))(0, strQuickInviteParam);
	}

};

}
