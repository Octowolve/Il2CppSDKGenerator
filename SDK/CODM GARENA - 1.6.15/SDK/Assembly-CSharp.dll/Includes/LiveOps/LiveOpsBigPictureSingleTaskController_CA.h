#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsBigPictureSingleTaskControllerCA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsBigPictureSingleTaskController_CA"));
	}

	template <typename T = uintptr_t> T& m_view() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_TabData() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_ActivityData() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& m_TaskData() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppVector2> T& m_OrignalSize() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppVector2> T& m_SafeSize() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppVector2> T& m_ViewSize() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> static T& m_TitleDistanceToTop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& m_TitleDistanceToRight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& m_BtnDistanceToButtom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& m_BtnDistanceToRight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGoBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClaimBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTaskData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTextureContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcPictureAdaptation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = void> T Init() {
		return ((T (*)(LiveOpsBigPictureSingleTaskControllerCA*))(Il2CppBase() + 0x356EE84))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LiveOpsBigPictureSingleTaskControllerCA*))(Il2CppBase() + 0x356EF8C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LiveOpsBigPictureSingleTaskControllerCA*))(Il2CppBase() + 0x356F030))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LiveOpsBigPictureSingleTaskControllerCA*))(Il2CppBase() + 0x356F1C8))(this);
	}
	template <typename T = void> T OnGoBtnClick() {
		return ((T (*)(LiveOpsBigPictureSingleTaskControllerCA*))(Il2CppBase() + 0x356F340))(this);
	}
	template <typename T = void> T OnClaimBtnClick() {
		return ((T (*)(LiveOpsBigPictureSingleTaskControllerCA*))(Il2CppBase() + 0x356F480))(this);
	}
	template <typename T = void> T SetTaskData(uintptr_t TaskData) {
		return ((T (*)(LiveOpsBigPictureSingleTaskControllerCA*, uintptr_t))(Il2CppBase() + 0x356F5F0))(this, TaskData);
	}
	template <typename T = void> T RefreshView() {
		return ((T (*)(LiveOpsBigPictureSingleTaskControllerCA*))(Il2CppBase() + 0x356FC24))(this);
	}
	template <typename T = void> T UpdateView(uintptr_t data, Il2CppVector2 viewSize) {
		return ((T (*)(LiveOpsBigPictureSingleTaskControllerCA*, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x356FCF4))(this, data, viewSize);
	}
	template <typename T = void> T SetTextureContent(Il2CppString* url, bool bSuccess, uintptr_t texture) {
		return ((T (*)(LiveOpsBigPictureSingleTaskControllerCA*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x357076C))(this, url, bSuccess, texture);
	}
	template <typename T = void> T CalcPictureAdaptation() {
		return ((T (*)(LiveOpsBigPictureSingleTaskControllerCA*))(Il2CppBase() + 0x357030C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LiveOpsBigPictureSingleTaskControllerCA*))(Il2CppBase() + 0x35708D4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LiveOpsBigPictureSingleTaskControllerCA*))(Il2CppBase() + 0x35708D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LiveOpsBigPictureSingleTaskControllerCA*))(Il2CppBase() + 0x35708DC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LiveOpsBigPictureSingleTaskControllerCA*))(Il2CppBase() + 0x35708E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshView() {
		return ((T (*)(LiveOpsBigPictureSingleTaskControllerCA*))(Il2CppBase() + 0x35708E4))(this);
	}

};

}
