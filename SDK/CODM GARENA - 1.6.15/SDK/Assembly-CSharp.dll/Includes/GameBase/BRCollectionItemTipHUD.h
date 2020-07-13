#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class BRCollectionItemTipHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "BRCollectionItemTipHUD"));
	}

	template <typename T = uintptr_t> T& debugLabel() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& m_IconSprite() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckMsgValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBRCollectionItemChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowDebugInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T get_CollectionType() {
		return ((T (*)(BRCollectionItemTipHUD*))(Il2CppBase() + 0x37411EC))(this);
	}
	template <typename T = bool> T CheckMsgValid(uintptr_t msg) {
		return ((T (*)(BRCollectionItemTipHUD*, uintptr_t))(Il2CppBase() + 0x37411F4))(this, msg);
	}
	template <typename T = void> T OnBRCollectionItemChanged(uintptr_t msg) {
		return ((T (*)(BRCollectionItemTipHUD*, uintptr_t))(Il2CppBase() + 0x3741304))(this, msg);
	}
	template <typename T = void> T OnShowDebugInfo(Il2CppString* info) {
		return ((T (*)(BRCollectionItemTipHUD*, Il2CppString*))(Il2CppBase() + 0x3741628))(this, info);
	}
	template <typename T = bool> T xLuaBaseProxy_CheckMsgValid(uintptr_t P0) {
		return ((T (*)(BRCollectionItemTipHUD*, uintptr_t))(Il2CppBase() + 0x3741798))(this, P0);
	}

};

}
