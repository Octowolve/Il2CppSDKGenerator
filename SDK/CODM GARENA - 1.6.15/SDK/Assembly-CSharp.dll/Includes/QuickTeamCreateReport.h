#pragma once
#include <Il2Cpp/Il2Cpp.h>

class QuickTeamCreateReport
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QuickTeamCreateReport"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_Mode() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& m_IsFeatureOnly() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& m_IsMicrophoneRequired() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = int32_t> T& m_LanguageCode() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_Channel() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& m_Lobby() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTLogArgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTLogArgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = Il2CppString*> T get_Tag() {
		return ((T (*)(QuickTeamCreateReport*))(Il2CppBase() + 0x494D0A4))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetTLogArgs() {
		return ((T (*)(QuickTeamCreateReport*))(Il2CppBase() + 0x494D11C))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T SetTLogArgs(uintptr_t info, bool lobby) {
		return ((T (*)(QuickTeamCreateReport*, uintptr_t, bool))(Il2CppBase() + 0x494D4AC))(this, info, lobby);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T xLuaBaseProxy_GetTLogArgs() {
		return ((T (*)(QuickTeamCreateReport*))(Il2CppBase() + 0x494D688))(this);
	}

};

}
