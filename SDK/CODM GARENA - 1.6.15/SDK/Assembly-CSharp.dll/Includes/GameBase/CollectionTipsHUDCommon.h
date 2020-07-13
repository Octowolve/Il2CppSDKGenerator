#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class CollectionTipsHUDCommon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "CollectionTipsHUDCommon"));
	}

	template <typename T = bool> T& m_IsTipsInit() {
		return *(T*)((uintptr_t)this + 0x79);
	}
	template <typename T = uintptr_t> T& m_TipsMgr() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& TotalCountLabel() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_FloatNumberLabel() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& WholeWidget() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigDefaultState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowTipsWithCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckMsgValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TrySetActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BtnInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = uintptr_t> T get_CollectionType() {
		return ((T (*)(CollectionTipsHUDCommon*))(Il2CppBase() + 0x3C7D66C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(CollectionTipsHUDCommon*))(Il2CppBase() + 0x3C7D674))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(CollectionTipsHUDCommon*))(Il2CppBase() + 0x3C7D730))(this);
	}
	template <typename T = void> T ShowEffect() {
		return ((T (*)(CollectionTipsHUDCommon*))(Il2CppBase() + 0x3C7D7EC))(this);
	}
	template <typename T = void> T ConfigDefaultState() {
		return ((T (*)(CollectionTipsHUDCommon*))(Il2CppBase() + 0x3C7D8D8))(this);
	}
	template <typename T = void> T ShowTips() {
		return ((T (*)(CollectionTipsHUDCommon*))(Il2CppBase() + 0x3C7D9C4))(this);
	}
	template <typename T = void> T ShowTipsWithCount(int32_t count, int32_t addCount) {
		return ((T (*)(CollectionTipsHUDCommon*, int32_t, int32_t))(Il2CppBase() + 0x3C7DCD0))(this, count, addCount);
	}
	template <typename T = bool> T CheckMsgValid(uintptr_t msg) {
		return ((T (*)(CollectionTipsHUDCommon*, uintptr_t))(Il2CppBase() + 0x3C7DF78))(this, msg);
	}
	template <typename T = void> T TrySetActive(bool isActive, uintptr_t rootComponent) {
		return ((T (*)(CollectionTipsHUDCommon*, bool, uintptr_t))(Il2CppBase() + 0x3C7DAF8))(this, isActive, rootComponent);
	}
	template <typename T = void> T BtnInit(uintptr_t showRoot) {
		return ((T (*)(CollectionTipsHUDCommon*, uintptr_t))(Il2CppBase() + 0x3C7E020))(this, showRoot);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(CollectionTipsHUDCommon*))(Il2CppBase() + 0x3C7E5E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(CollectionTipsHUDCommon*))(Il2CppBase() + 0x3C7E5E8))(this);
	}

};

}
