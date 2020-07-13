#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlaylistFilterReport
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlaylistFilterReport"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& m_ReportType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& m_PlaylistStr() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTLogArgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTLogArgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSelectedPlaylist() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = Il2CppString*> T get_Tag() {
		return ((T (*)(PlaylistFilterReport*))(Il2CppBase() + 0x494BF00))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T SetTLogArgs(int32_t ReportType, Il2CppString* PlaylistStr) {
		return ((T (*)(PlaylistFilterReport*, int32_t, Il2CppString*))(Il2CppBase() + 0x494BF78))(this, ReportType, PlaylistStr);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetTLogArgs() {
		return ((T (*)(PlaylistFilterReport*))(Il2CppBase() + 0x494C098))(this);
	}
	template <typename T = Il2CppString*> T GetSelectedPlaylist(Il2CppList<uint32_t>* PlaylistList) {
		return ((T (*)(PlaylistFilterReport*, Il2CppList<uint32_t>*))(Il2CppBase() + 0x494C2D0))(this, PlaylistList);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T xLuaBaseProxy_GetTLogArgs() {
		return ((T (*)(PlaylistFilterReport*))(Il2CppBase() + 0x494C54C))(this);
	}

};

}
