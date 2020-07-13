#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsQuestionNaireControllerEn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsQuestionNaireController_En"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uint64_t> T& m_SeqId() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& m_TargetUrl() {
		return *(T*)((uintptr_t)this + 0x58);
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
	template <typename T = uintptr_t> static T& __Hotfix0__OnBtnRewardClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnBtnGoClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T Init() {
		return ((T (*)(LiveOpsQuestionNaireControllerEn*))(Il2CppBase() + 0x351D46C))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LiveOpsQuestionNaireControllerEn*))(Il2CppBase() + 0x351D578))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LiveOpsQuestionNaireControllerEn*))(Il2CppBase() + 0x351D61C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LiveOpsQuestionNaireControllerEn*))(Il2CppBase() + 0x351D7FC))(this);
	}
	template <typename T = void> T _OnBtnRewardClick() {
		return ((T (*)(LiveOpsQuestionNaireControllerEn*))(Il2CppBase() + 0x351D978))(this);
	}
	template <typename T = void> T _OnBtnGoClick() {
		return ((T (*)(LiveOpsQuestionNaireControllerEn*))(Il2CppBase() + 0x351DB58))(this);
	}
	template <typename T = void> T UpdateView(uintptr_t activity, bool bInit) {
		return ((T (*)(LiveOpsQuestionNaireControllerEn*, uintptr_t, bool))(Il2CppBase() + 0x351DE00))(this, activity, bInit);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LiveOpsQuestionNaireControllerEn*))(Il2CppBase() + 0x351E058))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LiveOpsQuestionNaireControllerEn*))(Il2CppBase() + 0x351E060))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LiveOpsQuestionNaireControllerEn*))(Il2CppBase() + 0x351E068))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LiveOpsQuestionNaireControllerEn*))(Il2CppBase() + 0x351E070))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateView(uintptr_t P0, bool P1) {
		return ((T (*)(LiveOpsQuestionNaireControllerEn*, uintptr_t, bool))(Il2CppBase() + 0x351E078))(this, P0, P1);
	}

};

}
