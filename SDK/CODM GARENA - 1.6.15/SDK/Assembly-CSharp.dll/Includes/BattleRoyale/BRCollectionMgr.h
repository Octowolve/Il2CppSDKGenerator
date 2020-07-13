#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRCollectionMgr
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRCollectionMgr"));
	}

	template <typename T = Il2CppDictionary<int32_t, int32_t>*> T& m_CollectionInfo() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncCollectionItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCollectionItemInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCollectionInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T OnSyncCollectionItem(uintptr_t recData) {
		return ((T (*)(BRCollectionMgr*, uintptr_t))(Il2CppBase() + 0x2511CE0))(this, recData);
	}
	template <typename T = void> T UpdateCollectionItemInfo(int32_t itemID, int32_t count) {
		return ((T (*)(BRCollectionMgr*, int32_t, int32_t))(Il2CppBase() + 0x2511E74))(this, itemID, count);
	}
	template <typename T = void> T ShowCollectionInfo(int32_t itemID, int32_t count) {
		return ((T (*)(BRCollectionMgr*, int32_t, int32_t))(Il2CppBase() + 0x2511F80))(this, itemID, count);
	}

};

}
