#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ReturnToLobbyView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ReturnToLobbyView"));
	}

	template <typename T = uintptr_t> T& m_Bg_Texture() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& m_SizeAdaptor() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBGTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T SetBGTexture(Il2CppString* loadingTexture) {
		return ((T (*)(ReturnToLobbyView*, Il2CppString*))(Il2CppBase() + 0x3AC3254))(this, loadingTexture);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(ReturnToLobbyView*))(Il2CppBase() + 0x3AC3444))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDestroy() {
		return ((T (*)(ReturnToLobbyView*))(Il2CppBase() + 0x3AC353C))(this);
	}

};

}
