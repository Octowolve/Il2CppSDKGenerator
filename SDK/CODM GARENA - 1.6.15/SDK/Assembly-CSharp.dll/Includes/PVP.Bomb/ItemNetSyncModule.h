#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Bomb {

class ItemNetSyncModule
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Bomb", "ItemNetSyncModule"));
	}

	template <typename T = uintptr_t> T& m_Pawn() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_BombGame() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_BombGameInfo() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T PreInit() {
		return ((T (*)(ItemNetSyncModule*))(Il2CppBase() + 0x34407C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PreInit() {
		return ((T (*)(ItemNetSyncModule*))(Il2CppBase() + 0x34409B0))(this);
	}

};

}
