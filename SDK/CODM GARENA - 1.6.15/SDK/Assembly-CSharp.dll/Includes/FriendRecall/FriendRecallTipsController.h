#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FriendRecall {

class FriendRecallTipsController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FriendRecall", "FriendRecallTipsController"));
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

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(FriendRecallTipsController*))(Il2CppBase() + 0x32D449C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(FriendRecallTipsController*))(Il2CppBase() + 0x32D4540))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(FriendRecallTipsController*))(Il2CppBase() + 0x32D4838))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(FriendRecallTipsController*))(Il2CppBase() + 0x32D4840))(this);
	}

};

}
