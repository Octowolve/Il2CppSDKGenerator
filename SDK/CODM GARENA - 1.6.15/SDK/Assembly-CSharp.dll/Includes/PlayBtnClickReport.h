#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayBtnClickReport
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayBtnClickReport"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTLogArgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppString*> T get_Tag() {
		return ((T (*)(PlayBtnClickReport*))(Il2CppBase() + 0x494A4EC))(this);
	}
	template <typename T = Il2CppString*> T get_EventTime() {
		return ((T (*)(PlayBtnClickReport*))(Il2CppBase() + 0x494A564))(this);
	}
	template <typename T = Il2CppString*> T get_GameAppId() {
		return ((T (*)(PlayBtnClickReport*))(Il2CppBase() + 0x494A59C))(this);
	}
	template <typename T = int32_t> T get_PlatID() {
		return ((T (*)(PlayBtnClickReport*))(Il2CppBase() + 0x494A5A8))(this);
	}
	template <typename T = Il2CppString*> T get_OpenId() {
		return ((T (*)(PlayBtnClickReport*))(Il2CppBase() + 0x494A5B4))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetTLogArgs(int32_t mode) {
		return ((T (*)(PlayBtnClickReport*, int32_t))(Il2CppBase() + 0x494A5C0))(this, mode);
	}

};

}
