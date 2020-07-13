#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PVETutorialOutGameReport
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PVETutorialOutGameReport"));
	}

	template <typename T = int32_t> T& m_OpenPVETutorialView() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& m_ClickPVETutorialBtn() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayerLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTLogArgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = Il2CppString*> T get_Tag() {
		return ((T (*)(PVETutorialOutGameReport*))(Il2CppBase() + 0x494C5F0))(this);
	}
	template <typename T = Il2CppString*> T get_EventTime() {
		return ((T (*)(PVETutorialOutGameReport*))(Il2CppBase() + 0x494C668))(this);
	}
	template <typename T = Il2CppString*> T get_GameAppId() {
		return ((T (*)(PVETutorialOutGameReport*))(Il2CppBase() + 0x494C6A0))(this);
	}
	template <typename T = int32_t> T get_PlatID() {
		return ((T (*)(PVETutorialOutGameReport*))(Il2CppBase() + 0x494C6AC))(this);
	}
	template <typename T = Il2CppString*> T get_OpenId() {
		return ((T (*)(PVETutorialOutGameReport*))(Il2CppBase() + 0x494C6B8))(this);
	}
	template <typename T = void> T SetInfo(int32_t OpenPVETutorialView, int32_t ClickPVETutorialBtn) {
		return ((T (*)(PVETutorialOutGameReport*, int32_t, int32_t))(Il2CppBase() + 0x494C6C4))(this, OpenPVETutorialView, ClickPVETutorialBtn);
	}
	template <typename T = Il2CppString*> T GetPlayerLevel() {
		return ((T (*)(PVETutorialOutGameReport*))(Il2CppBase() + 0x494C788))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetTLogArgs() {
		return ((T (*)(PVETutorialOutGameReport*))(Il2CppBase() + 0x494C8E4))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T xLuaBaseProxy_GetTLogArgs() {
		return ((T (*)(PVETutorialOutGameReport*))(Il2CppBase() + 0x494CB34))(this);
	}

};

}
