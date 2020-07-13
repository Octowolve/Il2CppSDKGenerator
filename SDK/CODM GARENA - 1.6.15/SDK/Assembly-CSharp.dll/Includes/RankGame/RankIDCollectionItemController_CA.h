#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RankGame {

class RankIDCollectionItemControllerCA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RankGame", "RankIDCollectionItemController_CA"));
	}

	template <typename T = uintptr_t> T& m_RankItemView_CA() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_AdaptationTimer() {
		return *(T*)((uintptr_t)this + 0x4C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(RankIDCollectionItemControllerCA*))(Il2CppBase() + 0x380ADBC))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(RankIDCollectionItemControllerCA*))(Il2CppBase() + 0x380AE60))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(RankIDCollectionItemControllerCA*))(Il2CppBase() + 0x380B180))(this);
	}
	template <typename T = void> T Initm__0() {
		return ((T (*)(RankIDCollectionItemControllerCA*))(Il2CppBase() + 0x380B230))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(RankIDCollectionItemControllerCA*))(Il2CppBase() + 0x380B518))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(RankIDCollectionItemControllerCA*))(Il2CppBase() + 0x380B51C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(RankIDCollectionItemControllerCA*))(Il2CppBase() + 0x380B520))(this);
	}

};

}
