#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Tutorial {

class TutorialControllerOutGame
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Tutorial", "TutorialController_OutGame"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_FackBtnCallback() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_UnforceTouchCallback() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& currentType() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& CurrentTask() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMask2Click() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationRefresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFakeBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCommanderBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMaskDoubleClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowFingerSign() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowMaskPic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IDataTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = void> T OnMask2Click() {
		return ((T (*)(TutorialControllerOutGame*))(Il2CppBase() + 0x4231960))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(TutorialControllerOutGame*))(Il2CppBase() + 0x4231DA8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(TutorialControllerOutGame*))(Il2CppBase() + 0x4231E4C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(TutorialControllerOutGame*))(Il2CppBase() + 0x4231F58))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(TutorialControllerOutGame*))(Il2CppBase() + 0x4232404))(this);
	}
	template <typename T = void> T OnNavigationRefresh(uintptr_t Msg) {
		return ((T (*)(TutorialControllerOutGame*, uintptr_t))(Il2CppBase() + 0x4232678))(this, Msg);
	}
	template <typename T = void> T OnFakeBtnClick() {
		return ((T (*)(TutorialControllerOutGame*))(Il2CppBase() + 0x4232834))(this);
	}
	template <typename T = void> T OnCommanderBtnClick() {
		return ((T (*)(TutorialControllerOutGame*))(Il2CppBase() + 0x4232920))(this);
	}
	template <typename T = void> T OnMaskDoubleClick(uintptr_t o) {
		return ((T (*)(TutorialControllerOutGame*, uintptr_t))(Il2CppBase() + 0x4232D54))(this, o);
	}
	template <typename T = void> T OnShowFingerSign(uintptr_t Msg) {
		return ((T (*)(TutorialControllerOutGame*, uintptr_t))(Il2CppBase() + 0x4232EF8))(this, Msg);
	}
	template <typename T = void> T OnShowMaskPic(uintptr_t Msg) {
		return ((T (*)(TutorialControllerOutGame*, uintptr_t))(Il2CppBase() + 0x42364CC))(this, Msg);
	}
	template <typename T = void> T IDataTrigger() {
		return ((T (*)(TutorialControllerOutGame*))(Il2CppBase() + 0x4236650))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(TutorialControllerOutGame*))(Il2CppBase() + 0x4236750))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(TutorialControllerOutGame*))(Il2CppBase() + 0x4236758))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(TutorialControllerOutGame*))(Il2CppBase() + 0x4236760))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(TutorialControllerOutGame*))(Il2CppBase() + 0x4236768))(this);
	}

};

}
