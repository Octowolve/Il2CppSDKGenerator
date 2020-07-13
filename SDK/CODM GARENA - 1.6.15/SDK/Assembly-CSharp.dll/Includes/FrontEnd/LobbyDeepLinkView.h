#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class LobbyDeepLinkView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "LobbyDeepLinkView"));
	}

	template <typename T = uintptr_t> T& m_OpenDeepLinkBtn() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_DeeplinkLabel() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_CurPlatformType() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_ButtonBackgroundIcon() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlatformInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowPlatformInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Start() {
		return ((T (*)(LobbyDeepLinkView*))(Il2CppBase() + 0x368F478))(this);
	}
	template <typename T = void> T PlatformInfo(uintptr_t ePlatform) {
		return ((T (*)(LobbyDeepLinkView*, uintptr_t))(Il2CppBase() + 0x368EF34))(this, ePlatform);
	}
	template <typename T = void> T ShowPlatformInfo() {
		return ((T (*)(LobbyDeepLinkView*))(Il2CppBase() + 0x368F61C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(LobbyDeepLinkView*))(Il2CppBase() + 0x368F780))(this);
	}

};

}
