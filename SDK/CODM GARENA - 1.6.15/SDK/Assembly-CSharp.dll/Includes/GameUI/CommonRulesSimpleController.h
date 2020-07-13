#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class CommonRulesSimpleController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "CommonRulesSimpleController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetExplanation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(CommonRulesSimpleController*))(Il2CppBase() + 0x3DF3970))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(CommonRulesSimpleController*))(Il2CppBase() + 0x3DF3A14))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(CommonRulesSimpleController*))(Il2CppBase() + 0x3DF3BF4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(CommonRulesSimpleController*))(Il2CppBase() + 0x3DF3C9C))(this);
	}
	template <typename T = void> T SetExplanation(Il2CppString* title, Il2CppString* content) {
		return ((T (*)(CommonRulesSimpleController*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3DF3D44))(this, title, content);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(CommonRulesSimpleController*))(Il2CppBase() + 0x3DF3E88))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(CommonRulesSimpleController*))(Il2CppBase() + 0x3DF3E90))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(CommonRulesSimpleController*))(Il2CppBase() + 0x3DF3E98))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(CommonRulesSimpleController*))(Il2CppBase() + 0x3DF3EA0))(this);
	}

};

}
