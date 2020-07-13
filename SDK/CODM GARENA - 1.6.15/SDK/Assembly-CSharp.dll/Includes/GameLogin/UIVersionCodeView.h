#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameLogin {

class UIVersionCodeView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameLogin", "UIVersionCodeView"));
	}

	template <typename T = uintptr_t> T& VersionLabel() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& BG() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshVersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetVersionLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHotFixVersionStr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T RefreshVersion() {
		return ((T (*)(UIVersionCodeView*))(Il2CppBase() + 0x253E93C))(this);
	}
	template <typename T = void> T SetVersionLabel(Il2CppString* appVersion, Il2CppString* resVersion, Il2CppString* svnVersion, Il2CppString* version) {
		return ((T (*)(UIVersionCodeView*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x253EDC8))(this, appVersion, resVersion, svnVersion, version);
	}
	template <typename T = Il2CppString*> T GetHotFixVersionStr() {
		return ((T (*)(UIVersionCodeView*))(Il2CppBase() + 0x253F1E4))(this);
	}

};

}
