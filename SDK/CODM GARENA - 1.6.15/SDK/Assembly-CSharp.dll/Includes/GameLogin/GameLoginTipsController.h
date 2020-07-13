#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameLogin {

class GameLoginTipsController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameLogin", "GameLoginTipsController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
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

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(GameLoginTipsController*))(Il2CppBase() + 0x33D64E8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(GameLoginTipsController*))(Il2CppBase() + 0x33D658C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(GameLoginTipsController*))(Il2CppBase() + 0x33D6698))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(GameLoginTipsController*))(Il2CppBase() + 0x33D66A0))(this);
	}

};

}
