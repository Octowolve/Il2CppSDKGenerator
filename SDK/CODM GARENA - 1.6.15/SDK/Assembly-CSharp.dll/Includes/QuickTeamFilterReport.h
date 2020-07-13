#pragma once
#include <Il2Cpp/Il2Cpp.h>

class QuickTeamFilterReport
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QuickTeamFilterReport"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& m_Modes() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& m_IsFeatureOnly() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& m_IsMicrophoneRequired() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = bool> T& m_IsSameLanguage() {
		return *(T*)((uintptr_t)this + 0xE);
	}
	template <typename T = int32_t> T& m_DelayLevel() {
		return *(T*)((uintptr_t)this + 0x10);
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
		return ((T (*)(QuickTeamFilterReport*))(Il2CppBase() + 0x494DC30))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetTLogArgs() {
		return ((T (*)(QuickTeamFilterReport*))(Il2CppBase() + 0x494DCA8))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T SetTLogArgs(int32_t modes, bool isFeatureOnly, bool isMicrophoneRequired, bool isSameLanguage, int32_t delayLevel) {
		return ((T (*)(QuickTeamFilterReport*, int32_t, bool, bool, bool, int32_t))(Il2CppBase() + 0x494DF78))(this, modes, isFeatureOnly, isMicrophoneRequired, isSameLanguage, delayLevel);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T xLuaBaseProxy_GetTLogArgs() {
		return ((T (*)(QuickTeamFilterReport*))(Il2CppBase() + 0x494E134))(this);
	}

};

}
