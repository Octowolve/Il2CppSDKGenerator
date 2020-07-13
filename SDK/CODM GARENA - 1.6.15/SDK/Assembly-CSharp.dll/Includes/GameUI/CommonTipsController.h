#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class CommonTipsController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "CommonTipsController"));
	}

	template <typename T = uintptr_t> T& m_TipsView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& m_LastTips() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_PendingTips() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> static T& MAX_PENDING_TIPS_COUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLastCommonTipsShowed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyOnScreenCapture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowNextTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Close() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T set_BeginPos(Il2CppVector3 value) {
		return ((T (*)(CommonTipsController*, Il2CppVector3))(Il2CppBase() + 0x3DF50C0))(this, value);
	}
	template <typename T = void> T set_EndPos(Il2CppVector3 value) {
		return ((T (*)(CommonTipsController*, Il2CppVector3))(Il2CppBase() + 0x3DF5180))(this, value);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(CommonTipsController*))(Il2CppBase() + 0x3DF5244))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(CommonTipsController*))(Il2CppBase() + 0x3DF5318))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(CommonTipsController*))(Il2CppBase() + 0x3DF5454))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(CommonTipsController*))(Il2CppBase() + 0x3DF55F4))(this);
	}
	template <typename T = void> T OnLastCommonTipsShowed(uintptr_t msg) {
		return ((T (*)(CommonTipsController*, uintptr_t))(Il2CppBase() + 0x3DF5774))(this, msg);
	}
	template <typename T = void> T OnNotifyOnScreenCapture(uintptr_t msg) {
		return ((T (*)(CommonTipsController*, uintptr_t))(Il2CppBase() + 0x3DF5A40))(this, msg);
	}
	template <typename T = void> T ShowNextTips() {
		return ((T (*)(CommonTipsController*))(Il2CppBase() + 0x3DF5858))(this);
	}
	template <typename T = void> T ShowTips(Il2CppString* tipsContent, float visibleTime, bool repeatable) {
		return ((T (*)(CommonTipsController*, Il2CppString*, float, bool))(Il2CppBase() + 0x3DF5E9C))(this, tipsContent, visibleTime, repeatable);
	}
	template <typename T = void> T Close() {
		return ((T (*)(CommonTipsController*))(Il2CppBase() + 0x3DF62A4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(CommonTipsController*))(Il2CppBase() + 0x3DF6400))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(CommonTipsController*))(Il2CppBase() + 0x3DF6408))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(CommonTipsController*))(Il2CppBase() + 0x3DF6410))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(CommonTipsController*))(Il2CppBase() + 0x3DF6418))(this);
	}

};

}
