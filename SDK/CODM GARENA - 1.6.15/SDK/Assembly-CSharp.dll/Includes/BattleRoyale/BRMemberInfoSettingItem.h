#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRMemberInfoSettingItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRMemberInfoSettingItem"));
	}

	template <typename T = uintptr_t> T& Btn() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& LabelName() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& LabelPressName() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& SpritePress() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uint64_t> T& m_PlayerId() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& m_Callback() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& m_Info() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BRMemberInfoSettingItem*))(Il2CppBase() + 0x19564E0))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BRMemberInfoSettingItem*))(Il2CppBase() + 0x1956680))(this);
	}
	template <typename T = void> T SetData(uintptr_t eInfo, uint64_t playerId, uintptr_t callback) {
		return ((T (*)(BRMemberInfoSettingItem*, uintptr_t, uint64_t, uintptr_t))(Il2CppBase() + 0x1956820))(this, eInfo, playerId, callback);
	}
	template <typename T = void> T OnBtnClick() {
		return ((T (*)(BRMemberInfoSettingItem*))(Il2CppBase() + 0x1956AD0))(this);
	}
	template <typename T = void> T OnPress(bool bPress) {
		return ((T (*)(BRMemberInfoSettingItem*, bool))(Il2CppBase() + 0x1956D7C))(this, bPress);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BRMemberInfoSettingItem*))(Il2CppBase() + 0x1956E70))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BRMemberInfoSettingItem*))(Il2CppBase() + 0x1956E78))(this);
	}

};

}
